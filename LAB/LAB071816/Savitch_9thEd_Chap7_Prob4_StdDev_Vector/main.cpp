/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 18, 2016, 12:47 PM
 * Purpose: Generate a Standard Normal -z with a Vector
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <cstdlib>  //Random Numbers
#include <ctime>    //Time
#include <cmath>    //Math
#include <vector>   //Vector
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=pow(2,31)-1;      //Max unsigned int value
const unsigned int MXRND=1<<31-1;           //Same max unsigned int value

//Function Prototypes
float normal();
float fillAry(vector<float> &,int);
void maxmin(vector<float> &,int,float &, float &);
float mean(vector<float> &,int);
float stdDev(vector<float> &,int);
//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=50000000;
    vector<float> x(SIZE);
    float min,max,avg,std;
    
    //Input Data
    fillAry(x,SIZE);
    
    //Process the Data
    maxmin(x,SIZE,min,max);
    avg=mean(x,SIZE);
    std=stdDev(x,SIZE);
    
    //Output the processed Data
    cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
    cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
    cout<<"The minimum Random Normal Number = "<<min<<endl;
    cout<<"The Maximum Random Normal Number = "<<max<<endl;
    cout<<"The Average Random Normal Value = "<<avg<<endl;
    cout<<"The Standard Deviation Random Normal Value = "<<std<<endl;
           
    //Exit Stage Right!
     return 0;
}

float stdDev(vector<float> &x,int n){
    //Declare and Initialize
    float sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        float xim=x[i]-avg;
        sum+=(xim*xim);
    }
    return sqrt(sum/(n-1));
}

float mean(vector<float> &x,int n){
    //Declare and Initialize 
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void maxmin(vector<float> &x,int n,float &min,float &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(max>x[i])max=x[i];
    }
}
float fillAry(vector<float> &x,int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

float normal(){
    //Declare and initialize
    float sum=0;
    //Add 12 unifromly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRND;  //[0,1]
    }
    //Scale a number [0,12]-6= [-6,6]
    return sum-6;
}


