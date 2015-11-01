#ifndef CONTROLLER_HPP_
# define CONTROLLER_HPP

#include <iostream>

#include "Map.hpp"
#include "Enumeration.hpp"

class Controller
{
private:
  Map *_map;
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
