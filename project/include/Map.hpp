#ifndef MAP_HPP_
# define MAP_HPP_

#include <map>

#include "Enumeration.hpp"
#include "Position.hpp"
#include "ISnake.hpp"
#include "Cell.hpp"

class Map
{
private:
  std::map<int, Cell *> _gameMaps;
  Snake *_playerBody;
public:
  Map(int, int);
  ~Map();
  bool check(Direction);
  bool checkCell(Position *);
  bool generateFood();
};

#endif /* !MAP_HPP_ */
