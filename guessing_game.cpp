#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess, num, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Guess a number between 1 and 100\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high!\n";
        }
        else if (guess < num)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "\nCongratulations! You guessed the number in " << tries << " tries!\n";
        }
    } while (guess != num);

    return 0;
}
