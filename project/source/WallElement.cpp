#include "WallElement.hpp"

WallElement::WallElement(int xVal, int yVal)
{
  this->_itemPosition = new Position(xVal, yVal);
}

WallElement::~WallElement()
{
  std::cout << "Destructor of the class `Food`" << std::endl;
}

Position *WallElement::getCurrentPosition()
{
  return this->_itemPosition;
}

void WallElement::setPosition(int xVal, int yVal)
{
  if ((xVal <= 0) || (yVal <= 0))
    return ;
  (this->_itemPosition)->setX(xVal);
  (this->_itemPosition)->setY(yVal);
}

bool WallElement::isCollide(Snake **playerBody)
{
  if (((*playerBody)->remove(0)) == false)
    throw Exception("Error on WallElement ...\n");
  return (true);
}
