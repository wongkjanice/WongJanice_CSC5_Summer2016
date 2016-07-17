/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 12, 2016, 16:40 PM
 * Purpose: Project 1
 */

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

	//Start with a Tic-Tac-Toe menu welcome option screen
        //Please enter player 1 name; please enter player 2 name
	//Enter game
        //Players choose if they want to be X or O
	//Game Starts and Displays Board

        //Menu Variables
	int choice;

	//Board Variables
	char square1('1');
	char square2('2');
	char square3('3');
	char square4('4');
	char square5('5');
	char square6('6');
	char square7('7');
	char square8('8');
	char square9('9');

	//Main Menu

	cout<<"TIC-TAC-TOE\n"<<endl;
	cout<<"Type 1 to Start Game(Minimum two players)"<<endl;
	cout<<"Type 2 to Quit Game"<<endl;
	cin>>choice;
	
        //Player Names 
        char player1[10];
        char player2[10];
        
        if(choice==1)
        {
            cout<<"Name of player 1: ";
            cin>>player1;
            cin.ignore();
            cout<<"Name of player 2: ";
            cin>>player2;
        }
        //Player Variable
			int PlayerTurn(1);

			//Whether the game is over or not in the while loop
			bool GameOverDecider(true);
			
			//Main Game Board
			cout << "       " << square1 << "  |  " << square2 << "  |  " << square3 << endl;
			cout << "     -----+-----+-----" << endl;
			cout << "       " << square4 << "  |  " << square5 << "  |  " << square6 << endl;
			cout << "     -----+-----+-----" << endl;
			cout << "       " << square7 << "  |  " << square8 << "  |  " << square9 << endl;
			cout << "     -----+-----+-----" << endl;

			//Set Player Marker, Player 1 uses X and Player 2 uses O
			char marker;
			if (PlayerTurn = 1){
				marker = 'X';
			}else{
				marker = 'O';
			}

                        return 0;
}