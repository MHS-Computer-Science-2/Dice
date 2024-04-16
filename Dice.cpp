#include <iostream>
using namespace std;

class Dice {
public:
    int die1;           //Value of 1st die
    int die2;           //Value of 2nd die
    int rollCount = 0;  //Number of times the dice have been rolled

    //Randomizes the two dice to a number from 1-6
    //and increases rollCount by 1
    void roll() {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        rollCount++;
    }

    //Displays the current value of the dice
    void display() {
        cout << "Roll " << rollCount << ": " << die1 << " " << die2 << endl;
    }
};


int main()
{
    srand(unsigned(time(0)));

    //Create a Dice object called set1


    cout << "Rolling and displaying set1 to see how the Dice class works: " << endl;
    //Roll and display the Dice


    //Create a Dice object called set2


    cout << endl << "Rolling set2 until we get a pair" << endl;
    //Roll and display the dice until a pair is rolled. When a pair is rolled, break the loop.



    //Create a Dice object called set3


    cout << endl << "Rolling set3 until we get a pair" << endl;
    //Roll and display the dice until a pair is rolled. When a pair is rolled, break the loop.


    //Output whether set2 or set3 won the race

    system("pause");

}
