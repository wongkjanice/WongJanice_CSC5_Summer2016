/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 21, 2016, 1:04 PM
 * Purpose: Lottery Winners
 */


//System Libraries

#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the variables
    int winNum[10]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int i;
    int win=-1;
    int num;

    //Input the Data
    cout<<"Please enter this week's 5-digit winning lottery number: ";
    cin>>num;
    
    //Process and Output the Data
    for(i=0;i<10;i++)
        if (num==winNum[i]){
            cout<<"Congratulations, You have a winning ticket!\n";
            win=i;
        }
        if(win<0){
                cout<<"Sorry, You do not have a winning ticket.\n";
        }
    
    
    return 0;
}

