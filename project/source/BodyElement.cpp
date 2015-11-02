#include "Snake.hpp"

BodyElement::BodyElement(int xVal, int yVal)
{
  this->_itemPosition = new Position(xVal, yVal);
}

BodyElement::~BodyElement()
{
}

Position *BodyElement::getNextPosition()
{
  Position *tmp_position = NULL;
  tmp_position = new Position(0, 0);
  return (tmp_position);
}

Position *BodyElement::check(Direction new_direction)
{
  Position *tmp_position = NULL;
  tmp_position = new Position(0, 0);
  (void)new_direction;
  return (tmp_position);
}

bool BodyElement::move()
{
  return (true);
}

Position *BodyElement::getCurrentPosition()
{
  return this->_itemPosition;
}

void BodyElement::setPosition(int xVal, int yVal)
{
  if ((xVal <= 0) || (yVal <= 0))
    return ;
  (this->_itemPosition)->setX(xVal);
  (this->_itemPosition)->setY(yVal);
}

int BodyElement::getX()
{
  return (0);
}

int BodyElement::getY()
{
  return (0);
}

Direction BodyElement::getCurrentDirection()
{
  return this->_currentDirection;
}
