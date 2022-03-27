#include <iostream>
#include <string>
#include <iomanip>
#include "Staff.h"
using namespace std;

Staff::Staff(string Name_, string ID_, string Gender, string Email, string Number, string Unit, string Serve, string Agent, string Date, string Title)
{
    setName_(Name_);
    setID_(ID_);
    setGender(Gender);
    setEmail(Email);
    setNumber(Number);
    setUnit(Unit);
    setServe(Serve);
    setAgent(Agent);
    setDate(Date);
    setTitle(Title);
}

Staff::Staff(string Name_, string ID_, string Gender, string Email, string Number, string Unit, string Serve, string Agent, string Date, string Title, int newYears, int newMonth, int newDay)
{
    setName_(Name_);
    setID_(ID_);
    setGender(Gender);
    setEmail(Email);
    setNumber(Number);
    setUnit(Unit);
    setServe(Serve);
    setAgent(Agent);
    setDate(Date);
    setTitle(Title);
    Years = 2022-newYears;
    Month = 12-newMonth+3;
    Day = 30-newDay+21;
    if (Day>=30)
    {
        Month++;
        Day=Day-30;
    }
    if (Month>=12)
    {
        Years++;
        Month=Month-12;
    }

}

void Staff::setName_(string newName_)
{
    if (newName_.size() <= 25)
    {
        Name_ = newName_;
    }
    else
    {
        Name_ = newName_.substr(0, 25);
    }
}
void Staff::setID_(string newID_)
{
    if (newID_.size() <= 10)
    {
        ID_ = newID_;
    }
    else
    {
        ID_ = newID_.substr(0, 10);
    }
}
void Staff::setGender(string newGender)
{
    Gender = newGender;
}
void Staff::setEmail(string newEmail)
{
    Email = newEmail;
}
void Staff::setNumber(string newNumber)
{
    Number = newNumber;
}
void Staff::setUnit(string newUnit)
{
    Unit = newUnit;
}
void Staff::setServe(string newServe)
{
    Serve = newServe;
}
void Staff::setAgent(string newAgent)
{
    Agent = newAgent;
}
void Staff::setDate(string newDate)
{
    Date = newDate;
}
void Staff::setTitle(string newTitle)
{
    Title = newTitle;
}
void Staff::setSeniority(int newSeniority)
{
    Seniority = newSeniority;
}

string Staff::getName_()
{
    return Name_;
}
string Staff::getID_()
{
    return ID_;
}
string Staff::getGender()
{
    return Gender;
}
string Staff::getEmail()
{
    return Email;
}
string Staff::getNumber()
{
    return Number;
}
string Staff::getUnit()
{
    return Unit;
}
string Staff::getServe()
{
    return Serve;
}
string Staff::getAgent()
{
    return Agent;
}
string Staff::getDate()
{
    return Date;
}
string Staff::getTitle()
{
    return Title;
}
int Staff::getSeniority()
{
    return Seniority;
}

bool Staff::operator>(const Staff &obj)
{
    if (Years == obj.Years)
    {
        if (Month == obj.Month)
        {
            if (Day == obj.Day)
            {
                return 1;
            }
            else if (Day > obj.Day)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (Month > obj.Month)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (Years > obj.Years)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool Staff::operator<(const Staff &obj)
{
    if (Years < obj.Years || Month > obj.Month || Day > obj.Day)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*Staff Staff::operator=(const Staff &obj)
{
    Staff temp(obj.Name_, obj.ID_, obj.Gender, obj.Email, obj.Number, obj.Unit, obj.Serve, obj.Agent, obj.Date, obj.Title , obj.Years , obj.Month ,obj.Day);
    return temp;
}*/

void Staff::showinfo()
{
    cout << "------------------------------" << endl;
    cout << "Name = " << getName_() << endl;
    cout << "ID = " << getID_() << endl;
    cout << "Gender = " << getGender() << endl;
    cout << "Email = " << getEmail() << endl;
    cout << "Number = " << getNumber() << endl;
    cout << "Unit = " << getUnit() << endl;
    cout << "Serve = " << getServe() << endl;
    cout << "Agent = " << getAgent() << endl;
    cout << "Date = " << getDate() << endl;
    cout << "Title = " << getTitle() << endl;
    /*cout << "Years = " << Years << endl;
    cout << "Month = " << Month << endl;
    cout << "Day = " << Day << endl;*/
    cout << "------------------------------" << endl;
}