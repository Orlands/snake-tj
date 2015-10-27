#ifndef MAP_HPP_
# define MAP_HPP_

#include "Enumeration.hpp"
#include "Position.hpp"
#include "ISnake.hpp"
#include "Cell.hpp"

class Map
{
private:
  std::vector<Cell> _gameMaps;
  std::vector<ISnake *> _playerBody;
public:
  Map();
  ~Map();
  bool check(Direction);
  bool checkCell(const Position &);
  bool generateFood();
};

#endif /* !MAP_HPP_ */
