#ifndef SNAKE_HPP_
# define SNAKE_HPP_

#include <list>
#include "BodyElement.hpp"
#include "Definer.hpp"

class Snake : public ISnake
{
private:
  Position *_itemPosition;
  Direction _currentDirection;
  std::list<BodyElement *> _bodyList;
public:
  Snake(int, int);
  virtual ~Snake();
  virtual Position *getNextPosition();
  virtual Position *check(Direction);
  virtual bool move();
  bool checkSelfCollision();
  bool add();
  bool remove(int);
};

#endif /* !SNAKE_HPP_ */
