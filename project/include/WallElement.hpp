#ifndef WALLEMENT_HPP_
# define WALLELEMENT_HPP_

#include <iostream>
#include "ItemCrashable.hpp"

class WallElement : public ItemCrashable
{
private:
  bool _state;
  Position *_itemPosition;
public:
  WallElement();
  virtual ~WallElement();
  virtual Position *getCurrentPosition();
  virtual void setPosition(Position *);
  virtual bool getState();
  virtual bool isCollide();
};

#endif /* !WALLELEMENT_HPP_ */
