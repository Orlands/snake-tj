#include "Map.hpp"

Map::Map()
{
}

Map::~Map()
{
}

bool check(Direction new_direction)
{
  (void)new_direction;
  return (true);
}

bool checkCell(const Position &new_position)
{
  (void)new_position;
  new_position->getX();
  new_position->getY();
  for (std::vector<Cell>::size_type i = 0; i != v.size(); i++)
    {
      this->game_maps[i];
      ((this->_gameMaps[i]).getPosition())->getX();
      ((this->_gameMaps[i]).getPosition())->getY();
    }
  return (true);
}

bool generateFood()
{
  return (true);
}
