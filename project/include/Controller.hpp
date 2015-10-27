#ifndef CONTROLLER_HPP_
# define CONTROLLER_HPP

#include <iostream>

#include "Enumeration.hpp"

class Controller
{
private:
  Direction _currentDirection;

  bool makeMap();
  bool keyPressed();
  void gameOver();
public:
  Controller(int, int);
  virtual ~Controller();
  bool startGame();
};

#endif /* !CONTROLLER_HPP_ */
