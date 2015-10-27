#include "Snake.hpp"

Snake::Snake()
{
}

Snake::~Snake()
{
}

Position *Snake::getNextPosition()
{
  Position *tmp_position = NULL;
  tmp_position = new Position(0, 0);
  return (tmp_position);
}

Position *Snake::check(Direction new_direction)
{ 
  Position *tmp_position = NULL;
  tmp_position = new Position(0, 0);
  (void)new_direction;
  return (tmp_position);
}

bool Snake::move()
{
  return (true);
}

bool Snake::isCollide()
{
  return (true);
}

bool Snake::add()
{
  return (true);
}

bool Snake::remove()
{
  return (true);
}
