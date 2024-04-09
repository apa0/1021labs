//Angie Diaz CPSC 1021
//Lab 10: Part 2: Movie Review Data main.cpp
//4/8/24
//Desc: 
/* This is an almost complete solution to the problem to the movie
review problem. HOWEVER, you will notice an error in the output that
shows the ratings from each reviewer. Identify this error and fix the
code to work properly.
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
// Create a set to store unique movie titles
    set<string> uniqueMovieTitles;

// Read the file to extract unique movie titles
    ifstream file("movie_reviews.txt");
    string movieTitle, reviewerName, rating;

    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
        uniqueMovieTitles.insert(movieTitle);
    }
    file.close();

// Copy unique movie titles from set to vector
    vector<string> movieTitles(uniqueMovieTitles.begin(), uniqueMovieTitles.end());
// Create a map to store reviewer names as keys and vectors of ratings as values
    map<string, vector<int>> reviewerRatings;
    
// Read the file again to extract reviewer names and ratings
    file.open("movie_reviews.txt");
    

  
    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
            //New approach: creating vector of 0's of same size as movieTitles, then populating it with ratings in corresponding positions
            
            int size=movieTitles.size();

            //if reviewer does not exist in map yet, create a vector of 0's for it 
            if (reviewerRatings.find(reviewerName)==reviewerRatings.end()) {
                reviewerRatings[reviewerName]=vector<int>(size, 0);
            }
            //finding index of movie title in movieTitles vector 
            auto it=find(movieTitles.begin(), movieTitles.end(), movieTitle);
            if (it!=movieTitles.end()) {
                //calculating index by subtracting the iterator from begining position 
                int index=it-movieTitles.begin();
                reviewerRatings[reviewerName][index]=stoi(rating);
            }
            
    }
    
    file.close();
// Output each movie title separated by /
    cout << "HERE ARE THE MOVIE TITLES\n";
    cout << "==========================\n";
    for (const auto& m : movieTitles) {
        cout << m << " / ";
    }
    cout << endl << endl;
// Output each reviewer followed by their ratings for each movie
    cout << "HERE ARE THE MOVIE RATINGS\n";
    cout << "===========================\n";
    for (const auto& pair : reviewerRatings) {
        //printing name 
        cout << pair.first << ": ";
        //setting iterator equal to int vector 
        auto ratings = pair.second;
        auto it = ratings.begin();
        while (it != ratings.end()) {
            cout << *it;
            ++it;
        if (it != ratings.end()) {
            cout << ",";
            }
        }
        cout << endl;
    }
    
    

    
    return 0;
}
