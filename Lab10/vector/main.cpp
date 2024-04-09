//Angie Diaz CPSC 1021
//Lab 10: Vector main.cpp
//4/8/24
//Desc:Modified program to output each student's name and their AVERAGE score
//rather than the individual scores

#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std; 

int main() {
    vector<pair<string, vector<int>>> studentData = {
        {"Alice", {85, 90, 88, 92, 95}},
        {"Bob", {78, 80, 85}},
        {"Charlie", {92, 95, 90, 87, 76, 90}},
        {"Diana", {80, 85}}
    };
    
// Display the contents
    for (const auto& student : studentData) {
        int sum=0;
        cout << student.first << "'s average score: ";
        for (int score : student.second) {
            //cout << score << " ";
            //adding each score
            sum+=score; 
        }
        //getting average 
        cout<<round(sum/student.second.size())<<endl;
    }
return 0;
}