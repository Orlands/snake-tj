#include "Snake.hpp"

Snake::Snake(int xVal, int yVal)
{
  this->_itemPosition = new Position(xVal, yVal);
  this->_currentDirection = EMPTY;
}

Snake::~Snake()
{
  std::cout << "Destructor of the class `Snake`" << std::endl;
}

Position *Snake::getNextPosition()
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

Position *Snake::check(Direction new_direction)
{
  UNUSED(new_direction);
  if (this->checkSelfCollision() == false)
    return (NULL);
  return (this->_itemPosition);
}

bool Snake::move()
{
  int new_x = 0;
  int new_y = 0;

  for (std::list<BodyElement *>::iterator it = this->_bodyList.begin(); 
       it != this->_bodyList.end(); 
       ++it)
    (*it)->move();
  new_x = (this->_itemPosition)->getX();
  new_y = (this->_itemPosition)->getY();
  new_y = (this->_currentDirection == UP) ? new_y - 1 : new_y;
  new_y = (this->_currentDirection == DOWN) ? new_y + 1 : new_y;
  new_x =  (this->_currentDirection == LEFT) ? new_x - 1 : new_x;
  new_x = (this->_currentDirection == RIGHT) ? new_x + 1 : new_x;
  (this->_itemPosition)->setX(new_x);
  (this->_itemPosition)->setY(new_y);
  return (true);
}

bool Snake::checkSelfCollision()
{
  for (std::list<BodyElement *>::iterator it = this->_bodyList.begin(); 
       it != this->_bodyList.end(); 
       ++it)
    {
      if ((*it)->check(this->_currentDirection) == false)
	return (true);
      // Check self-collision
    }
  return (false);
}

bool Snake::add()
{
  int lastPosX = 0;
  int lastPosY = 0;
  BodyElement *tail_snake = NULL;

  // Get last position of the snake
  tail_snake = new BodyElement(lastPosX, lastPosY);
  (this->_bodyList).push_back(tail_snake);
  return (true);
}

bool Snake::remove(int index)
{
  int _index = 0;
  for (std::list<BodyElement *>::iterator it = this->_bodyList.begin(); 
       it != this->_bodyList.end(); 
       ++it, _index++)
    if (_index == index)
      {
	this->_bodyList.remove((*it));
	return (true);
      }
  return (false);
}
