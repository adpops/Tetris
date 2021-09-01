#include "Piece.h"

Piece::Piece(GraphicsEngine * ge, Game * game) {
	this->ge = ge;
	this->game = game;
}

Piece::~Piece() {

}
void Piece::setType(int type) {
	this->type = type;
}

int Piece::getType() {
	return type;
}

void Piece::setRowOffset(int offset) {
	rowOffset = offset;
}

void Piece::setColOffset(int offset) {
	colOffset = offset;
}

int Piece::getRowOffset() {
	return rowOffset;
}

int Piece::getColOffset() {
	return colOffset;
}

void Piece::setRotated(bool rotated) {
	this->rotation = rotated;
}

bool Piece::getRotated() {
	return rotation;
}
