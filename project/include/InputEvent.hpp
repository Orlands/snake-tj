#ifndef INPUTEVENT_HPP_
# define INPUTEVENT_HPP_

#include "Enumeration.hpp"

class InputEvent
{
private:
  Direction _touchKey;
public:
  InputEvent();
  virtual ~InputEvent();
  Direction getPressedKey();
  void toString();  
};

#endif /* !INPUTEVENT_HPP_ */
