// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    std::ifstream file_input;
    std::ofstream file_output;
    file_input.open("./romeoandjuliet");
    file_output.open("./copy.txt", std::ios::trunc);
    if (!file_input) {
        std::cout << "input_file opened failed !" << std::endl;
        return 1;
    }
    if (!file_output) {
        std::cout << "create copy file failed !" << std::endl;
        return 1;
    }

    std::string line{""};
    int i_line{1};
    while (getline(file_input, line)) {
        if (line == "\r") {
            file_output << line << std::endl;
        } else {
            file_output << std::setw(10) << std::left << i_line++ << line << std::endl;
        }
    }

    file_input.close();
    file_output.close();
    return 0;
}
