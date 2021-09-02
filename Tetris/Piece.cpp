#include "Piece.h"

Piece::Piece(GraphicsEngine * ge, int type) {
	this->ge = ge;
	
	this->type = type;
	rotation = false;
	rowPos = 0;
	colPos = 5;
}

Piece::~Piece() {

}
void Piece::setType(int type) {
	this->type = type;
}

int Piece::getType() {
	return type;
}

void Piece::setRowPos(int offset) {
	rowPos = offset;
}

void Piece::setColPos(int offset) {
	colPos = offset;
}

int Piece::getRowPos() {
	return rowPos;
}

int Piece::getColPos() {
	return colPos;
}

void Piece::setRotated(bool rotated) {
	this->rotation = rotated;
}

bool Piece::getRotated() {
	return rotation;
}


