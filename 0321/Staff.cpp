#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

Staff ::Staff(string name, string staffeditor, string gender, string email, string phone, string unit, string servicecontent, string jobagent, string arrivaldate, string jobtitle)
{
    setName(name);
    setStaffeditor(staffeditor);
    setGender(gender);
    setEmail(email);
    setPhone(phone);
    setUnit(unit);
    ;
    setServicecontent(servicecontent);
    setJobagent(jobagent);
    setArrivaldate(arrivaldate);
    setJobtitle(jobtitle);
}

void Staff ::setName(string newName)
{
    if (newName.size() <= 25)
    {
        name = newName;
    }
    else
    {
        name = newName.substr(0, 25);
    }
}

void Staff ::setStaffeditor(string newStaffeditor)
{
    if (newStaffeditor.size() <= 10)
    {
        staffeditor = newStaffeditor;
    }
    else
    {
        staffeditor = newStaffeditor.substr(0, 10);
    }
}

void Staff ::setGender(string newGender)
{
    gender = newGender;
}

void Staff ::setEmail(string newEmail)
{
    email = newEmail;
}

void Staff ::setPhone(string newPhone)
{
    phone = newPhone;
}

void Staff ::setUnit(string newUnit)
{
    unit = newUnit;
}

void Staff ::setServicecontent(string newServicecontent)
{
    servicecontent = newServicecontent;
}

void Staff ::setJobagent(string newJobagent)
{
    jobagent = newJobagent;
}

void Staff ::setArrivaldate(string newArrivaldate)
{
    arrivaldate = newArrivaldate;
}

void Staff ::setJobtitle(string newJobtitle)
{
    jobtitle = newJobtitle;
}

string Staff ::getName()
{
    return name;
}

string Staff ::getStaffeditor()
{
    return staffeditor;
}

string Staff ::getGender()
{
    return gender;
}

string Staff ::getEmail()
{
    return email;
}

string Staff ::getPhone()
{
    return phone;
}

string Staff ::getUnit()
{
    return unit;
}

string Staff ::getServicecontent()
{
    return servicecontent;
}

string Staff ::getJobagent()
{
    return jobagent;
}

string Staff ::getArrivaldate()
{
    return arrivaldate;
}

string Staff ::getJobtitle()
{
    return jobtitle;
}

void Staff ::showInfo()
{
    cout << "------------------------------------" << endl;
    cout << "name: " << getName() << endl;
    cout << "staff editor: " << getStaffeditor() << endl;
    cout << "gender: " << getGender() << endl;
    cout << "email: " << getEmail() << endl;
    cout << "phone: " << getPhone() << endl;
    cout << "unit: " << getUnit() << endl;
    cout << "service content: " << getServicecontent() << endl;
    cout << "job agent: " << getJobagent() << endl;
    cout << "arrivaldate: " << getArrivaldate() << endl;
    cout << "job title: " << getJobtitle() << endl;
    cout << "------------------------------------" << endl;
}