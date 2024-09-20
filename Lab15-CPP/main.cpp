#include <iostream>
#include <map>
#include <string>

using namespace std;

struct StudentGrade {
    string name;
    char mark;
};

int main() {
  map<string, char> grades;
  int n = 10;
    for (int i =1; i <= n;i++)
    {
        cout << "Enter students name";
        string name;
        getline(cin, name);
        cout << "Enter a mark for " << name << ": ";
        char mark;
        cin >> mark;
        cin.ignore();
        grades[name] = mark;
        cout << "Student:  " << name << " Mark: " << mark << ".\n";
    }
    cout << "Total marks:\n";
    for (auto& pair : grades)
    {
        cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}