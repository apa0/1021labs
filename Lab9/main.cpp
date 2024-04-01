//Angie Diaz 
//CPSC 1020
//Lab 9: Sequence Accumulation 
//File: main.cpp
//Date: 5/1/24
#include <vector>
#include <iostream>
#include <string>
#include "accum.h"
int main {
    std::vector<T>v;
    int x;
    std::string temp;
    cout<<"Enter four numbers: \n";
    for (int i=0; i<4; i++) {
        cin>>x;
        v.push_back(x);
    }
    cout<<"The sum of the numbers is "<<accum(v);
    
    v.clear();
    
    cout<<"Enter four strings: \n";
    for (int i=0; i<4; i++) {
        cin>>temp;
        v.push_back(temp);
    }

    cout<<"The sum of the strings is: "<<accum(v);






    return 0;
}