/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 7, 2016, 12:55 PM
 * Purpose: Version 1 Craps
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <ctime>    //Time for random seed
#include <cstdlib>  //Random number seed
#include <iomanip>  //Formatting Library
#include <cmath>    //Math Library 
#include <fstream>  //File I/O
#include <string>   //String Object 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int nGames=0, nWin=0, nLose=0;
    
    
    //Input Data
    cout<<"The Game of Craps"<<endl;
    cout<<"How many games to Play"<<endl;
    cin>>nGames;
    
    //Process the Data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine Win or Loss
        if(sum==7||sum==11)nWin++;
        else if(sum==2||sum==2||sum==12)nLose++;
        else{
            //When to roll again 
            bool rollAgn=false;
            do{
                //Throw another set of dice
                die1=rand()%6+1;
                die2=rand()%6+1;
                char sumAgn=die1+die2;
                if(sum==sumAgn){
                    nWin++;
                    rollAgn=false;
                }else if(sumAgn==7){
                    nLose++;
                    rollAgn=false;
                }else rollAgn=true;
            }while(rollAgn);
        }
    }
    
    //Output the processed Data
    cout<<"Number of Games = "<<nGames<<endl;
    cout<<"Number of Wins = "<<nWin<<endl;
    cout<<"Number of Losses = "<<nLose<<endl;
    
    
    //Exit Stage Right!
     return 0;
}



