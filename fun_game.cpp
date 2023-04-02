#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); 
    string words[] = {"computer", "program", "algorithm", "debug", "syntax"};
    int wordCount = sizeof(words) / sizeof(words[0]);

    int index = rand() % wordCount;
    string secretWord = words[index];

    int wordLength = secretWord.length();

    string guessedLetters(wordLength, '_');
    int guessesLeft = 6;

    cout << "Welcome to Hangman!" << endl << endl;
    cout << "The word contains " << wordLength << " letters." << endl;

    while (guessesLeft > 0)
    {
        cout << "You have " << guessesLeft << " incorrect guesses left." << endl;
        cout << "Guessed letters: " << guessedLetters << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        bool foundLetter = false;

        for (int i = 0; i < wordLength; ++i)
        {
            if (secretWord[i] == guess)
            {
                guessedLetters[i] = guess;
                foundLetter = true;
            }
        }

        if (!foundLetter)
        {
            cout << "Sorry, that letter is not in the word." << endl;
            --guessesLeft;
        }
        else
        {
            cout << "Good guess!" << endl;
        }

        if (guessedLetters == secretWord)
        {
            cout << endl << "Congratulations! You guessed the word." << endl;
            break;
        }
    }

    if (guessesLeft == 0)
    {
        cout << endl << "Sorry, you ran out of guesses." << endl;
    }

    cout << endl << "Thanks for playing!" << endl;

    return 0;
}
