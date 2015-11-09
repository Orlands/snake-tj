#include "BodyElement.hpp"

BodyElement::BodyElement(int xVal, int yVal)
{
  this->_itemPosition = new Position(xVal, yVal);
  this->_currentDirection = EMPTY;
}

BodyElement::~BodyElement()
{
  std::cout << "Destructor of the class `BodyElement`" << std::endl;
}

Position *BodyElement::getNextPosition()
{
  int nextX = 0;
  int nextY = 0;
  Position *tmp_position = NULL;

  nextX = (this->_itemPosition)->getX();
  nextY = (this->_itemPosition)->getY();
  if (this->_currentDirection == EMPTY)
    return (NULL);
  nextY = (this->_currentDirection == UP) ? nextY + 1 : nextY;
  nextY = (this->_currentDirection == DOWN) ? nextY - 1 : nextY;
  nextX = (this->_currentDirection == LEFT) ? nextX - 1 : nextX;
  nextX = (this->_currentDirection == RIGHT) ? nextX + 1 : nextX;
  tmp_position = new Position(nextX, nextY);
  return (tmp_position);
}

Position *BodyElement::check(Direction new_direction)
{
  Position *tmp_position = NULL;
  tmp_position = new Position(0, 0);
  UNUSED(new_direction);
  return (tmp_position);
}

bool BodyElement::move()
{
  int xVal = 0;
  int yVal = 0;

  xVal = (this->_itemPosition)->getX();
  yVal = (this->_itemPosition)->getY();
  yVal = (this->_currentDirection == UP) ? yVal + 1 : yVal;
  yVal = (this->_currentDirection == DOWN) ? yVal - 1 : yVal;
  xVal = (this->_currentDirection == LEFT) ? xVal - 1 : xVal;
  xVal = (this->_currentDirection == RIGHT) ? xVal + 1 : xVal;
  (this->_itemPosition)->setX(xVal);
  (this->_itemPosition)->setY(yVal);
  return (true);
}

Position *BodyElement::getPosition()
{
  return this->_itemPosition;
}

Direction BodyElement::getCurrentDirection()
{
  return this->_currentDirection;
}

void BodyElement::setPosition(int xVal, int yVal)
{
  if ((xVal <= 0) || (yVal <= 0))
    return ;
  (this->_itemPosition)->setX(xVal);
  (this->_itemPosition)->setY(yVal);
}

void BodyElement::setCurrentDirection(Direction new_direction)
{
  this->_currentDirection = new_direction;
}

int BodyElement::getX()
{
  return ((this->_itemPosition)->getX());
}

int BodyElement::getY()
{
  return ((this->_itemPosition)->getY());
}
