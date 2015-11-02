#include "Position.hpp"

Position::Position(int xVal, int yVal) : _x(xVal), _y(yVal)
{
  (void)xVal;
  (void)yVal;
}

Position::~Position()
{
}

void Position::setX(int xVal)
{
  this->_x = xVal;
}

void Position::setY(int yVal)
{
  this->_y = yVal;
}

int Position::getX()
{
  return this->_x;
}

int Position::getY()
{
  return this->_y;
}

void Position::toString()
{
  std::cout << "[Pos X:" << this->_x << "][Pos Y:" << this->_y + "]" << std::endl;
}
