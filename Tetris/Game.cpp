#include "Game.h"

Game::Game(GraphicsEngine* ge, int width, int height) {
	this->ge = ge;
	MAPWIDTH = width;
	MAPHEIGHT = width;
	board = new int[MAPWIDTH * MAPHEIGHT]();
}

Game::~Game() {
	delete[] board;
}

//Paint everything
void Game::paint() {
	//TODO: paint interface, paint board, paint blocks
}

void Game::keyPressed(int keyPress) {
	switch (keyPress) {
	case VK_LEFT: //Move Left
		move(piece->getRowPos(), piece->getColPos() - 1);
		break;
	case VK_RIGHT: //Move Right
		move(piece->getRowPos(), piece->getColPos() + 1);
		break;
	case VK_DOWN: //Move Down Fast
		move(piece->getRowPos() + 1, piece->getColPos());
		break;
	case VK_SPACE: //Press Spacebar, move down to bottom instantly
		break;
	case 0x51: //Press Q, rotate counterclockwise
		rotate(false);
		break;
	case 0x45: //Press E, rotate clockwise
		rotate(true);
		break;
	}
}

void Game::move(int y, int x) {
	if (!isHitLeft(x) && !isHitRight(x)) {
		piece->setColPos(x);
	}
	
	while (y > 1) {
		if (!isHitBottom(y)) {
			piece->setRowPos(y);
			break;
		}
		y--;
	}
	if (y == 0) {
		//TODO: set up new piece as this one has hit the bottom
	}
	//TODO: Repaint board to show updated movement
}

void Game::rotate(bool rotateClockwise) {
	if (rotateClockwise) {
		//TODO: Rotate Clockwise
	}
	else {
		//TODO: Rotate Counterclockwise
	}
}

void Game::updateBoard() {
	if (isHitBottom(piece->getRowPos())) {
		//TODO: Drop new piece
	}
	else {
		//TODO: Won't work right now, as it updates every 1 frame. Need to set up so it only drops down every few frames.
		piece->setRowPos(piece->getRowPos() + 1);
	}
}

void Game::updateTime() {
	if (!isGameOver()) {
		updateBoard();
		//TODO: Draw Board
		paint();
	}
}

bool Game::isGameOver() {
	if (isHitBottom(piece->getRowPos()) && piece->getRowPos() == 0) {
		return true;
	}
	return false;
}

void Game::checkIfRowFull() {
}

void Game::clearRow() {
}

bool Game::isHitLeft(int x) {
	if(x < 0) {
		return true;
	}
	return false;
}

bool Game::isHitRight(int x) {
	if (x >= MAPWIDTH) {
		return true;
	}
	return false;

}
bool Game::isHitBottom(int y) {
	if (y > MAPHEIGHT) {
		return true;
	}
	
	//TODO: check if piece will hit another piece
	
	return false;
}
