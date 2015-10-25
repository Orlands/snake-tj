#ifndef CONTROLLER_HPP_
# define CONTROLLER_HPP

class Controller
{
private:
  bool makeMap();
public:
  Controller(int, int);
  virtual ~Controller();
  bool startGame();
};

#endif
