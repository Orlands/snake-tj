#include <iostream>
#include <stdlib.h>

#include "InputEvent.hpp"

InputEvent::InputEvent()
{
  this->_touchKey = EMPTY;
}

InputEvent::~InputEvent()
{
  std::cout << "Destructor of the class `InputEvent`" << std::endl;
}

Direction InputEvent::getPressedKey()
{
  // Catch event and which key is pressed
  // Generate a random position for a test development
  this->_touchKey = static_cast<Direction>(rand() % RIGHT);
  return (this->_touchKey);
}

void InputEvent::toString()
{
  std::cout << "The last keyPressed is " << this->_touchKey << std::endl;
}
