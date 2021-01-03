//What will be the output of the following C++ code?

#include <iostream>
using namespace std;
class Player
{
  private:
    int id;
    static int next_id;
  public:
    int getID() 
    { 
        return id; 
    }
    Player()  
    {  
        id = next_id++; 
       
    }
     
};
int Player::next_id = 1;
int main()
{
  Player p1;
  Player p2;
  Player p3;
  cout << p1.getID() << " ";
  cout << p2.getID() << " ";
  cout << p3.getID();

  return 0;
}
/*
a) 1 2 3
b) 2 2 2
c) 1 3 1
d) 1 1 1

Answer: a
Explanation: In this as next_id is a static variable so and initialized with 1 therefore the id value for 1st objects is 1 and next_id is updated to 2. In this way next_id is assigned to id in each object creation and updated by 1 so in this way value of each Id is updated.

*/