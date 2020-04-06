#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	string player = "Y";
	TicTacToe game;

	while (!(player == "O" || player == "X")) 
	{
		try 
		{
			cout << "Enter player: ";
			cin >> player;

			game.start_game(player);
		}
		catch (Error e) 
		{
			cout << e.get_message();
		}
	}

	do 
	{
		int pos;
		cout << "position: ";
		cin >> pos;
		game.mark_board(pos);
		game.display_board();
		
	} while (!game.game_over());


	return 0;
}