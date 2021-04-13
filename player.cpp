#include"player.h"

void Player::setName(string n) {
	name = n;
}

string Player::getName() {
	return name;
}

void Player::addedScore(int s) {
	score += s;
}

void Player::lessScore(int s) {
	score -= s;
	if (score <= 0)
		score = 0;
}

int Player::getScore() {
	return score;
}