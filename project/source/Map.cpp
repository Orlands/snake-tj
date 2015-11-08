#include "Food.hpp"
#include "Map.hpp"
#include <stdlib.h>

Map::Map(int xVal, int yVal)
{
  int pos = 0;

  for (int y = 0; y <= yVal; y++, pos++)
    for (int x = 0; x <= xVal; x++, pos++)
      {
	Cell *insert_cell = NULL;
	insert_cell = new Cell(x, y);
	this->_gameMaps[pos] = insert_cell;
      }
}

Map::~Map()
{
  std::cout << "Destructor of the class `Map`" << std::endl;
}

bool Map::check(Direction new_direction)
{
  UNUSED(new_direction);
  return (true);
}

bool Map::checkCell(Position *new_position)
{
  for (std::map<int, Cell *>::iterator it = this->_gameMaps.begin();
       it != this->_gameMaps.end();
       ++it)
    {
      if ((new_position->getX() == ((it->second)->_position)->getX()) && 
	  (new_position->getY() == ((it->second)->_position)->getY())) {
	if ((it->second)->checkItem(&this->_playerBody) == false)
	  return (false);
      }
    }
  return (true);
}

bool Map::checkAndGenerateFood()
{
  int randomX = 0;
  int randomY = 0;
  int random_position = 0;
  bool food_exist = false;
  
  for (std::map<int, Cell *>::iterator it = this->_gameMaps.begin();
       it != this->_gameMaps.end();
       ++it)
    if (dynamic_cast<Food *>((it->second)->_item))
      food_exist = true;
  if (food_exist == false)
    {
      random_position = (rand() % ((this->_gameMaps).size()));
      randomX = ((this->_gameMaps[random_position])->_position)->getX();
      randomY = ((this->_gameMaps[random_position])->_position)->getY();
      (this->_gameMaps[random_position])->addItem(new Food(randomX, randomY));
    }
  return (false);
}
