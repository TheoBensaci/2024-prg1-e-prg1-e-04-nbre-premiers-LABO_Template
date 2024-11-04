#include "utils.h"
#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>

using namespace std;

bool validationPrompt(string prompt, char yesChar, char noChar)
{
    while (true)
    {
        // montre le prompt
        cout << prompt << " [ " << yesChar << " | " << noChar << " ] : ";
        char respond;
        cin >> respond;

        // clear du buffer (on n'en n'as plus besoin)
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // gestion d'erreur
        if (cin.fail())
            continue;

        // resolution
        if (tolower(respond) == tolower(yesChar))
            return true;

        if (tolower(respond) == tolower(noChar))
            return false;
    }
}

/// @brief Affiche une title cellul du titre, genre celle du titre ou des autheur
/// @param str string a afficher
/// @param size taille du tite
void showTitleCell(string str, int size)
{
    int strLenght = str.length();
    cout << "|" << setfill('-') << setw(size) << "|\n"
         << "|" << setfill(' ') << setw(size) << "|\n"
         << "|" << setw(size / 2 - 1 + strLenght / 2) << str << setfill(' ') << setw(size / 2 + 1 - strLenght / 2) << "|\n"
         << "|" << setfill(' ') << setw(size) << "|\n"
         << "|" << setfill('-') << setw(size) << "|\n";
}

void titleGenerator(string projectTitle, string projectDescription, string autors)
{
    const int TILE_WIDTH = 50;

    showTitleCell(projectTitle, TILE_WIDTH);

    cout << "|" << setfill(' ') << setw(TILE_WIDTH) << "|\n";

    // affiche la description
    stringstream descrptionStream(projectDescription);

    string word;
    char i = 0;
    int lenght = descrptionStream.gcount();
    while (getline(descrptionStream, word, ' '))
    {
        if (i == 0)
        {
            cout << "| ";
        }

        if (i + word.length() > TILE_WIDTH - 3)
        {
            cout << setw(TILE_WIDTH - i + 1) << "|\n| ";
            i = 0;
        }

        cout << word << ' ';

        i += word.length() + 1;
    }

    if (i != 0)
    {
        cout << setfill(' ') << setw(TILE_WIDTH - i - 1) << "|\n";
    }

    cout << "|" << setfill(' ') << setw(TILE_WIDTH) << "|\n";

    string authorSTR = "by " + autors;
    showTitleCell(authorSTR, TILE_WIDTH);

    cout << "\n"
         << endl;
}