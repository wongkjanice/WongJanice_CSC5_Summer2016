/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 11, 2016, 12:46 PM
 * Purpose: Midterm Problem 3
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip>  //Formatting Library
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    char month[3], day[3], year[4];
    char date;
    char payee;
    int amount=0;
    char accHold;

    //Input Data
    cout<<"Input the following 4 values: "<<endl;
    cout<<"Date: ";
    cin.get(month,3,'/');
    cin.ignore(2,'/');
    cin.get(day,4,'/');
    cin.ignore(2,'/');
    cin.get(year,5);
   
    
    cout<<"Payee: ";
    cin>>payee;
    cin.ignore();
    
    cout<<"Amount: \n";
    cin>>amount;
    cin.ignore();
    
    cout<<"Account Holder: ";
    cin>>accHold;
   
    //Process the Data

    
    //Output the processed Data
    cout<<accHold;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY,"<<"STATE"<<"ZIP"<<setw(10)<<"Date"<<date<<endl;
    
            
    
    //Exit Stage Right!
     return 0;
}


