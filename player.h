#pragma once
#include<iostream>
using namespace std;

class Player {
private:
	string name;
	int score;
public:
	void setName(string);
	string getName();
	void addedScore(int);
	void lessScore(int);
	int getScore();
};

//M. Awaluddin Romadhon
