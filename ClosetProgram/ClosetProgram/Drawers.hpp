#pragma once
#include <string>
#include <list>

class Drawers
{
public:
	Drawers();
	~Drawers();
	int x = 5;
	int y = 10;
	int z = 18;
	std::string Color = "#69453D";
	int content = 900;
	std::list<std::string> AmountOfDrawers;
	void OpenDrawer() {
	std::cout << "Content";
	}

};

