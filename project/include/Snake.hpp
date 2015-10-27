#ifndef SNAKE_HPP_
# define SNAKE_HPP_

#include "ISnake.hpp"

class Snake : public ISnake
{
private:
  
public:
  Snake();
  virtual ~Snake();
  virtual Position *getNextPosition();
  virtual Position *check(Direction);
  virtual bool move();
  virtual bool isCollide();
  virtual bool add();
  virtual bool remove();
};

#endif /* !SNAKE_HPP_ */
