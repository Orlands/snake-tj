#include "WallElement.hpp"

WallElement::WallElement()
{
  std::cout << "WallElement created" << std::endl;
  this->state = true;
}

WallElement::~WallElement()
{
  std::cout << "WallElement destroyed" << std::endl;
}

Position WallElement::getCurrentPosition()
{
  Position *tmp_pos = NULL;
  return *tmp_pos;
}

void WallElement::setPosition()
{
}

bool WallElement::getState()
{
  return this->state;
}

bool WallElement::isCollide()
{
  return (true);
}

