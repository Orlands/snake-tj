#include "Cell.hpp"

Cell::Cell()
{
  this->_item = NULL;
  this->_type = NONE;
  this->_position = NULL;
}

Cell::~Cell()
{
}

bool Cell::checkItem(Snake **player_body)
{
  if (this->_item != NULL)
    {
      (void)player_body;
    }
  return (true);
}

TypeItem Cell::getTypeItem()
{
  return this->_type;
}

Position *Cell::addItem()
{
  Position *ret_position = NULL;
  ret_position = new Position(0, 0);
  return (ret_position);
}

bool Cell::deleteItem(int index)
{
  (void)index;
  return (true);
}
