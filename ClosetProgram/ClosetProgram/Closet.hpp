#pragma once
#include <string>
#include <list>
#include "Drawers.cpp"
class Closet
{
public:
	Closet();
	~Closet();
	bool ClosetOpen = false;
	int x = 60;
	int y = 100;
	int z = 20;
	std::string Color = "#69453D";
	void Drawers();
	int content = 120000;
};

