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
  Direction getPressedKey(void);
  void toString(void);  
};

#endif /* !INPUTEVENT_HPP_ */
