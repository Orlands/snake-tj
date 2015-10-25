#include "Position.hpp"

Position::Position(int xVal, int yVal) : x(xVal), y(yVal)
{
  (void)xVal;
  (void)yVal;
  std::cout << "Constructor of position making position(" << x << ";"<< y << ")"<< std::endl;
}

Position::~Position()
{
}

int Position::getX()
{
  return this->x;
}

int Position::getY()
{
  return this->y;
}

void Position::toString()
{
  std::cout << "[Pos X:" << this->x << "][Pos Y:" << this->y + "]" << std::endl;
}
