/* Tic Tac Toe Tomek
Working on: https://code.google.com/codejam/contest/2270488/dashboard

Tips: input should be an array of arrays.
i.e. each board should be stored as an individual 4x4 array.
*/

#include <iostream>
#include <vector>

using namespace std;

const char X = 'X';
const char O = 'O';
const char EMPTY = '.';
const char TOMEK = 'T';
const int NUM_ROWS = 4;
const int NUM_COLS = 4;
const int BOX_TOT = NUM_ROWS * NUM_COLS;

//Winner checkBoard(char board[4][4]);
//where Winner is enum


int main() {
	
	//Initialise a general 4x4 board of ints. This is so that I have a clearer idea of the position of each "box" (mostly to be able to write the WINNING_CASES below.
	//Will work out a way to make each a char eventually, but should probably keep this a reference for the WINNING_CASES, and receive input as a separate array of arrays.
	int board[NUM_ROWS][NUM_COLS] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15}
	}; 

	//Based on the int array above, this is a list of all the possible combinations that can win the game.
	//Note, this does not differentiate between X, O and T - it is just a list of where the winning symbols will be.
	//There will be a check saying that each row must contain 3(X || O) + TOMEK, or 4(X || O).
	const int WINNING_CASES[10][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15},
		{0, 4, 8, 12},
		{1, 5, 9, 13},
		{2, 6, 10, 14},
		{3, 7, 11, 15},
		{0, 5, 10, 14},
		{3, 6, 9, 12}
	};

	const int WINNING_ROWS = 10;

	//This should probably be in the checkBoard function...
	for (int i = 0; i < WINNING_ROWS; i++)
	{

		//Go through the list above, row by row, ignoring the columns.
		//Calculate a winner if a row contains 3(X || O) + TOMEK, or 4(X || O).

	}
	//End of what will be checkBoard function.

	cin.ignore();
	return 0;
}


enum Winner {

	WINNER_X = 1,
	WINNER_O,
	DRAW,
	ONGOING

};