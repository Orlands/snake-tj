#include <iostream>

#include "Controller.hpp"
#include "InputEvent.hpp"
#include "Exception.hpp"

Controller::Controller(int xVal, int yVal)
{
  this->_currentDirection = EMPTY;
  if (this->makeMap(xVal, yVal) == false)
    throw Exception("Error on constructor of class `Controller`\n");
}

Controller::~Controller()
{
  std::cout << "Destructor of the class `Controller`" << std::endl;
}

bool Controller::makeMap(int xVal, int yVal)
{
  this->_map = new Map(xVal, yVal);
  return (true);
}

bool Controller::keyPressed()
{
  InputEvent *eventCatcher = NULL;
  Direction directionPressed = EMPTY;

  eventCatcher = new InputEvent();
  directionPressed = eventCatcher->getPressedKey();
  if ((directionPressed != EMPTY) && 
      (this->_map)->check(directionPressed) == false)
    return false;
  return (true);
}

void Controller::gameOver()
{
  std::cout << "Game Over" << std::endl;
}

bool Controller::startGame()
{
  for (;;)
    {
      if (this->keyPressed() == false)
	{
	  this->gameOver();
	  return (false);
	}
    }
  return (true);
}
