#include "WallElement.hpp"

WallElement::WallElement()
{
  std::cout << "WallElement created" << std::endl;
  this->_state = true;
  this->_itemPosition = NULL;
}

WallElement::~WallElement()
{
  std::cout << "WallElement destroyed" << std::endl;
}

Position *WallElement::getCurrentPosition()
{
  return this->_itemPosition;
}

void WallElement::setPosition(Position *new_position)
{

  if ((new_position->getX() <= 0) || (new_position->getY() <= 0))
    return ;
  (this->_itemPosition)->setX(new_position->getX());
  (this->_itemPosition)->setY(new_position->getY());
}

bool WallElement::getState()
{
  return this->_state;
}

bool WallElement::isCollide()
{
  return (true);
}
