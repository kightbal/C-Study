// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream file_input;
    file_input.open("./romeoandjuliet.txt");
    if (!file_input) {
        std::cout << "file opened failed !";
        return 1;
    }
    string search_string;
    std::cout << "Please input search character: ";

    cin >> search_string;

    std::cout << endl
              << search_string << endl;
    string line;
    int count{0};
    while (getline(file_input, line)) {
        size_t position = line.find(search_string, 0);

        while (position != string::npos) {
            count++;
            position = line.find(search_string, position + search_string.size());
        }
    }
    std::cout << "The substring " << search_string << " was found " << count << " times" << endl;

    return 0;
}
