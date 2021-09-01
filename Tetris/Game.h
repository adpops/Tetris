#pragma once

#include "GraphicsEngine.h"

class Game 
{
private:
	int * board;
	GraphicsEngine * ge;
public:
	Game(GraphicsEngine* ge);
	~Game();
	void checkIfRowFull();
	void clearRow();

};

