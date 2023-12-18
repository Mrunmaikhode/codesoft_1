//TASK-1 Number Guessing Game
#include <iostream>
#include <ctime>
using namespace std;

int main() {
  // Generate a random number between 1 and 100
  cout<<"Let's Play!!"<<endl;
  cout<<"Number Guessing Game..."<<endl;
  cout<<"---------------***--------------- \n";
  srand(time(NULL));
  int anynum = rand() % 100 + 1;

  // Ask the user to guess the no.
  cout << "Guess any number between 1 and 100: ";
  int guess;
  cin >> guess;

  
  while (guess != anynum ) {
    if (guess < anynum ) {
      cout << "Your guess is too low." << endl;
    } else if (guess > anynum) {
      cout << "Your guess is too high." << endl;
    }
    cout << "Guess again: ";
    cin >> guess;
  }

  //  user guessed the correct number
  cout << "You guessed the correct number!" << endl;

  return 0;
}