#ifndef WALLEMENT_HPP_
# define WALLELEMENT_HPP_

#include <iostream>
#include "ItemCrashable.hpp"

class WallElement : public ItemCrashable
{
private:
  bool state;
  Position *item_position;
public:
  WallElement();
  virtual ~WallElement();
  virtual Position getCurrentPosition();
  virtual void setPosition();
  virtual bool getState();
  virtual bool isCollide();
};

#endif
