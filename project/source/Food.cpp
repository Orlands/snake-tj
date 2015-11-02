#include "Food.hpp"

Food::Food(int xVal, int yVal)
{
  std::cout << "Food created" << std::endl;
  this->_itemPosition = new Position(xVal, yVal);
}

Food::~Food()
{
  std::cout << "Food destroyed" << std::endl;
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
  (void)playerBody;

  BodyElement *tail_snake = NULL;
  tail_snake = new BodyElement(10, 10);

  (void)tail_snake;
  //(*playerBody)->add();
  
  return (false);
}
