#include <iostream>
#include <string>
using namespace std;

class TV
{
    public:
        TV(string newLabel);
        void showInfo();
        void setLabel(string newLabel);
        string getLabel();
    private:
        string label;
};
