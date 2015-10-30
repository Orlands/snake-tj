#ifndef ITEMCRASHABLE_HPP_
# define ITEMCRASHABLE_HPP_

#include "Position.hpp"

class ItemCrashable {
public:
  virtual Position getCurrentPosition() = 0;
  virtual void setPosition() = 0;
  virtual bool getState() = 0;
  virtual bool isCollide() = 0;
};

#endif /* ITEMCRASHABLE_HPP_ */
