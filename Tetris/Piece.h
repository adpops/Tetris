#pragma once

#include "GraphicsEngine.h"
#include "Game.h"

class Piece
{
private:
	int type;
	int rowOffset;
	int colOffset;
	bool rotation;

	GraphicsEngine * ge;
	Game * game;

public:
	Piece(GraphicsEngine * ge, Game * game);
	~Piece();
	void setType(int type);
	int getType();
	void setRowOffset(int offset);
	void setColOffset(int offset);
	int getRowOffset();
	int getColOffset();
	void setRotated(bool rotated);
	bool getRotated();
};

