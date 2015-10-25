#ifndef POSITION_HPP_
# define POSITION_HPP_

#include <iostream>

class Position
{
private:
  int x;
  int y;
public:
  Position(int, int);
  virtual ~Position();
  int getX();
  int getY();
  void toString();
};

#endif
