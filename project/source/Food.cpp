#include "Food.hpp"

Food::Food()
{
  std::cout << "Food created" << std::endl;
  this->state = true;
}

Food::~Food()
{
  std::cout << "Food destroyed" << std::endl;
}

Position Food::getCurrentPosition()
{
  Position *tmp_pos = NULL;
  return *tmp_pos;
}

void Food::setPosition()
{
}

bool Food::getState()
{
  return this->state;
}

bool Food::isCollide()
{
  return (true);
}

