/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on June 28, 2016, 12:34 PM
 * Purpose: Grades with independent ifs
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
    unsigned int score;  //Input [0,100]
    char grade; //Output [A,B,C,D,F]
    
    //Input Data
    cout<<"Input the score, [0,100] output will be the grade"<<endl;
    cin>>score;
    
    //Process the Data
    grade='F';
    if(score<=120&&score>=90)grade='A';
    if(score<90&&score>=80)grade='B';
    if(score<80&&score>=70)grade='C';
    if(score<70&&score>=60)grade='D';
    
   
    //Output the processed Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
            
    //Exit Stage Right!
     return 0;
}


