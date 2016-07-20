/* 
 * File:   main.cpp
 * Author: Janice Wong
 * Created on July 19, 2016, 1:26 PM
 * Purpose: Markup
 */


//System Libraries

#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float cRetail(float, float); //Calculate retail price function

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float whlCost=0;
    float mkPer=0;   //Wholesale cost and markup percentage
    float total=0;
    
    //Input Data
    cout<<"Enter the price of an item's wholesale cost: "<<endl;
    cin>>whlCost;
    cout<<"Enter the item's markup percentage: "<<endl;
    cin>>mkPer;
    
    //Process the Data
    while(whlCost<0||mkPer<0){
        cout<<"Enter the price of an item's wholesale cost: "<<endl;
        cin>>whlCost;
        cout<<"Enter the item's markup percentage: "<<endl;
        cin>>mkPer;
    }
    
    //Output the processed Data
    total=cRetail(whlCost,mkPer);
    cout<<"The total cost is : $"<<total;
            
    //Exit Stage Right!
     return 0;
}

float cRetail(float cost, float perct){
    
    float total=0;
    total=(cost/100)*perct+cost;
    return total;
   
}



