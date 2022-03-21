#include <iostream>
#include <iomanip>
#include <string>
#include "Staff.h"
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        string name, staffeditor, gender, email, phone, unit, servicecontent, jobagent, arrivaldate, jobtitle;
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
        cout << "unit = ";
        cin >> unit;
        cout << "service content = ";
        cin >> servicecontent;
        cout << "job agent = ";
        cin >> jobagent;
        cout << "arrival date = ";
        cin >> arrivaldate;
        cout << "job title = ";
        cin >> jobtitle;
        Staff staff[i](name, staffeditor, gender, email, phone, unit, servicecontent, jobagent, arrivaldate, jobtitle);
        staff[i].showInfo();
    }
    return 0;
}