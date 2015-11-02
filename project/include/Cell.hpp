#ifndef CELL_HPP_
# define CELL_HPP_

#include "Enumeration.hpp"
#include "Position.hpp"
#include "ISnake.hpp"
#include "ItemCrashable.hpp"

class Cell
{
private:
  ItemCrashable *_item;
  TypeItem _type;
  Position *_position;
public:
  Cell();
  ~Cell();
  Position *getPosition();
  bool checkItem(Snake**);
  TypeItem getTypeItem(void);
  Position *addItem(void);
  bool deleteItem(int);
};

#endif /* !CELL_HPP_ */
