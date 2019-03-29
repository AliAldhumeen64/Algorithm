#include <time.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int terminal_test(vector<vector<int>> &board);
pair<int, int> minimax_decision(vector<vector<int>> &board);
int max_value(vector<vector<int>> &board);
int min_value(vector<vector<int>> &board);

const int EMPTY = 0;
const int PLAYX = 1;
const int PLAYO = 2;
int gofirst = -1;
int aival;
int opval;

int main()
{
	// randomize seed for generating random numbers
	srand((unsigned)time(NULL));

	int row = 3;
	int column = 3;
	
	int userRow = 0;
	int userCol = 0;
	

	int res;
	int x = true;
	// declare and initialize the board
	vector<vector<int>> board(row, vector<int>(column, EMPTY));

	cerr << "Enter 0 or 1: ";
	cin >> gofirst;

	
	if (gofirst == 1) {
		aival = PLAYX;
		opval = PLAYO;
		x = true;
	}
	else {
		aival = PLAYO;
		opval = PLAYX;
		x = false;
	}

		while(true) {
			while (x)
			{
				pair<int, int> newMove = minimax_decision(board);
				userRow = newMove.first;
				userCol = newMove.second;
				cout << userRow << " " << userCol << endl;
				if (board.at(userRow).at(userCol) == EMPTY)
				{

					board.at(userRow).at(userCol) = PLAYX;
					x = false;

				}
			}

			res = terminal_test(board);
			cerr << res;
			if (res == 1) {
				cerr << "AI win" << endl;
			}
			else if (res == -1) {
				cerr << "Opponent Win" << endl;

			}
			else if (res == 0) {
				cerr << "Tie" << endl;

			}
			else if (res == 3) {
				cerr << "not finished 213123123" << endl;
			}
			if ((res != 3)) {
				break;
			}

			cin >> userRow >> userCol;
			board.at(userRow).at(userCol) = PLAYO;
			x = true;
			res = terminal_test(board);
			cerr << res;
			if (res == 1) {
				cerr << "AI win" << endl;
			}
			else if (res == -1) {
				cerr << "Opponent Win" << endl;

			}
			else if (res == 0) {
				cerr << "Tie" << endl;

			}
			else if (res == 3) {
				cerr << "not finished 6666666666" << endl;
			}
			if ((res != 3)) {
				break;
			}
		
		
		}


	cerr << endl;
	cout.flush();
	system("pause");
	return 0;
}




// checks the current board for a winner
// Returns the current state of the board:
// 1 = AI wins, -1 = opponent wins
// 0 = tie, 3 = game not finished
int terminal_test(vector<vector<int>> &board)
{
	int row = board.size();
	int column = board[0].size();

	

		if ((board[0][0] == PLAYX) && (board[0][1] == PLAYX) && (board[0][2] == PLAYX)) {
			if (aival == PLAYX) {

				return 1;
			}
			else {
				return -1;
			}
		
		

		}
		else if ((board[0][0] == PLAYO) && (board[0][1] == PLAYO) && (board[0][2] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
		
	


		}

		else if ((board[1][0] == PLAYX) && (board[1][1] == PLAYX) && (board[1][2] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
			


		}
		else if ((board[1][0] == PLAYO) && (board[1][1] == PLAYO) && (board[1][2] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
			


		}

		else if ((board[2][0] == PLAYX) && (board[2][1] == PLAYX) && (board[2][2] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
			


		}
		else if ((board[2][0] == PLAYO) && (board[2][1] == PLAYO) && (board[2][2] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
		


		}


		else if ((board[0][0] == PLAYX) && (board[1][0] == PLAYX) && (board[2][0] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
		


		}
		else if ((board[0][0] == PLAYO) && (board[1][0] == PLAYO) && (board[2][0] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
		


		}


		else if ((board[0][1] == PLAYX) && (board[1][1] == PLAYX) && (board[2][1] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
		


		}
		else if ((board[0][1] == PLAYO) && (board[1][1] == PLAYO) && (board[2][1] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
			


		}

		else if ((board[0][2] == PLAYX) && (board[1][2] == PLAYX) && (board[2][2] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
			


		}
		else if ((board[0][2] == PLAYO) && (board[1][2] == PLAYO) && (board[2][2] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
			


		}

		else if ((board[0][0] == PLAYX) && (board[1][1] == PLAYX) && (board[2][2] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
			


		}
		else if ((board[0][0] == PLAYO) && (board[1][1] == PLAYO) && (board[2][2] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
		


		}

		else if ((board[0][2] == PLAYX) && (board[1][1] == PLAYX) && (board[2][0] == PLAYX)) {
			if (aival == PLAYX) {
				return 1;
			}
			else {
				return -1;
			}
			


		}
		else if ((board[0][2] == PLAYO) && (board[1][1] == PLAYO) && (board[2][0] == PLAYO)) {
			if (aival == PLAYX) {
				return -1;
			}
			else {
				return 1;
			}
			


		}
		
		//Not finished
		for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++) 
			{
				if (board[i][j] == 0) {
					return 3;
				}
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (board[i][j] != EMPTY) {
					return 0;
				}
			}
		}

	return NULL;
}

// minimax decision
// Returns action with maximum value with coordinates (newR, newC)
// This function has been completed for you
pair<int, int> minimax_decision(vector<vector<int>> &board)
{
	int row = board.size();
	int column = board[0].size();

	int newR = -1, newC = -1;

	int returnVal = -100;
	int nextValue;

	// for each action
	for (int i = 0; i< row; i++) {
		for (int j = 0; j< column; j++) {

			if (board[i][j] == EMPTY)
			{
				// fill in this part
				// simulate the action by AI to get the resulting board state
				board.at(i).at(j) = aival;
				// call min_value to get the return value and keep track of the row newR and column newC of the action with maximum return value
				nextValue = min_value(board);
				if (nextValue > returnVal) {
					returnVal = nextValue;
					newR = i;
					newC = j;
				}
				
				// undo the simulated action by setting the board back to original state
				board.at(i).at(j) = EMPTY;
			}

		}
	}

	return pair<int, int>(newR, newC);

}




// max value, returns a utility value of 
// 1 = AI wins / 0 = tie / -1 = opponent wins
int max_value(vector<vector<int>> &board)
{
	int row = board.size();
	int column = board[0].size();
	int nextValue = -1000;

	// fill in this part
	int value = terminal_test(board);
	if (value != 3) {
		return value;
	}
	

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) 
		{
			if (board[i][j] == EMPTY) 
			{
				/*if (gofirst == 0) {
					board.at(i).at(j) = PLAYO;
				}
				else {*/
				board.at(i).at(j) = aival;
				//}
				value = min_value(board);
				if (nextValue > value)
					value = nextValue;
				board[i][j] = EMPTY;
			}
		}
	}

	return value;
}



// min value, returns a utility value of 
// 1 = AI wins / 0 = tie / -1 = opponent wins
int min_value(vector<vector<int>> &board)
{
	int row = board.size();
	int column = board[0].size();

	// fill in this part
	int value = terminal_test(board);
	int nextValue = 1000;
	if (value != 3) {
		return value;
	}


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {

			if (board[i][j] == EMPTY)
			{
				/*if (gofirst == 0) {
				board.at(i).at(j) = PLAYO;
				}
				else {*/
				board.at(i).at(j) = opval;
				//}
				nextValue = max_value(board);
				if (nextValue < value)
					value = nextValue;
				board[i][j] = EMPTY;
			}
		}
	}

	return value;
}