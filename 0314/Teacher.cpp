#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

Teacher ::Teacher(string name, string staffeditor, string gender, string email, string phone, string department, string researcharea, string jobtitle)
{
    setName(name);
    setStaffeditor(staffeditor);
    setGender(gender);
    setEmail(email);
    setPhone(phone);
    setDepartment(department);
    setResearcharea(researcharea);
    setJobtitle(jobtitle);
}

void Teacher ::setName(string newName)
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

void Teacher ::setStaffeditor(string newStaffeditor)
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

void Teacher ::setGender(string newGender)
{
    gender = newGender;
}

void Teacher ::setEmail(string newEmail)
{
    email = newEmail;
}

void Teacher ::setPhone(string newPhone)
{
    phone = newPhone;
}

void Teacher ::setDepartment(string newDepartment)
{
    department = newDepartment;
}

void Teacher ::setResearcharea(string newResearcharea){
    researcharea = newResearcharea;
}

void Teacher ::setJobtitle(string newJobtitle){
    jobtitle = newJobtitle;
}

string Teacher ::getName()
{
    return name;
}

string Teacher ::getStaffeditor()
{
    return staffeditor;
}

string Teacher ::getGender()
{
    return gender;
}

string Teacher ::getEmail()
{
    return email;
}

string Teacher ::getPhone()
{
    return phone;
}

string Teacher ::getDepartment()
{
    return department;
}

string Teacher ::getResearcharea()
{
    return researcharea;
}

string Teacher ::getJobtitle()
{
    return jobtitle;
}

void Teacher ::showInfo()
{
    cout << "------------------------------------" << endl;
    cout << "name: " << getName()<< endl;
    cout << "staff editor: " << getStaffeditor()<< endl;
    cout << "gender: " << getGender()<< endl;
    cout << "email: " << getEmail() << endl;
    cout << "phone: " << getPhone() << endl;
    cout << "department: " << getDepartment()<< endl;
    cout << "research area: " << getResearcharea()<< endl;
    cout << "job title: " << getJobtitle()<< endl;
    cout << "------------------------------------" << endl;
}