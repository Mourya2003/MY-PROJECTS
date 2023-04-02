#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); 

    string words[] = {"apple", "banana", "orange", "grape", "pear"};
    int wordCount = sizeof(words) / sizeof(words[0]);

    int index = rand() % wordCount;
    string secretWord = words[index];

    int wordLength = secretWord.length();
    string jumbledWord = secretWord;

    for (int i = 0; i < wordLength; ++i)
    {
        int index1 = rand() % wordLength;
        int index2 = rand() % wordLength;
        char temp = jumbledWord[index1];
        jumbledWord[index1] = jumbledWord[index2];
        jumbledWord[index2] = temp;
    }

    cout << "Welcome to Word Jumble!" << endl << endl;
    cout << "Unscramble the letters to make a word." << endl;
    cout << "Enter 'quit' to quit the game." << endl << endl;
    cout << "The jumbled word is: " << jumbledWord << endl << endl;

    string guess;
    do
    {
        cout << "Your guess: ";
        cin >> guess;

        if (guess == "quit")
        {
            break;
        }

        if (guess == secretWord)
        {
            cout << endl << "Congratulations! You guessed the word." << endl;
            break;
        }
        else
        {
            cout << "Sorry, that's not the word." << endl;
        }
    } while (true);

    cout << endl << "Thanks for playing!" << endl;

    return 0;
}
