/**
 *   De: Theo Bensaci
 *   Date: 13:46 01.11.2024
 *   Description: lib pour géré tous ce qui conerne les notes
 */

#ifndef noteUtils
#define noteUtils

#include <string>

/// @brief convertie un fichier csv de note en un tableau mb avec les moyens
/// @param filePath
void convertFile(std::string filePath);

/// @brief crée un fichier mb de moyen de note a partire d'une fichier csv de note
/// @param filePath
void createMbMoyenFile(std::string fileName, std::string csvFilePath);

#endif // DEBUG