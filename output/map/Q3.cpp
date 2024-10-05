//Create a program that takes a list of student names and their grades as input, then prints the names of students who scored more than a specified grade, using a std::map.solve

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> studentGrades;
    int numStudents;
    string name;
    int grade, threshold;

    // Taking input for number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Taking input for student names and their grades
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter " << name << "'s grade: ";
        cin >> grade;
        studentGrades[name] = grade;
    }

    // Asking for the threshold grade
    cout << "Enter the grade threshold: ";
    cin >> threshold;

    // Displaying the names of students who scored more than the threshold grade
    cout << "Students who scored more than " << threshold << ":\n";
    for (const auto& student : studentGrades) {
        if (student.second > threshold) {
            cout << student.first << endl;
        }
    }

    return 0;
}
