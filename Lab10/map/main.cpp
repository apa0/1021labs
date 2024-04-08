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
    std::string sentence= "Remember I have been prophesying for the past sixty five years that in the natural course of things I a square a mere Square shall evolve into a Pentagon or five sided figure and from there into a Hexagon or six sided figure and thence into a Cube or in other words into the so called regular solids with a myriad of various other forms of which the chief are the tetrahedron the octahedron and the dodecahedron";

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