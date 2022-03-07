#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student
{
    public:
        Student(string name, string id, string gender, string email, string phone);
        void setName(string newName);
        void setID(string newID);
        void setGender(string newGender);
        void setEmail(string newEmail);
        void setPhone(string newPhone);

        string getName();
        string getID();
        string getGender();
        string getEmail();
        string getPhone();
        void showInfo();
    
    private:
        string name;
        string id;
        string gender;
        string email;
        string phone;
};
