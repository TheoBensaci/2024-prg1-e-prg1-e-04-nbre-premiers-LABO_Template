/**
 *   De: Theo Bensaci
 *   Date: 16:53 02.11.2024
 *   Description: toute les function utils
 */
#ifndef Utils
#define Utils

#include <string>

/// @brief affiche une prompt que l'utilisateur doit validé ou non en entrant le character yesChar ou refusé avec le noChar,
///        si il entre autre chose, le prompte ce réaffiche
/// @param question string du prompt
/// @param yesChar character pour yes
/// @param noChar  charcater pour non
/// @return l'état du prompt, true pour yes et fals pour non
bool validationPrompt(std::string prompt, char yesChar, char noChar);

/// @brief Affiche un titre pour le pFrojet
/// @param projectTitle
/// @param projectDescription
/// @param autors
void titleGenerator(std::string projectTitle, std::string projectDescription, std::string autors);

#endif // !Utils
