#include <iostream>
#include <string>
#include "TV.h"
using namespace std;

TV :: TV(string newLabel){
    label = newLabel;
}

void TV::setLabel(string newLabel){
    label = newLabel;
}
string TV ::getLabel(){
    return label;
}

void TV::showInfo(){
    cout << "TV's label is" << label << endl;
}