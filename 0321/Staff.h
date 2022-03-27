#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Staff
{
public:
    Staff(string Name_ , string ID_ , string Gender , string Email , string Number , string Unit ,string Serve, string Agent , string Date , string Title);
    Staff(string Name_, string ID_, string Gender, string Email, string Number, string Unit, string Serve, string Agent, string Date, string Title , int newYears , int newMonth ,int newDay);

    void setName_(string newName_);
    void setID_(string newID_);
    void setGender(string newGender);
    void setEmail(string newEmail);
    void setNumber(string newNumber);
    void setUnit(string newUnit);
    void setServe(string newServe);
    void setAgent(string newAgent);
    void setDate(string newDate);
    void setTitle(string newTitle);
    void setSeniority(int newSeniority);
    
    string getName_();
    string getID_();
    string getGender();
    string getEmail();
    string getNumber();
    string getUnit();
    string getServe();
    string getAgent();
    string getDate();
    string getTitle();
    int getSeniority();
    
    void showinfo();

    bool operator>(const Staff & );
    bool operator>= (const Staff & );
    bool operator< (const Staff & );
    bool operator<= (const Staff & );
    /*Staff operator= (const Staff & );
    */

private:
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
    int Seniority;
    int Years;
    int Month;
    int Day;

};

