//Angie Diaz 
//CPSC 1020
//Lab 9: Sequence Accumulation 
//File: main.cpp
//Date: 5/1/24
//Function Template
#include <iostream>
#include <string>
#include <vector> 


//takes in integer vector
template <typename T>
T accum(std::vector<T> v) {
    T sum= T();
    for (const auto& x : v) {
        sum+=x;
    }
    return sum; 
}

//take in string vector 
template <typename T>
T accum(std::vector<std::string> v) {
    T result= T();  
    for (const auto& s: v) {
        result+=s;
        result+=", ";
        
    }
    return result; 

}
