#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    const int JACKPOT = 500;
    const int COIN_COST = 10;
    int playerCoins = 100;

    cout << "Welcome to the Slot Machine!" << endl;
    cout << "You have " << playerCoins << " coins." << endl;

    char playAgain = 'y';
    while (playAgain == 'y' && playerCoins >= COIN_COST) {
        playerCoins -= COIN_COST;

        int slot1 = rand() % 10 + 1;
        int slot2 = rand() % 10 + 1;
        int slot3 = rand() % 10 + 1;

        cout << "You spun: " << slot1 << " " << slot2 << " " << slot3 << endl;

        if (slot1 == slot2 && slot1 == slot3) {
            cout << "JACKPOT! You won " << JACKPOT << " coins!" << endl;
            playerCoins += JACKPOT;
        } else if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3) {
            int winnings = COIN_COST * 2;
            cout << "You won " << winnings << " coins!" << endl;
            playerCoins += winnings;
        } else {
            cout << "Sorry, you didn't win anything." << endl;
        }

        cout << "You now have " << playerCoins << " coins." << endl;
        cout << "Would you like to play again? (y/n)" << endl;
        cin >> playAgain;
    }

    if (playerCoins < COIN_COST) {
        cout << "You don't have enough coins to play. Better luck next time!" << endl;
    } else {
        cout << "Thanks for playing! You finished with " << playerCoins << " coins." << endl;
    }

    return 0;
}