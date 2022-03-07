#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student :: Student(string name, string id, string gender, string email, string phone){
    setName(name);
    setID(id);
    setGender(gender);
    setEmail(email);
    setPhone(phone);
}

void Student :: setName(string newName){
    if (newName.size() <= 25)
    {
        name = newName;
    }else{
        name = newName.substr(0, 25);
    }
}

void Student :: setID(string newID){
    if (newID.size() <= 10)
    {
        id = newID;
    }else{
        id = newID.substr(0, 10);
    }
}

void Student :: setGender(string newGender){
    gender = newGender;
}

void Student :: setEmail(string newEmail){
    email = newEmail;
}

void Student :: setPhone(string newPhone){
    phone = newPhone;
}

string Student ::getName(){
    return name;
}

string Student ::getID(){
    return id;
}

string Student ::getGender(){
    return gender;
}

string Student ::getEmail(){
    return email;
}

string Student ::getPhone(){
    return phone;
}

void Student :: showInfo(){
    cout << "------------------------------------" << endl;
    cout << "name: " << getName() << "(" << getID() << ")" << endl;
    cout << "email: " << getEmail() << endl;
    cout << "phone: " << getPhone() << endl;
    cout << "------------------------------------" << endl;
}