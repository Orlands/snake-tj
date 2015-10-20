#include	<string>
#include	<iostream>

bool		launch_game(const int size_X, const int size_Y)
{
	std::cout << "this is just a test message" << std::endl;
	return (true);
}

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	if (launch_game(10, 10) == false)
	{
		return (-1);
	}
	return (0);
}
