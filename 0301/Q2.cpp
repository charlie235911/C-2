#include <iostream>
#include <string>
using namespace std;

class Hero
{
public:
    Hero(string heroname)
    {
        setHeroname(heroname);
    }
    void setHeroname(string newheroname)
    {
        heroname = newheroname;
    }
    string getHeroname()
    {
        return heroname;
    }
    void setHeroweapon(string newheroweapon)
    {
        heroweapon = newheroweapon;
    }
    string getHeroweapon()
    {
        return heroweapon;
    }
    void setHeroarmor(string newheroarmor)
    {
        heroarmor = newheroarmor;
    }
    string getHeroarmor()
    {
        return heroarmor;
    }
    void setHeroability(string newheroability)
    {
        heroability = newheroability;
    }
    string getHeroability()
    {
        return heroability;
    }
    void setHerofeature(string newherofeature)
    {
        herofeature = newherofeature;
    }
    string getHerofeature()
    {
        return herofeature;
    }
    void setHerorank(string newherorank)
    {
        herorank = newherorank;
    }
    string getHerorank()
    {
        return herorank;
    }
    void showInfo()
    {
        cout << getHeroname() << endl;
        cout << getHeroweapon() << endl;
        cout << getHeroarmor() << endl;
        cout << getHeroability() << endl;
        cout << getHerofeature() << endl;
    }

private:
    string heroname;
    string heroweapon;
    string heroarmor;
    string heroability;
    string herofeature;
    string herorank;
};

int main(int argc, char const *argv[])
{
    Hero hero1("A" "D" "G" "J" "M" "P");
    Hero hero2("B" "E" "H" "K" "N" "Q");
    Hero hero3("C" "F" "I" "L" "O" "R");
    hero1.showInfo();
    hero2.showInfo();
    hero3.showInfo();
    return 0;
}
