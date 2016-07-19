/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 12, 2016, 16:40 PM
 * Purpose: Project 1 - Tic Tac Toe
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

//Variables for game board
        char square1('1');
	char square2('2');
	char square3('3');
	char square4('4');
	char square5('5');
	char square6('6');
	char square7('7');
	char square8('8');
	char square9('9');

int wCount();   //Win Count
int main(int argc, char** argv){
    
        //Declare Variables
	int player = 1,status,choice;
	char marker;
	
        //Process and Output Data
        do{
	cout<<"Tic-Tac-Toe"<<endl;
        cout<<"This game will need two players."<<endl;
	cout<< "Player 1 (X) - Player 2 (O)" <<endl<< endl;
	cout<< endl;

        //Game Board
	cout << "     |     |     " << endl;
	cout << "  " << square1 << "  |  " << square2 << "  |  " << square3 << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square4 << "  |  " << square5 << "  |  " << square6 << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square7 << "  |  " << square8 << "  |  " << square9 << endl;
	cout << "     |     |     " << endl << endl;
        
		player=(player%2)?1:2;

		cout<<"Player "<<player<<":\n";
                cout<<"Enter which square you would like to place your marker: ";
		cin>>choice;

		marker=(player==1)?'X':'O';
                
                //Conditions of the game
                
		if (choice == 1 && square1 == '1')
			square1 = marker;
		else if (choice == 2 && square2 == '2')
			square2 = marker;
		else if (choice == 3 && square3 == '3')
			square3 = marker;
		else if (choice == 4 && square4 == '4')
			square4 = marker;
		else if (choice == 5 && square5 == '5')
			square5 = marker;
		else if (choice == 6 && square6 == '6')
			square6 = marker;
		else if (choice == 7 && square7 == '7')
			square7 = marker;
		else if (choice == 8 && square8 == '8')
			square8 = marker;
		else if (choice == 9 && square9 == '9')
			square9 = marker;
		else
		{
			cout<<"Not a valid move ";
			player--;
			cin.ignore();
			cin.get();
		}
		status=wCount();

		player++;
	}while(status==-1);
        
        //Show game board again
	cout <<"Tic-Tac-Toe";

	cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square1 << "  |  " << square2 << "  |  " << square3 << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square4 << "  |  " << square5 << "  |  " << square6 << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square7 << "  |  " << square8 << "  |  " << square9 << endl;
	cout << "     |     |     " << endl << endl;
        
	if(status==1)
		cout<<"Player "<<--player<<" Win ";
	else
		cout<<"Player 1 and Player 2 Tied";

	cin.ignore();
	cin.get();
	return 0;
}

int wCount()
{
	if (square1 == square2 && square2 == square3)
		return 1;
	else if (square4 == square5 && square5 == square6)
		return 1;
	else if (square7 == square8 && square8 == square9)
		return 1;
	else if (square1 == square4 && square4 == square7)
		return 1;
	else if (square2 == square5 && square5 == square8)
		return 1;
	else if (square3 == square6 && square6 == square9)
		return 1;
	else if (square1 == square5 && square5 == square9)
		return 1;
	else if (square3 == square5 && square5 == square7)
		return 1;
	else if (square1 != '1' && square2 != '2' && square3 != '3' 
                    && square4 != '4' && square5 != '5' && square6 != '6' 
                  && square7 != '7' && square8 != '8' && square9 != '9')
		return 0;
	else
		return -1;
}
//Function to return game status
//1 For game is over with result
//-1 For game is in progress 
//O Game is over and no result
