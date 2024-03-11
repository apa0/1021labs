// Name: Angie Diaz 
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: main.cpp
// Desc: 

#include <vector>
#include <iostream>
#include "DivSales.h"
using namespace std; 

bool validate(double num);

int main() {
    vector<DivSales>divisions(4);
    double qt1, qt2, qt3, qt4;
    for (int i=0; i<4; i++) {
        int div=1;
        cout<<"Enter sales data for Division "<<i+1<<endl;
        cout<<"Quarter "<<div<<": ";
        cin>>qt1;
        while (validate(qt1)!=true){
            cout<<"Please enter 0 or greater: ";
            cin>>qt1;
        } 
        div++;
        cout<<"Quarter "<<div<<": ";
        cin>>qt2;
        while (validate(qt2)!=true){
            cout<<"Please enter 0 or greater: ";
            cin>>qt2;
        } 
        div++;
        cout<<"Quarter "<<div<<": ";
        cin>>qt3;
        while (validate(qt3)!=true){
            cout<<"Please enter 0 or greater: ";
            cin>>qt3;
        }
        div++;
        cout<<"Quarter "<<div<<": ";
        cin>>qt4;
        while (validate(qt4)!=true){
            cout<<"Please enter 0 or greater: ";
            cin>>qt4;
        }
        //instance of object 
        DivSales divi(qt1, qt2, qt3, qt4);
        divisions.push_back(divi);
    }
    //prints sales per division
    for (int i=0; i<divisions.size(); i++) {
        cout<<"Total Sales for Division "<<i+1<<": $"<<divisions[i].getDivSales()<<endl;
    }
    //prints out total corporate sales 
    cout<<"Total Corporate Sales: "<<DivSales::getCorpSales()<<endl; 
    

    return 0;
}
//validates that argument is >0
bool validate(double num) {
    if (num>=0) {
        return 1;
    } else {
        return 0;
    }

}