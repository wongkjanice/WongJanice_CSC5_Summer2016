/* 
 * File:   main.cpp
 * Author: rcc
 * Created on July 5, 2016, 12:25 PM
 * Purpose: Phone charges 
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip>  //Format the output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float pennies=1;  //Initial pay per day 
    float payDay=0;   //Pay at the end of the month
    
    //Input Data
    
    
    //Process the Data and output simultaneously
    for(int day=1;day<=30;day++){
        payDay=payDay+pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(10)<<pennies/100;
        cout<<" Pay earned $"<<setw(11)<<payDay/100<<endl;
        pennies=pennies*2;
        
    }
                
    
    
    //Exit Stage Right!
     return 0;
}




