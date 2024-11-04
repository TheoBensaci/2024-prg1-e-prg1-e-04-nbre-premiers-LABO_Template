/**
 *   De: Theo Bensaci
 *   Date: 13:27 01.11.2024
 *   Description: programme pouvant lire un fichier de notes et créer sur cette base un fichier de moyennes au format md.
 */

#include <iostream>
#include <string>
#include "src/utils.h"
#include "src/noteUtils.h"

int main()
{
    titleGenerator("Notes .cvs -> moyennes .md",
                   "un programme pouvant lire un fichier de notes et creer sur cette base un fichier de moyennes au format md.",
                   "Theo Bensaci");
    do
    {
        std::string csvfilePath;
        std::string mbfilePath;
        std::cout << "fichier csv : ";
        std::cin >> csvfilePath;
        std::cout << "fichier mb : ";
        std::cin >> mbfilePath;
        createMbMoyenFile(mbfilePath, csvfilePath);

    } while (validationPrompt("voulez vous recommencez ? ", 'Y', 'N'));
    // createMbMoyenFile("../test",filePath);
}
