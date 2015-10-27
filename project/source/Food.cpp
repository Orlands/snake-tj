#include "Food.hpp"

Food::Food()
{
  std::cout << "Food created" << std::endl;
  this->_state = true;
  this->_itemPosition = NULL;
}

Food::~Food()
{
  std::cout << "Food destroyed" << std::endl;
}

Position *Food::getCurrentPosition()
{
  return this->_itemPosition;
}

void Food::setPosition(Position *new_position)
{
  if ((new_position->getX() <= 0) || (new_position->getY() <= 0))
    return ;
  (this->_itemPosition)->setX(new_position->getX());
  (this->_itemPosition)->setY(new_position->getY());
}

bool Food::getState()
{
  return this->_state;
}

bool Food::isCollide()
{
  return (true);
}
