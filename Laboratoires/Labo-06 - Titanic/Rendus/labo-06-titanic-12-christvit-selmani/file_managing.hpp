#ifndef PRG1_LABO06_TITANIC_FILE_MANAGING_HPP
#define PRG1_LABO06_TITANIC_FILE_MANAGING_HPP
#include <string>

namespace file {
   bool open_file_input(std::ifstream &file_input, const std::string &file_name);

   bool open_file_output(std::ofstream &file_output, const std::string &file_name);
}

#endif //PRG1_LABO06_TITANIC_FILE_MANAGING_HPP
