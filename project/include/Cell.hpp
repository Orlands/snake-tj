/** @file Cell.hpp
*
*/

#ifndef CELL_HPP_
# define CELL_HPP_

#include "Enumeration.hpp"
#include "Position.hpp"
#include "ISnake.hpp"
#include "ItemCrashable.hpp"
#include "Food.hpp"
#include "WallElement.hpp"

class Cell
{
private:
public:
  Position *_position;
  ItemCrashable *_item;

  Cell(int, int);
  virtual ~Cell();
  Position *getPosition(void);
  bool checkItem(Snake**);
  Position *addItem(Food *);
  Position *addItem(WallElement *);
  bool deleteItem(void);
};

#endif /* !CELL_HPP_ */
