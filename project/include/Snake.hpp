#ifndef SNAKE_HPP_
# define SNAKE_HPP_

#include <list>
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
  Position *getCurrentPosition();
  void setPosition(int, int);
  int getX(void);
  int getY(void);
  Direction getCurrentDirection(void);
};

class Snake : public ISnake
{
private:
  std::list<BodyElement *> _body;
public:
  Snake();
  virtual ~Snake();
  virtual Position *getNextPosition();
  virtual Position *check(Direction);
  virtual bool move();
  bool isCollide();
  bool add();
  bool remove(int);
};

#endif /* !SNAKE_HPP_ */
