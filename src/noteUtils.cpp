#include "noteUtils.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void createMbMoyenFile(string fileName, string csvFilePath)
{
    ofstream mdFile(fileName);
    ifstream csvFile(csvFilePath);

    if (!csvFile)
    { // l'ouverture a échoué
        std::cerr << "Erreur avec le fichier du fichier csv\n";
        return;
    }

    if (!mdFile)
    { // l'ouverture a échoué
        std::cerr << "Erreur avec le fichier du fichier mb\n";
        return;
    }

    // crée le tabel title
    mdFile << '|' << "Prenom" << '|' << "Moyens" << "|\n";
    mdFile << '|' << "--" << '|' << "--" << "|\n";

    string line;
    while (getline(csvFile, line))
    {
        stringstream strStream(line);
        string name;
        getline(strStream, name, ':');

        // calcule de la moyens
        float mean = 0;
        int i = 0;
        string entry;
        while (getline(strStream, entry, ','))
        {
            float a = stof(entry);
            mean += a;
            ++i;
        }
        mean *= 100;
        mean /= (float)i;
        mean = (int)mean / 100.0f;

        // add entry
        mdFile << '|' << name << '|' << mean << "|\n";
    }

    csvFile.close();
    mdFile.close();
}
