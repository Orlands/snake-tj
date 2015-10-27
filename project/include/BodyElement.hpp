#ifndef BODYELEMENT_HPP_
# define BODYELEMENT_HPP_

#include "ISnake.hpp"

class BodyElement : public ISnake
{
private:
  
public:
  BodyElement();
  virtual ~BodyElement();
  virtual Position *getNextPosition();
  virtual Position *check(Direction);
  virtual bool move();
  virtual bool isCollide();
  virtual bool add();
  virtual bool remove();
};

#endif /* !BODYELEMENT_HPP_ */
