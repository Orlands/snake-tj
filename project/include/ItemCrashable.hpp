/** @file ItemCrashable.hpp
*
*/

#ifndef ITEMCRASHABLE_HPP_
# define ITEMCRASHABLE_HPP_

#include "Snake.hpp"
#include "Position.hpp"

class ItemCrashable {
public:
  virtual Position *getCurrentPosition(void) = 0;
  virtual void setPosition(int, int) = 0;
  virtual bool isCollide(Snake **) = 0;
};

#endif /* ITEMCRASHABLE_HPP_ */
