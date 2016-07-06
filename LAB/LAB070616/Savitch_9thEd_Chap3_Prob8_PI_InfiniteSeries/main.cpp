/* 
 * File:   main.cpp
 * Author: rcc
 * Created on July 6, 2016, 1:14 PM
 * Purpose: Pi Infinite Series
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <cmath>    //Math Library
#include <iomanip>  //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI=0,tol;
    
    //Input Data
    cout<<"Tolerance of the approximate PI to a power of 10^-"<<endl;
    cin>>tol;
    tol=pow(10,-tol);
    cout<<"The tolerance = "<<tol<<endl;
    
    //Process the Data
    float sumTerm=1;
    int nTerm=0;
    for(int denom=1;sumTerm>tol;nTerm=nTerm+2,denom=denom+4){
        sumTerm=1.0f/denom-1.0f/(denom+2);
        apprxPI=apprxPI+sumTerm;
    }
    apprxPI*=4;
    //Output the processed Data
    cout<<PI<<" is approximated by "<<apprxPI<<" with "<<nTerm<<" terms "<<endl;
    //Exit Stage Right!

    return 0;
    }






