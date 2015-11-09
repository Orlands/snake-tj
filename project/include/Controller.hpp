#ifndef CONTROLLER_HPP_
# define CONTROLLER_HPP_

#include <iostream>

#include "Map.hpp"
#include "Enumeration.hpp"

class Controller
{
private:
  Map *_map;
  Direction _currentDirection;

  bool makeMap(int, int);
  bool keyPressed(void);
  void gameOver(void);
public:
  Controller(int, int);
  virtual ~Controller();
  bool startGame(void);
};

#endif /* !CONTROLLER_HPP_ */
