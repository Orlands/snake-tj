#ifndef FOOD_HPP_
# define FOOD_HPP_

#include <iostream>
#include "ItemCrashable.hpp"

class Food : public ItemCrashable
{
private:
  bool state;
  Position *item_position;
public:
  Food();
  virtual ~Food();
  virtual Position getCurrentPosition();
  virtual void setPosition();
  virtual bool getState();
  virtual bool isCollide();
};

#endif
