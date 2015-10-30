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

bool Controller::keyPressed()
{
  return (true);
}

void Controller::gameOver()
{
  std::cout << "Game Over" << std::endl;
}

bool Controller::startGame()
{
if (this->makeMap() == false)
  return (false);
  if (this->keyPressed() == false)
  {
    this->gameOver();
    return (false);
  }
  return (true);
}
