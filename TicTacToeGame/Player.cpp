#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
string name;
char symbol;

public:

   Player(string name,char symbol){
      this->name=name;
      this->symbol=symbol;
   }


   char getSymbol(){
    return symbol;
   }

   string getName(){
      return name;   
   }
};


