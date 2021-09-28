#include <iostream>


void table();
const int Row{ 3 };
const int Col{ 3 };
char board[Row][Col] = { {4,4,4}, {4,4,4}, {4,4,4} };
void playerOne();
int playerOneChoice{};
void playerTwo();
int playerTwoChoice{};
void Winner();
int WinnerPlayer{};
int turn{};


int main() {

	std::cout << "-------------------- Welcome To Tic Tac Toe ----------------------" << std::endl;

	while (WinnerPlayer == 0) {// loops until a winner or if draw

		table();
		playerOne();
		Winner();
		if (WinnerPlayer == 1) {
			
			continue;
		}
		if (turn == 5) { // When playerOne has finished his 5th round the game will be a draw if playerOne did not win
			std::cout << "----------Draw----------";
			break;
		}
		table();
		playerTwo();
		Winner();
		
	} 

	return 0;

}

void table() {

	for (int i{}; i < 3; i++) { // Creates the Table
		for (int j{}; j < 3; j++) {

			std::cout <<"|" << board[i][j] <<"| ";

		}
		std::cout << std::endl;
	}

}

void playerOne() {
	std::cout << std::endl;
	std::cout << "Player One " << std::endl;
	std::cout << "Write a number from 1 to 9: " << std::endl;
	std::cin >> playerOneChoice;
	std::cout << std::endl;
	turn++;

	if(playerOneChoice == 1) {// Checks if there is an X or O where the player selected. if there is the player gets to choose again
		if (board[0][0] == 'X' || board[0][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
			
		}
	}

	else if (playerOneChoice == 2) {
			if (board[0][1] == 'X' || board[0][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 3) {
		if (board[0][2] == 'X' || board[0][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 4) {
		if (board[1][0] == 'X' || board[1][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 5) {
		if (board[1][1] == 'X' || board[1][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 6) {
		if (board[1][2] == 'X' || board[1][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 7) {
		if (board[2][0] == 'X' || board[2][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 8) {
		if (board[2][1] == 'X' || board[2][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}

	else if (playerOneChoice == 9) {
		if (board[2][2] == 'X' || board[2][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerOneChoice;
		}
	}



	

	switch (playerOneChoice){ // Switches the number the player selects and converts it to X
		
	case 1:
		board[0][0] = 'X';
		break;

	case 2:
		board[0][1] = 'X';
		break;

	case 3:
		board[0][2] = 'X';
		break;

	case 4:
		board[1][0] = 'X';
		break;

	case 5:
		board[1][1] = 'X';
		break;

	case 6:
		board[1][2] = 'X';
		break;

	case 7:
		board[2][0] = 'X';
		break;

	case 8:
		board[2][1] = 'X';
		break;

	case 9:
		board[2][2] = 'X';
		break;

	default:
		break;
	}

}

void playerTwo() {
	std::cout << std::endl;
	std::cout << "Player Two " << std::endl;
	std::cout << "Write a number from 1 to 9: " << std::endl;
	std::cin >> playerTwoChoice;
	std::cout << std::endl;

	if (playerTwoChoice == 1) {// Checks if there is an X or O where the player selected. if there is the player gets to choose again
		if (board[0][0] == 'X' || board[0][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;

		}
	}

	else if (playerTwoChoice == 2) {
		if (board[0][1] == 'X' || board[0][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 3) {
		if (board[0][2] == 'X' || board[0][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 4) {
		if (board[1][0] == 'X' || board[1][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 5) {
		if (board[1][1] == 'X' || board[1][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 6) {
		if (board[1][2] == 'X' || board[1][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 7) {
		if (board[2][0] == 'X' || board[2][0] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 8) {
		if (board[2][1] == 'X' || board[2][1] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}

	else if (playerTwoChoice == 9) {
		if (board[2][2] == 'X' || board[2][2] == 'O') {
			std::cout << "Choose Another" << std::endl;
			std::cin >> playerTwoChoice;
		}
	}


	switch (playerTwoChoice) { // Switches the number the player selects and converts it to O

	case 1:
		board[0][0] = 'O';
		break;

	case 2:
		board[0][1] = 'O';
		break;

	case 3:
		board[0][2] = 'O';
		break;

	case 4:
		board[1][0] = 'O';
		break;

	case 5:
		board[1][1] = 'O';
		break;

	case 6:
		board[1][2] = 'O';
		break;

	case 7:
		board[2][0] = 'O';
		break;

	case 8:
		board[2][1] = 'O';
		break;

	case 9:
		board[2][2] = 'O';
		break;

	default:
		break;
	}

}

void Winner() { // Checks board if there is a horizontal or Vertical with only X or O or if they are in a cross

	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') { //Top Horizontal
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;
		
	}

	else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {//Middle Horizontal
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {//Bottom Horizontal
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') { //Left vertical
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') { //Middle Vertical
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') { //Right Vertical
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') { //Left Cross
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {// Right Cross
		std::cout << "----------PlayerOne Wins----------" << std::endl;
		WinnerPlayer++;

	}

	//Player Two --------------------------------------------------------------

	else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') { //Top Horizontal
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}

	else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {//Middle Horizontal
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {//Bottom Horizontal
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') { //Left vertical
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') { //Middle Vertical
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') { //Right Vertical
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') { //Left Cross
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}


	else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {// Right Cross
		std::cout << "----------PlayerTwo Wins----------" << std::endl;
		WinnerPlayer++;

	}

}
