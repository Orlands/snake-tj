#include "WallElement.hpp"

WallElement::WallElement(int xVal, int yVal)
{
  std::cout << "WallElement created" << std::endl;
  this->_itemPosition = new Position(xVal, yVal);
}

WallElement::~WallElement()
{
  std::cout << "WallElement destroyed" << std::endl;
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
  (void)playerBody;
  return (false);
}
