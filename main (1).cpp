#include <iostream>
using namespace std;



struct MovieData{

string title;
string director;
int yearReleased;
int runningTime;

};

void displayMovieInfo(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    // Create two MovieData variables and initialize their members
    MovieData movie1 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142};
    MovieData movie2 = {"The Godfather", "Francis Ford Coppola", 1972, 175};

    // Display movie information
    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}