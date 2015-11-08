#ifndef BODYELEMENT_HPP_
# define BODYELEMENT_HPP_

#include "ISnake.hpp"

class BodyElement : public ISnake
{
private:
  Position *_itemPosition;
  Direction _currentDirection;
public:
  BodyElement(int, int);
  virtual ~BodyElement();
  virtual Position *getNextPosition();
  virtual Position *check(Direction);
  virtual bool move();
  Position *getPosition();
  Direction getCurrentDirection();
  void setPosition(int, int);
  void setCurrentDirection(Direction);
  int getX();
  int getY();
};

#endif /* !BODYELEMENT_HPP_ */
