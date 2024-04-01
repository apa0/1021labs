//Angie Diaz 
//CPSC 1020
//Lab 9: Sequence Accumulation 
//File: main.cpp
//Date: 4/1/24
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
    T result=T();
    result="";
    for (size_t i=0; i<v.size(); i++) {
        result+=v[i];
        result+=" ";
        if (i!=v.size()-1) {
                result+=", ";
        }
    }
    return result;

 

}
