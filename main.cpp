// COMSC-210 | Lab 13 | Christine Susic

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    //array of game scores
    std::vector<int> gameScores;
    //temporary variable for reading scores
    int tempNumber;
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    if (fin.good()) {
        cout << "File read successfully." << endl;
    }
    else 
        cout << "File not found.\n";
    
    //numbers in the file (int)
    while (fin >> tempNumber) {  //reads int tempNumber
        cout << tempNumber << " ";
        gameScores.push_back(tempNumber);
    }
    
    //output vector
    cout << "Game Scores Vector: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    
    /*//Ascending sort (sort)
    sort(gameScores.begin(), gameScores.end());
    cout << "Sort: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    //Descending sort (reverse sort)
    sort(gameScores.rbegin(), gameScores.rend());
    cout << "Reverse Sort: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    //Maximum value
    cout << "Maximum value: ";
    cout << *max_element(gameScores.begin(), gameScores.end()) << endl;
    //Minimum value
    cout << "Minimum value: ";
    cout << *min_element(gameScores.begin(), gameScores.end()) << endl;
    //Sum of values
    cout << "Sum of values: ";
    cout << accumulate(gameScores.begin(), gameScores.end(), 0) << endl;
    //Array of zeros
    cout << "Array of zeros: ";
    fill(gameScores.begin(), gameScores.end(), 0);
    for (int val : gameScores) cout << val << " "; cout << endl;*/
    
    fin.close();
    
    return 0;
}
