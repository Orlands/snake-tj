#include <string>
#include <iostream>

#include "Controller.hpp"
#include "Exception.hpp"
#include "Definer.hpp"

static bool launch_game(const int size_X, const int size_Y)
{
  Controller *game_manager = NULL;

  try
    {
      game_manager = new Controller(size_X, size_Y);
      game_manager->startGame();
    }
  catch(std::bad_alloc&)
    {
      std::cout << "There is some error on the class `̀Controller`." << std::endl;
      return (false);
    }
  if (game_manager != NULL)
    {
      delete game_manager;
      game_manager = NULL;
      return (false);
    }
  return (true);
}

int main(int ac, char **av)
{
  UNUSED(av);
  if (ac != 3)
    throw Exception("Usage : ./Snake [xLength] [yLength]\n");
  throw Exception("Game cannot be launched yet, this isn't a stable version.\n");
  if (launch_game(10, 10) == false)
    throw Exception("Error on launching game ...\n");
  return (0);
}
