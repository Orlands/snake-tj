#ifndef WALLEMENT_HPP_
# define WALLELEMENT_HPP_

#include <iostream>
#include "ItemCrashable.hpp"
#include "Definer.hpp"
#include "Exception.hpp"

class WallElement : public ItemCrashable
{
private:
  Position *_itemPosition;
public:
  WallElement(int, int);
  virtual ~WallElement();
  virtual Position *getCurrentPosition(void);
  virtual void setPosition(int, int);
  virtual bool isCollide(Snake **);
};

#endif /* !WALLELEMENT_HPP_ */
