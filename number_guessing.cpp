#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(0));
  int randomNumber = rand() % 100 + 1;

  int guess;

  std::cout << "Welcome to the random number guessing game!\n";
  std::cout << "Guess a number between 1 and 100\n";

  while (true) {
    std::cout << "Enter a number: ";
    std::cin >> guess;

    if (guess < randomNumber) {
      std::cout << "Guess is smaller than the number. Try again! \n";
    } else if (guess > randomNumber) {
      std::cout << "Guess is bigger than the number. Try again! \n";
    } else {
      std::cout << "Correct guess! \n";
      break;
    }
  }
}
