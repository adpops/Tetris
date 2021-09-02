#pragma once

#include "GraphicsEngine.h"

class Piece
{
private:
	int type;
	int rowPos;
	int colPos;
	bool rotation;

	GraphicsEngine * ge;

public:
	Piece(GraphicsEngine * ge, int type);
	~Piece();
	void setType(int type);
	int getType();
	void setRowPos(int offset);
	void setColPos(int offset);
	int getRowPos();
	int getColPos();
	void setRotated(bool rotated);
	bool getRotated();
	
};

