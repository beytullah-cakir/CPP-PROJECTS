#include "Player.cpp"
#include "Board.cpp"
#include <iostream>
#include <cstdlib>


using namespace std;

class Game
{

private:
    int currentPlayer;
    Board board;
    Player *players[2];

public:
    Game()
    {
        players[0] = new Player("Beytullah", 'X');
        players[1] = new Player("Zehra", 'O');
        currentPlayer = 0;
    }

    void startGame()
    {

        while (!isGameOver())
        {
            board.displayBoard();
            playTurn();
            if(!isGameOver())
            switchPlayer();
        }
        cout<<endl;
        board.displayBoard();
        cout<<"Winner is " << players[currentPlayer]->getName()<<endl;
        cout<<"GAME OVER"<<endl;

        
        
    }

    void switchPlayer()
    {
        currentPlayer = (currentPlayer + 1) % 2;
    }

    bool isGameOver()
    {
        if(board.checkWin())
        return true;
        else
        return false;
    }

    void playTurn()
    {
        int position;
        cout << players[currentPlayer]->getName() << endl;
        cout << players[currentPlayer]->getSymbol() << endl;

        cout << "Enter your position" << endl;
        cin >> position;

        if (checkPosition(position))
        {
            board.updateBoard(position, players[currentPlayer]->getSymbol());
        }
    }

    bool checkPosition(int position)
    {
        if (position < 1 || position > 9)
        {
            return false;
        }
        return true;
    }

};
