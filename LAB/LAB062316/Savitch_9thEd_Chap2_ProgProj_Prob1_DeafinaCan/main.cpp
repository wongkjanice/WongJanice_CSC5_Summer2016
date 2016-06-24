/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Purpose: Death in a Can
 * Created on June 23, 2016, 1:11 PM
 */

#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float msMass=35;    //35 grams is the mass of the mouse
    float msKill=5;     //5 grams of sweetener kill the mouse
    float hmMass=45400; //grams or about 100 lb person 
    float msSoda=350;   //350 grams is the mass of soda can content
    float conc=1e-3;    //1/10th of 1% concentration in soda of sweetener
    int nCans;          //number of cans to kill 
    
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*conc);
    
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)"<<endl;
            
    
    //Exit Stage Right!
     return 0;
}


