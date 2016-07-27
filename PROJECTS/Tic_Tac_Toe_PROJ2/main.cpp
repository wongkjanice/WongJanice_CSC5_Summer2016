/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 25, 2016, 1:38 PM
 * Purpose:  Tic Tac Toe Project 2
 */

//System Libraries
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void showBoard ( );
bool moveIsValid (int m );
int whoWon(); // Returns 0 if no one wins
              //         1 if Player 1 wins 
              //         2 if Player 2 wins

//Execution Begins Here!

//Variables for game board
    char Board [9];


int main(int argc, char** argv){
// Seed the Random Number
    srand (time (NULL) );

// Declare Variables
    string p1_Name;     //Name of Player 1
    string p2_Name;     //Name of Player 2
    int whoseTurn = 1;  //1 means players turn 
                        //2 means player 2 turns
    int move;           //Store where the players wants to move
    int tMoves=0;      //Total Number of Moves
    int pNum=0;       //Number of Players

// Assigns values to the playing board
Board[1] = '1';
Board[2] = '2';
Board[3] = '3';
Board[4] = '4';
Board[5] = '5';
Board[6] = '6';
Board[7] = '7';
Board[8] = '8';
Board[9] = '9';

// Give Choice to play 2 Player or Against Computer
cout<<"Welcome to Tic Tac Toe.\n Enter 1 for 1 player or 2 for 2 player"<<endl;
cin>>pNum;
  if (pNum==2) {
    // Get player names
    cout << " Player 1: Please enter your name " << endl;
    cin >> p1_Name;
    cout << " Player 2: Please enter your name: " << endl;
    cin >> p2_Name;
  }
  if (pNum==1) {
  //Get PLayer Names
    cout << " Player 1: Please enter your name: " << endl;
    cin >> p1_Name;
    while (whoWon ( ) ==0 && tMoves < 9) {
      do {
        // Show the board
        showBoard ();
        // Tell which player to move
        if (whoseTurn==1){
          cout<<p1Name<< ": It's your turn" << endl;
          cout<< " Enter the number of the spot where you'd like to move." << endl;
          cin>>move;
        } 
        else{
          move=rand()%9;
          cout<<"The Computer's move is: "<<move<<endl;
        }
        // Get move
       // cout << "Enter the number of spot you'd like to move" << endl;
       // cin >> Move;
      } while (moveIsValid (move) != true);
      // Add 1 to Total_Moves
      tMoves++;
      // Change whose turn it is
      switch (whoseTurn) {
        case (1): {
          Board[move] = 'x';
          whoseTurn = 2;
          break;
        }
        case (2): {
          Board[move] = 'o';
          whoseTurn = 1;
        }
      }
    }
    // show the board
    showBoard ();
    if (whoWon()== 1){
      // show the board
      showBoard();
      cout<<p1_Name<<" has won the game!"<<endl;
    } 
    if (whoWon()==2){
      // Show the board
      showBoard();
      cout << " The computer has won the game! " << endl;
    } 
    if (tMoves==9 && !whoWon()) {
      // Show the board
      showBoard();
      cout << "It's a tie game!" << endl;
    }
  }
  system ("Pause");
  return 0;
}
