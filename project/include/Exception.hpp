#ifndef EXCEPTION_HPP_
# define EXCEPTION_HPP_

#include <iostream>

class Exception : public std::exception
{
private:
  std::string _msg;
public:
  Exception(std::string const&) throw();
  virtual ~Exception() throw();
  virtual const char* what() const throw();
};

#endif /* !EXCEPTION_HPP_ */
