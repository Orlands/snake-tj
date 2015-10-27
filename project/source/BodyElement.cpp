#include "BodyElement.hpp"

BodyElement::BodyElement()
{
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

bool BodyElement::isCollide()
{
  return (true);
}

bool BodyElement::add()
{
  return (true);
}

bool BodyElement::remove()
{
  return (true);
}
