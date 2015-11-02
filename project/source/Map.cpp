#include "Map.hpp"

Map::Map(int xVal, int yVal)
{
  for (int y = 0; y <= yVal; y++)
    for (int x = 0; x <= xVal; x++)
      {
	/*
	Cell *insert_cell = new Cell();
	this->_gameMaps[y].push_back(insert_cell);
	*/
      }
}

Map::~Map()
{
}

bool Map::check(Direction new_direction)
{
  (void)new_direction;
  return (true);
}

bool Map::checkCell(Position *new_position)
{
  for (
       std::map<int, Cell *>::iterator it = this->_gameMaps.begin();
       it != this->_gameMaps.end();
       ++it)
    if (it->first == new_position->getY())
      {
	/*
	if (((it->second)->getPosition)->getX() == new_position->getX())
	  {
	    std::cout << "Found" << std::endl;
	  }
*/
      }
  return (true);
}

bool Map::generateFood()
{
  return (true);
}
