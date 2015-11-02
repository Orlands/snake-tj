#ifndef ISNAKE_HPP_
# define ISNAKE_HPP_

#include <iostream>
#include <vector>

#include "Position.hpp"
#include "Enumeration.hpp"

class ISnake
{
public :
  virtual Position *getNextPosition() = 0;
  virtual Position *check(Direction) = 0;
  virtual bool move() = 0;
};

#endif /* !ISNAKE_HPP_ */
