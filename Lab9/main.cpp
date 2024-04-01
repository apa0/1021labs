//Angie Diaz 
//CPSC 1020
//Lab 9: Sequence Accumulation 
//File: main.cpp
//Date: 4/1/24

#include <vector>
#include <iostream>
#include <string>
#include "accum.h"
int main () {
    std::vector<int>v;
    int x;
    std::string temp;
    std::cout<<"Enter four numbers: ";
    for (int i=0; i<4; i++) {
        std::cin>>x;
        v.push_back(x);
    }
    std::cout<<"The sum of the numbers is "<<accum(v)<<std::endl;
    
    v.clear();

    std::vector<std::string>v_string; 
    
    std::cout<<"Enter four strings: \n";
    for (int i=0; i<4; i++) {
        std::cin>>temp;
        v_string.push_back(temp);
    }

    std::cout<<"The sum of the strings is: "<<accum(v_string);






    return 0;
}