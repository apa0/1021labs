//Angie Diaz CPSC 1021
//Lab 10: Map main.cpp
//4/8/24
//Desc:

/* This program demonstrates the use of a std::map. When you run the
program, it will prompt you to enter a sentence. After entering the
sentence, it will output each word in the sentence along with the number
of times it appears. */

#include <iostream>
#include <map>
#include <sstream>

int main() {
    std::string sentence= "In the beginning was the Word and the Word was with God and the Word was God the same was in the beginning with God";

    std::map<std::string,int>wordCount;
    std::stringstream iss(sentence);
    std::string word; 


    while (iss>>word) {
        //increment map's int using word as the key 
        wordCount[word]+=1;
    }
    for (const auto& pair : wordCount) {
        std::cout<<pair.first<<": "<<pair.second<<std::endl; 

    }

    return 0;

}