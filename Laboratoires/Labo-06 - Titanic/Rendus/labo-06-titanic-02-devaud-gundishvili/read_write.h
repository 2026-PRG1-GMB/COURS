/// Labo 06
/// File manipulation functions (.h)
/// Version 1.0
/// Aurélien Dévaud
/// Shanshe Gundishvili

#ifndef READ_WRITE_H
#define READ_WRITE_H

#include <string>

bool read_file(const std::string& file_path, std::string& content);

bool write_file(const std::string& file_path, const std::string& content);

#endif
