/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 26, 2016, 1:34 PM
 * Purpose: Final for CSC 5 Summer 2016
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <sstream>   
#include <string>    //String Library
#include <cstdlib>   //Random Number 
#include <ctime>     //Time Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants - PI, Gravity, Conversions

//Function Prototypes
signed short getReversed(unsigned short num);
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    

    //Exit Stage Right!
    return 0;
}

/* Problem 1
Write a function that takes an unsigned
short integer and returns an signed short
number in reverse.  For instance 106 
reversed would be 601.  Another would be 
30000 gives 3.  Subtract the largest 2
digit number you can.  Check to make sure the 
conversion falls within the range for an 
signed short. If it doesn't then output
no conversion possible else output the result.*/
void prob1(){
    cout<<"You are entering Problem 1"<<endl; 
   //Declare Variables  
   unsigned short num;
   cout << "Enter an unsigned value: ";
   cin >> num;
   signed short rev = getReversed(num);
   if(rev == -1){
       cout << "no conversion possible." << endl;
   }
   else{
       cout << "Reversed value is " << rev << endl;
   }
 
  //Return from Unsigned short problem 
   return;
}

/* Problem 2 
Write a program that plays the game "Guess the
Number" as follows.  Your program chooses the
number to be guessed by selecting an integer
at random in the range 1 to 10^X.  The program
inputs X and displays.*/
void prob2(){
    cout<<endl;
    cout<<"You are entering Problem 2"<<endl;  
    //Declare Variables
    int randNum = 0, userNum = 0;
    int numTry = 1;
    bool userWins = false; //this is a flag for the while loop
    //get system time
    unsigned seed = time(0);

    //seed the random number generator
    srand(seed);

    //get random number 1 to 10
    randNum = 1 + rand()%10;
    
    cout<<"I have a number between 1 and 10^X";
    cout<<" Can you guess my number?";
    cout<<" You will be given a maximum of log2(10^X)+1 guesses.";
    cout<<" Please type your first guess.";
    cin>>userNum;
    
    //play until user guesses the number
    while (userWins != true)
    {
        //determine if the number user guessed is too low or too high
        if (userNum < randNum)
        {
            numTry +=1;
            cout << "Sorry, the number is too low. Guess again. ";
            cin >> userNum;
        }
        else if (userNum > randNum)
        {
            numTry +=1;
            cout << "Sorry, the number is too high. Guess again. ";
            cin >> userNum;
        }
        //if user guessed the number
        else
        {
            cout << "\nGreat job. " << userNum << " is exactly the number I was thinking.\n";
            cout << "It only took you " << numTry << " attempts to guess it right.\n";
            userWins = true;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 5
void prob5(){
    cout<<"You are entering Problem 5"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 6
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 MENU
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - The Menu
void menu(){
    cout<<endl;
    cout<<"Menu Program for Midterm"<<endl;
    cout<<"Choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;              
}

//Declare Function Prototype
   signed short getReversed(unsigned short num){
   int maxValue = pow(2, (sizeof(signed short) * 8 - 1)) - 1;
   string str, temp = "";
   stringstream ss;
   ss << num;
   ss >> str;
  
   for(int i = 0; i < str.size(); ++i){
       temp = str[i] + temp;
   }
    ss.clear();
    ss << temp;
    ss >> num;
   if(num > maxValue){
       return -1;
   }
   else{
       return num;
   }
}