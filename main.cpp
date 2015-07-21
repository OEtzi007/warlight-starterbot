//stl
#include <iostream>
#include <exception>

//project
#include "Bot.h"
#include "main.h"

int main(int /*argc*/, char ** /*argv[] */)
{
	std::cout.sync_with_stdio(false);

#ifndef STARTERBOT_DEBUG
	try
	{
#endif
		Bot* ownBot=new Bot();
		ownBot->playGame();
		delete ownBot;
#ifndef STARTERBOT_DEBUG
	} catch (std::exception& ex)
	{
		std::cerr << "Exception:" << ex.what() << std::endl;
		return 1;
	}
#endif
	return 0;
}
