#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    void setName(string newName)
    {
        Name = newName;
    }
    string getName()
    {
        return Name;
    }
    void setID(string newID)
    {
        ID = newID;
    }
    string getID()
    {
        return ID;
    }
    float setHeight(float newHeight)
    {
        Height = newHeight;
    }
    float getHeight()
    {
        return Height;
    }
    float setWeight(float newWeight)
    {
        Weight = newWeight;
    }
    float getWeight()
    {
        return Weight;
    }
    void setGender(string newGender)
    {
        Gender = newGender;
    }
    string getGender()
    {
        return Gender;
    }
    float getBMI()
    {
        BMI =  (float)Weight / (((float)Height/100) * ((float)Height/100));
        return BMI;
    }
    void showInfo()
    {
        cout << "Name:" << getName() << endl;
        cout << "ID:" << getID() << endl;
        cout << "Height:" << getHeight() << endl;
        cout << "Weight:" << getWeight() << endl;
        cout << "Gender:" << getGender() << endl;
        cout << "BMI:" << getBMI() << endl;
    }

private:
    string Name;
    string ID;
    float Height;
    float Weight;
    string Gender;
    float BMI;
};

int main(int argc, char const *argv[])
{
    string Name;
    string ID;
    float Height;
    float Weight;
    string Gender;
    Person person;
    getline(cin, Name);
    getline(cin, ID);
    cin >> Height;
    cin >> Weight;
    cin >> Gender;
    person.setName(Name);
    person.setID(ID);
    person.setHeight(Height);
    person.setWeight(Weight);
    person.setGender(Gender);
    person.showInfo();
    return 0;
}
