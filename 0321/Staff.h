#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Staff
{
    public:
        Staff(string name, string staffeditor, string gender, string email, string phone, string unit, string servicecontent, string jobagent, string arrivaldate, string jobtitle);
        void setName(string newName);
        void setStaffeditor(string newStaffeditor);
        void setGender(string newGender);
        void setEmail(string newEmail);
        void setPhone(string newPhone);
        void setUnit(string newUnit);
        void setServicecontent(string newServicecontent);
        void setJobagent(string newJobagent);
        void setArrivaldate(string newArrivaldate);
        void setJobtitle(string newJobtitle);

        string getName();
        string getStaffeditor();
        string getGender();
        string getEmail();
        string getPhone();
        string getUnit();
        string getServicecontent();
        string getJobagent();
        string getArrivaldate();
        string getJobtitle();
        void showInfo();
    
    private:
        string name;
        string staffeditor;
        string gender;
        string email;
        string phone;
        string unit;
        string servicecontent; 
        string jobagent;
        string arrivaldate;
        string jobtitle;
};