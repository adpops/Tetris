#pragma once

#include "GraphicsEngine.h"
#include "Piece.h"

class Game 
{
private:
	int * board;
	GraphicsEngine * ge;
	Piece * piece;
	int MAPWIDTH;
	int MAPHEIGHT;
public:
	Game(GraphicsEngine* ge, int width, int height);
	~Game();
	void keyPressed(int keyPress);
	void move(int x, int y);
	void paint();
	bool isGameOver();
	void checkIfRowFull();
	void clearRow();
	bool isHitLeft(int x);
	bool isHitRight(int x);
	bool isHitBottom(int y);
};

