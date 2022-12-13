#include "includes.h"
#include "utilities.h"
#include "menus.h"

string randomWord(vector<string> & secret) {
    secret.size();
    
    srand(time(0));

    int secretNumber = 1 + (rand() % 20);

    string word = secret[secretNumber];

    return word;
}

string display(string word) {
    
    /*size_t delimeter = word.find(" ");
    string tmpstr1, tmpstr2;

    if (delimeter != string::npos) {
        tmpstr1 = word.substr(0, delimeter);
        tmpstr2 = word.substr(delimeter + 1, word.length() - (delimeter + 1));
    } else {
        tmpstr1 = word;
        tmpstr2 = "";
    }

    string hiddenWord1 (tmpstr1.length(), '-');
    string hiddenWord2 (tmpstr2.length(), '-');

    return hiddenWord1 + " " + hiddenWord2; */

    string delimiter = " ";
    size_t pos = word.find(delimiter);
    vector<string> words;
    string hiddenWord = "";

    if (pos != string::npos)
    {
        int start = 0;
        string newword = word;
        do
        {
            words.push_back(newword.substr(start, pos));
            newword = newword.substr(pos + 1, newword.length() - (pos + 1));
            pos = newword.find(delimiter);
            if(pos == string::npos) {
               words.push_back(newword);
            }
        } while (pos != string::npos);
    }
    else
    {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++)
    {
        string temp(words[i].length(), '-');
        if (i != 0)
            hiddenWord += delimiter;
        hiddenWord += temp;
    }

    return hiddenWord;

}

bool checkLetter(string word, string *hiddenWord, vector<string> & letterBank) {
    string guess;
    bool found = false;

    cout << "Guess a letter: " << endl;
    cin >> guess;
    
    int pos = word.find(guess);

    letterBank.push_back(guess + " ");

    if (pos != string::npos) {
        do {
            (*hiddenWord).replace(pos, 1, guess);
            pos = word.find(guess, pos + 1);
        } while (pos != string::npos);
            found = true;
    }
    
    return found;
}

void printGallows(int added) {
    switch(added) {
        case 0:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 1:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 2:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |     |" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 3:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 4:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 5:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |    /" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }

        case 6:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |    / \\" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
            break;
        }
    }
}

bool program() {
    int option; 
    fstream fileInput;
    vector<string> secret;
    string inFile, randWord;
    vector<string> letterBank;
    int guessCount = 0;
     
    printDifficulty();
    
    option = readValue(4);
            
    switch(option) {
        case 1:
        {
            printEasy();
            int category = readValue(3);

            switch(category) {
                case 1:
                {
                    inFile = "winterholiday.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 2:
                {
                    inFile = "pizzatoppings.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 3:
                {
                    inFile = "colors.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
            }
            break;
        }
        case 2:
        {
            printMedium();
            int category = readValue(3);

            switch(category) {
                case 1:
                {
                    inFile = "flowers.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 2:
                {
                    inFile = "icecreamflavors.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 3:
                {
                    inFile = "tools.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
            }
            break;
        }
        case 3:
        {
            printHard();
            int category = readValue(3);

            switch(category) {
                case 1:
                {
                    inFile = "dogbreeds.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 2:
                {
                    inFile = "oceananimals.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 3:
                {
                    inFile = "olympicsports.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                }
            break;
        }
        case 4:
        {
            return false;
        }
    }

    printGallows(0);
    string hashes = display(randWord);
    string * ihashes = & hashes;

    cout << hashes << endl;

    while (true) {
    bool guessResult = checkLetter(randWord, ihashes, letterBank);
    if (guessResult == false) {
        guessCount++;
    }
    printGallows(guessCount);
    cout << endl;
    cout << hashes;
    cout << endl;
    printArray(letterBank, letterBank.size());
    cout << endl;

    if (hashes.find('-') == string::npos) {
        cout << "You got it!" << endl;
        break;
    }

    if (guessCount == 6) {
        cout << "Sorry, you're out of tries..." << endl;
        cout << randWord << endl;
        break;
    }
    }

    return true;
}