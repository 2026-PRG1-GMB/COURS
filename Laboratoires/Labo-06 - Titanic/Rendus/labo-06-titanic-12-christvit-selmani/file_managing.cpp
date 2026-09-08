#include "file_managing.hpp"

#include <fstream>
#include <iostream>


namespace file {
   // On pourrait faire une surcharge pour chaque type (input/output) mais nous n'avons pas encore vu ça en cours

   const std::string error_message = "Error : Impossible to open file : ";

   /**
    * Safely pens an input file stream
    *
    * @param file_input Reference to an existing stream that will be used to open and read from the file
    * @param file_name Name of the file to open to read
    *
    * @return false if there was an error
    *         true otherwise
    */
   bool open_file_input(std::ifstream &file_input, const std::string &file_name) {
      if (file_input.is_open()) file_input.close(); // Prevent opening an already open file without closing it first
      file_input.clear();

      file_input.open(file_name);
      if (!file_input) {
         std::cerr << error_message << file_name << "\n";
         return false;
      }

      return true;
   }

   /**
    * Safely opens an output file stream
    *
    * @param file_output Reference to an existing stream that will be used to open and write on the file
    * @param file_name Name of the file to open to write in
    *
    * @return false if there was an error
    *         true otherwise
    */
   bool open_file_output(std::ofstream &file_output, const std::string &file_name) {
      if (file_output.is_open()) file_output.close(); // Prevent opening an already open file without closing it first
      file_output.clear();

      file_output.open(file_name);
      if (!file_output) {
         std::cerr << error_message << file_name << "\n";
         return false;
      }

      return true;
   }
}
