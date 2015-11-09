#include "Food.hpp"

Food::Food(int xVal, int yVal)
{
  this->_itemPosition = new Position(xVal, yVal);
}

Food::~Food()
{
  std::cout << "Destructor of the class `Food`" << std::endl;
}

Position *Food::getCurrentPosition()
{
  return this->_itemPosition;
}

void Food::setPosition(int xVal, int yVal)
{
  if ((xVal <= 0) || (yVal <= 0))
    return ;
  (this->_itemPosition)->setX(xVal);
  (this->_itemPosition)->setY(yVal);
}

bool Food::isCollide(Snake **playerBody)
{
  if ((*playerBody)->add() == false)
    throw Exception("Error on Food ...\n");
  return (true);
}
