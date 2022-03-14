#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Teacher
{
    public:
        Teacher(string name, string staffeditor, string gender, string email, string phone, string department, string researcharea, string jobtitle);
        void setName(string newName);
        void setStaffeditor(string newStaffeditor);
        void setGender(string newGender);
        void setEmail(string newEmail);
        void setPhone(string newPhone);
        void setDepartment(string newDepartment);
        void setResearcharea(string newResearcharea);
        void setJobtitle(string newJobtitle);

        string getName();
        string getStaffeditor();
        string getGender();
        string getEmail();
        string getPhone();
        string getDepartment();
        string getResearcharea();
        string getJobtitle();
        void showInfo();
    
    private:
        string name;
        string staffeditor;
        string gender;
        string email;
        string phone;
        string department;
        string researcharea; 
        string jobtitle;
};