#ifndef FOOD_HPP_
# define FOOD_HPP_

#include <iostream>
#include "ItemCrashable.hpp"

class Food : public ItemCrashable
{
private:
  bool _state;
  Position *_itemPosition;
public:
  Food();
  virtual ~Food();
  virtual Position *getCurrentPosition();
  virtual void setPosition(Position *);
  virtual bool getState();
  virtual bool isCollide();
};

#endif /* FOOD_HPP_ */
