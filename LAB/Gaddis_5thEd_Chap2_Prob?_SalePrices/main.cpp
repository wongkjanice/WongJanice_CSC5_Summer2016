/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Purpose: Sales Price
 * Created on June 21, 2016, 1:31 PM
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare Variables
     float profit=0.40f;//40 percent profit
     float cost=12.67f; //Cost in $'s
     float selPrce;     //Selling price in $'s
    
    //Input Data
    
    //Process the Data
    //selPrce=cost*profit+cost;
    selPrce=cost*(1+profit);
    int pennies=selPrce*100+0.5;//Shift into pennies add a half to round
    selPrce=pennies/100.0f;
    
    //Output the processed Data
    cout<<"Cost of circuit to the company = $"<<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
     return 0;
}
