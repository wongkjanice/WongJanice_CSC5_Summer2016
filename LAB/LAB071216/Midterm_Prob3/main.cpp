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
    char month[3], day[3], year[3];
    char date[8];
    string payee;
    float amount;
    char accHold[15];

    //Input Data
    cout<<"Input the following 4 values: "<<endl;
    cout<<"Date (in mm/dd/yy format): ";
    cin.get(month,3,'/');
    cin.ignore(2,'/');
    cin.get(day,3,'/');
    cin.ignore(2,'/');
    cin.get(year,3,'/');
   
    cout<<"Payee: ";
    getline(cin,payee);
    cin.ignore();
    
    cout<<"Amount: ";
    cin>>amount;
    cin.ignore(100,'$');

    
    cout<<"Account Holder: ";
    cin.getline(accHold,15);
    
    cout<<endl;
 
   
    //Process the Data

    
    //Output the processed Data
    cout<<"Output a written Check"<<endl;
    cout<<accHold<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY,"<<"STATE "<<"ZIP"<<setw(25)<<"Date:";
    cout<<month<<"/"<<day<<"/"<<year<<endl;
            
            
    
    //Exit Stage Right!
     return 0;
}