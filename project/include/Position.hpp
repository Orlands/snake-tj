#ifndef POSITION_HPP_
# define POSITION_HPP_

#include <iostream>

#include "Definer.hpp"

class Position
{
private:
  int _x;
  int _y;
public:
  Position(int, int);
  virtual ~Position();
  void setX(int);
  void setY(int);
  int getX(void);
  int getY(void);
  void toString(void);
};

#endif /* !POSITION_HPP_ */
