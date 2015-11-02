#include "Snake.hpp"

Snake::Snake()
{
  std::cout << "Snake created" << std::endl;
}

Snake::~Snake()
{
  std::cout << "Snake died" << std::endl;
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
  int new_x = 0;
  int new_y = 0;
  /* Move every block of snake position */
  for (std::list<BodyElement *>::iterator it = this->_body.begin(); it != this->_body.end(); ++it)
    {
      new_x = (*it)->getX();
      new_y = (*it)->getY();
      new_y = ((*it)->getCurrentDirection() == UP) ? (*it)->getY() - 1 : new_y;
      new_y = ((*it)->getCurrentDirection() == DOWN) ? (*it)->getY() + 1 : new_y;
      new_x =  ((*it)->getCurrentDirection() == LEFT) ? (*it)->getX() - 1 : new_x;
      new_x = ((*it)->getCurrentDirection() == RIGHT) ? (*it)->getX() + 1 : new_x;
      (*it)->setPosition(new_x, new_y);
    }
  return (true);
}

bool Snake::isCollide()
{
  /* Check if there is some self collision */
  return (true);
}

bool Snake::add()
{
  BodyElement *tail_snake = NULL;
  (void)tail_snake;
  return (true);
}

bool Snake::remove(int index)
{
  (void)index;
  return (true);
}

