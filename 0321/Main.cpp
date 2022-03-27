#include <iostream>
#include <string>
#include <iomanip>
#include "Staff.h"
using namespace std;
int main()
{
    string Name_;
    string ID_;
    string Gender;
    string Email;
    string Number;
    string Unit;
    string Serve;
    string Agent;
    string Date;
    string Title;
    int Years;
    int Month;
    int Day;

    cout << "Name =";
    getline(cin >> ws, Name_);
    cout << "ID =";
    cin >> ID_;
    cout << "Gender =";
    cin >> Gender;
    cout << "Email =";
    cin >> Email;
    cout << "Number =";
    cin >> Number;
    cout << "Unit =";
    cin >> Unit;
    cout << "Serve =";
    cin >> Serve;
    cout << "Agent =";
    cin >> Agent;
    cout << "Date =";
    cin >> Date;
    Years = (Date[0] - '0') * 1000 + (Date[1] - '0') * 100 + (Date[2] - '0') * 10 + Date[3] - '0';
    Month = (Date[5] - '0') * 10 + (Date[6] - '0');
    Day = (Date[8] - '0') * 10 + (Date[9] - '0');
    cout << "Title =";
    cin >> Title;
    Staff staff1(Name_, ID_, Gender, Email, Number, Unit, Serve, Agent, Date, Title, Years, Month, Day);
    staff1.showinfo();

    cout << "Name =";
    getline(cin >> ws, Name_);
    cout << "ID =";
    cin >> ID_;
    cout << "Gender =";
    cin >> Gender;
    cout << "Email =";
    cin >> Email;
    cout << "Number =";
    cin >> Number;
    cout << "Unit =";
    cin >> Unit;
    cout << "Serve =";
    cin >> Serve;
    cout << "Agent =";
    cin >> Agent;
    cout << "Date =";
    cin >> Date;
    Years = (Date[0] - '0') * 1000 + (Date[1] - '0') * 100 + (Date[2] - '0') * 10 + Date[3] - '0';
    Month = (Date[5] - '0') * 10 + (Date[6] - '0');
    Day = (Date[8] - '0') * 10 + (Date[9] - '0');
    cout << "Title =";
    cin >> Title;
    Staff staff2(Name_, ID_, Gender, Email, Number, Unit, Serve, Agent, Date, Title, Years, Month, Day);
    staff2.showinfo();

    cout << "Name =";
    getline(cin >> ws, Name_);
    cout << "ID =";
    cin >> ID_;
    cout << "Gender =";
    cin >> Gender;
    cout << "Email =";
    cin >> Email;
    cout << "Number =";
    cin >> Number;
    cout << "Unit =";
    cin >> Unit;
    cout << "Serve =";
    cin >> Serve;
    cout << "Agent =";
    cin >> Agent;
    cout << "Date =";
    cin >> Date;
    Years = (Date[0] - '0') * 1000 + (Date[1] - '0') * 100 + (Date[2] - '0') * 10 + Date[3] - '0';
    Month = (Date[5] - '0') * 10 + (Date[6] - '0');
    Day = (Date[8] - '0') * 10 + (Date[9] - '0');
    cout << "Title =";
    cin >> Title;
    Staff staff3(Name_, ID_, Gender, Email, Number, Unit, Serve, Agent, Date, Title, Years, Month, Day);
    staff3.showinfo();

    cout << "Name =";
    getline(cin >> ws, Name_);
    cout << "ID =";
    cin >> ID_;
    cout << "Gender =";
    cin >> Gender;
    cout << "Email =";
    cin >> Email;
    cout << "Number =";
    cin >> Number;
    cout << "Unit =";
    cin >> Unit;
    cout << "Serve =";
    cin >> Serve;
    cout << "Agent =";
    cin >> Agent;
    cout << "Date =";
    cin >> Date;
    Years = (Date[0] - '0') * 1000 + (Date[1] - '0') * 100 + (Date[2] - '0') * 10 + Date[3] - '0';
    Month = (Date[5] - '0') * 10 + (Date[6] - '0');
    Day = (Date[8] - '0') * 10 + (Date[9] - '0');
    cout << "Title =";
    cin >> Title;
    Staff staff4(Name_, ID_, Gender, Email, Number, Unit, Serve, Agent, Date, Title, Years, Month, Day);
    staff4.showinfo();

    cout << "Name =";
    getline(cin >> ws, Name_);
    cout << "ID =";
    cin >> ID_;
    cout << "Gender =";
    cin >> Gender;
    cout << "Email =";
    cin >> Email;
    cout << "Number =";
    cin >> Number;
    cout << "Unit =";
    cin >> Unit;
    cout << "Serve =";
    cin >> Serve;
    cout << "Agent =";
    cin >> Agent;
    cout << "Date =";
    cin >> Date;
    Years = (Date[0] - '0') * 1000 + (Date[1] - '0') * 100 + (Date[2] - '0') * 10 + Date[3] - '0';
    Month = (Date[5] - '0') * 10 + (Date[6] - '0');
    Day = (Date[8] - '0') * 10 + (Date[9] - '0');
    cout << "Title =";
    cin >> Title;
    Staff staff5(Name_, ID_, Gender, Email, Number, Unit, Serve, Agent, Date, Title, Years, Month, Day);
    staff5.showinfo();
    for (int i = 0; i < 5; i++)
    {
        if (!(staff1 > staff2))
        {
            Staff temp = staff1;
            staff1 = staff2;
            staff2 = temp;
        }
        if (!(staff2 > staff3))
        {
            Staff temp = staff2;
            staff2 = staff3;
            staff3 = temp;
        }
        if (!(staff3 > staff4))
        {
            Staff temp = staff3;
            staff3 = staff4;
            staff4 = temp;
        }
        if (!(staff4 > staff5))
        {
            Staff temp = staff4;
            staff4 = staff5;
            staff5 = temp;
        }
    }
        cout << staff1.getName_() << staff2.getName_() << staff3.getName_() << staff4.getName_() << staff5.getName_() << endl;

        return 0;
    }
    /// 2020/01/01 2020/01/02 1999/01/01 2000/07/27