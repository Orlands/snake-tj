#ifndef POSITION_HPP_
# define POSITION_HPP_

#include <iostream>

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
  int getX();
  int getY();
  void toString();
};

#endif /* !POSITION_HPP_ */
