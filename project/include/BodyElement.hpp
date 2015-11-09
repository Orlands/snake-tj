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
  virtual Position *getNextPosition(void);
  virtual Position *check(Direction);
  virtual bool move(void);
  Position *getPosition(void);
  Direction getCurrentDirection(void);
  void setPosition(int, int);
  void setCurrentDirection(Direction);
  int getX(void);
  int getY(void);
};

#endif /* !BODYELEMENT_HPP_ */
