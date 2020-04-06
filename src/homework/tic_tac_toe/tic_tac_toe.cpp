//cpp
#include "tic_tac_toe.h"

using std::string; using std::cout;

bool TicTacToe::game_over()
{
	return check_board_full();
}

// TicTacToe Class
void TicTacToe::start_game(string first_player)
{
	if (!(first_player == "X" || first_player == "O"))
	{
		throw Error("Player must be X or O.");
	}
	else
	{
		clear_board();
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9.");
	}
	else if (player == "")
	{
		throw Error("Game must start first.");
	}
	else
	{
		pegs[position - 1] = player;
		set_next_player();
	}
}

void TicTacToe::display_board() const
{
	cout << "\n";

	for (std::size_t i = 0; i < 9; i += 3) 
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] <<"\n";
	}

	cout << "\n";
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else if (player == "O")
	{
		player = "X";
	}
	else
	{
		throw Error("Player Unknown.");
	}
}

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs) 
	{
		if (peg == " ") 
		{
			return false;
		}
	}

	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs) 
	{
		peg = " ";
	}
}
