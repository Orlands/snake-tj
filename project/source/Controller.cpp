#include <iostream>
#include "Controller.hpp"

Controller::Controller(int xVal, int yVal)
{
  (void)xVal;
  (void)yVal;
}

Controller::~Controller()
{
}

bool Controller::makeMap()
{
  
  return (true);
}

bool Controller::startGame()
{
  if (this->makeMap() == false)
    return (false);
  return (true);
}
