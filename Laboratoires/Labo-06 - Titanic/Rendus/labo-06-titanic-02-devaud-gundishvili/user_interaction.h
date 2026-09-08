/// Labo 06
/// User interaction functions (.h)
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#ifndef USER_INTERACTION_H
#define USER_INTERACTION_H

#include <string>

char ask_two_choice(const std::string& question, char option1, char option2, char separator = '/');

std::string ask_string(const std::string& question);

#endif
