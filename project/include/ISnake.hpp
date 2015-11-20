/** @file ISnake.hpp
*
*/

#ifndef ISNAKE_HPP_
# define ISNAKE_HPP_

#include <iostream>
#include <vector>

#include "Position.hpp"
#include "Enumeration.hpp"

class ISnake
{
public :
  virtual Position *getNextPosition(void) = 0;
  virtual Position *check(Direction) = 0;
  virtual bool move(void) = 0;
};

#endif /* !ISNAKE_HPP_ */
