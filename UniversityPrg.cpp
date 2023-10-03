#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int id;
    double GPA;
    string department;

    // Constructor with default values
    Student() : department("CSE") {}

    // Constructor to set all values
    Student(string n, int i, double g, string d)
        : name(n), id(i), GPA(g), department(d) {}

    // Non-member function to print student information
    void printStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter data for Student " << i + 1 << ":" << endl;
        string name;
        int id;
        double gpa;

        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "GPA: ";
        cin >> gpa;

        // Initialize student object with user-provided values
        students[i] = Student(name, id, gpa, "CSE");
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].printStudentInfo();
    }

    return 0;
}