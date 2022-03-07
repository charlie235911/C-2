#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string name, id, gender, email, phone;
    for (int i = 1; i <= 3; i++)
    {
        cout << "name = ";
        getline(cin, name);
        cout << "id = ";
        cin >> id;
        cout << "gender = ";
        cin >> gender;
        cout << "email = ";
        cin >> email;
        cout << "phone = ";
        cin >> phone;
        Student studenti(name, id, gender, email, phone);
        studenti.showInfo();
    }
    return 0;
}
