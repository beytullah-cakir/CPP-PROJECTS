
#include <iostream>

using namespace std;


class Board
{
private:
    char cells[3][3];

public:
    Board()
    {
        int index = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cells[i][j] = index +'0';
                index++;
            }
        }
    }

    void displayBoard()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << cells[i][j]<< " ";
            }
            cout<< endl;
        }
    }

    void updateBoard(int position, char symbol)
    {
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        cells[row][col] = symbol;

    }

    bool checkWin()
    {
        
        for (int i = 0; i < 3; i++)
        {
            if (cells[i][0] == cells[i][1] && cells[i][1] == cells[i][2])
            {
                return true;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (cells[0][i] == cells[1][i] && cells[1][i] == cells[2][i])
            {
                return true;
            }
        }

        return false;
    }

    bool isBoardFull()
    {
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (cells[i][j] != 'X' || cells[i][j]!='O')
                {
                    return false;
                }
            }
        }
        return true;
    }
};
