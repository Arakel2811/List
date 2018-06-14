TARGET	:= test
SOURCE	:= ../src/list.cpp
SOURCE_TEST := $(wildcard ./*.cpp)
DEPS     := $(patsubst src/%.cpp, deps/%.dep, $(SOURCE))
OBJ_TEST := $(patsubst %.cpp, %.o, $(SOURCE_TEST))
INCLUDE_PATH := -I../src/
CC		:= g++
OBJECT := list.o

	
$(TARGET): $(OBJECT) $(OBJ_TEST) list.o node.o
	@mkdir -p ../test_results
	@$(CC) $^ -o  $@ 
	./test > ../test_results/test_results.txt

%.o: %.cpp 
	@$(CC) -c $^ $(INCLUDE_PATH) -o $@ 

list.o : $(SOURCE)
	@$(CC) -c $^ $(INCLUDE_PATH) -o $@

node.o : ../src/node.cpp
	@$(CC) -c $^ $(INCLUDE_PATH) -o $@

dep/%.dep : src/%.cpp
	@mkdir -p ./deps
	@$(CC) -MM $< -MT "$@ $(patsubst %.dep, %.o, $@)" -o $@ -I./src
  
	-include $(DEPS)

.PHONY: clean
clean: 
	@echo " Cleaning test data...."
	@rm -rf ./*.o
	@rm -rf test
	@rm -rf ../test_results/test_results.txt
	@rm -rf ../test_results
	@echo " Test data cleaned!!"

