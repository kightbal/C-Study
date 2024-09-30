// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

const int total_length = 20;
const int signal_length = 10;
int main() {
    ifstream file_input;
    file_input.open("./responses.txt");
    if (!file_input) {
        cerr << "open file failed !" << endl;
        return 1;
    }
    string answer;
    file_input >> answer;
    vector<string> student;
    vector<int> score_students;
    vector<string> answer_student;
    double average_score{0};
    while (!file_input.eof()) {
        string buff_student;
        string buff_answer;
        file_input >> buff_student;
        student.push_back(buff_student);
        file_input >> buff_answer;
        answer_student.push_back(buff_answer);
    }

    for (auto &ans : answer_student) {
        int score{0};
        for (size_t i = 0; i < answer.size(); i++) {
            if (answer[i] == ans[i])
                score++;
        }

        score_students.push_back(score);
        average_score += score;
    }
    average_score = average_score / student.size();
    std::cout << std::setw(signal_length) << std::left << "Student"
              << std::setw(signal_length) << std::right << "Score" << std::endl;
    std::cout << std::setw(total_length) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    for (size_t i = 0; i < student.size(); i++) {
        std::cout << std::setw(signal_length) << std::left << student[i]
                  << std::setw(signal_length) << std::right << score_students[i] << std::endl;
    }
    std::cout << std::setw(total_length) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(signal_length) << std::left << "Average score"
              << std::setw(signal_length) << std::right << average_score << std::endl;

    return 0;
}
