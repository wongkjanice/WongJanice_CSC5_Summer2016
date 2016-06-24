/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on June 22, 2016, 12:30 PM
 * Purpose: Military budget
 */

#include <iostream> //Input/Output Library
#include <iomanip> //Formating Output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int CNVPERC=100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milbudg=585e9f; //http://www.defense.gov/News/Special-Reports/FY16-Budget
    float fedbudg=3.8e12f;  //https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/ 
    float percent;    
    const int SIZE=81;
    char guess[SIZE];
    
    //Input Data
    cout<<"Guess the percentage of the Federal Budget attributed to the military"<<endl;
    cin.getline(guess,SIZE);
    
    //Process the Data
    percent=milbudg/fedbudg*static_cast<float>(CNVPERC);
    
    //Output the processed Data
    cout<<"The Military Budget = $"<<milbudg<<endl;
    cout<<"The Federal Budget = $"<<fedbudg<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Military budget percentage =" <<percent<<"%"<<endl;
    cout<<"Your guess was = "<<guess<<"%"<<endl;
    
    //Exit Stage Right!
     return 0;
}
