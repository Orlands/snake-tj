#include "Cell.hpp"

Cell::Cell(int xVal, int yVal)
{
  this->_position = new Position(xVal, yVal);
}


Cell::~Cell()
{
  std::cout << "Destructor of the class `Cell`" << std::endl;
}

bool Cell::checkItem(Snake **player_body)
{
  if (this->_item != NULL)
    {
      if (((this->_item)->isCollide(player_body)) == false)
	return (false);
    }
  return (true);
}

Position *Cell::addItem(Food *new_food)
{
  Position *ret_position = NULL;

  if (this->_item != NULL)
    {
      this->_item = new_food;
      (this->_item)->setPosition((this->_position)->getX(), (this->_position)->getY());
    }
  return (ret_position);
}

Position *Cell::addItem(WallElement *new_wall)
{
  Position *ret_position = NULL;

  if (this->_item != NULL)
    {
      this->_item = new_wall;
      (this->_item)->setPosition((this->_position)->getX(), (this->_position)->getY());
    }
  return (ret_position);
}

bool Cell::deleteItem()
{
  if (this->_item != NULL)
    {
      // delete this->_item;
      this->_item = NULL;
    }
  return (true);
}
