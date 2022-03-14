#include <iostream>
#include <iomanip>
#include <string>
#include "Teacher.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string name, staffeditor, gender, email, phone, department, researcharea, jobtitle;
        cout << "name = ";
        getline(cin, name);
        cout << "staff editor = ";
        cin >> staffeditor;
        cout << "gender = ";
        cin >> gender;
        cout << "email = ";
        cin >> email;
        cout << "phone = ";
        cin >> phone;
        cout << "department = ";
        cin >> department;
        cout << "researcharea = ";
        cin >> researcharea;
        cout << "jobtitle = ";
        cin >> jobtitle;
        Teacher teacher1(name, staffeditor, gender, email, phone, department, researcharea, jobtitle);
        teacher1.showInfo();
    return 0;
}