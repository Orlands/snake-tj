#include	<string>
#include	<iostream>
#include "Controller.hpp"

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
      return false;
    }
  if (game_manager != NULL)
    {
      delete game_manager;
      game_manager = NULL;
    }
  return (true);
}

int		main(int ac, char **av)
{
  (void)ac;
  (void)av;
  if (launch_game(10, 20) == false)
    return (-1);
  return (0);
}
