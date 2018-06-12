#include "node.h"


Node::Node()
{

}

Node::~Node()
{
  delete next;
  delete prev;
}
