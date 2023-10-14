#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_WRONG = 8; // maximum number of incorrect guesses allowed

vector<string> words; // collection of possible words to guess from

void initializeWords() {
    words.push_back("BANANA");
    words.push_back("COMPUTER");
    words.push_back("PROGRAMMING");
    words.push_back("ELEPHANT");
    words.push_back("HAMBURGER");
    words.push_back("KANGAROO");
    words.push_back("PHOTOGRAPH");
    words.push_back("TENNIS");
    words.push_back("VOLCANO");
    words.push_back("ZEBRA");
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    initializeWords();

    string word = words[rand() % words.size()]; // select a random word from the collection
    int wrong = 0; // number of incorrect guesses
    string soFar(word.size(), '-'); // current state of the word being guessed

    cout << "Welcome to Hangman. Good luck!\n";

    // main game loop
    while (wrong < MAX_WRONG && soFar != word) {
        cout << "\n\nYou have " << MAX_WRONG - wrong << " incorrect guesses left.\n";
        cout << "\nCurrent word: " << soFar << endl;

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess); // convert guess to uppercase

        // check if the guess is correct
        bool correct = false;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == guess) {
                soFar[i] = guess;
                correct = true;
            }
        }

        if (correct) {
            cout << "That's right! You guessed a letter.\n";
        } else {
            cout << "Sorry, " << guess << " is not in the word.\n";
            ++wrong;
        }
    }

    // end of game message
    if (wrong == MAX_WRONG) {
        cout << "\nYou have been hanged!";
    } else {
        cout << "\nCongratulations! You guessed the word " << word << "!";
    }

    cout << endl;

    return 0;
}






