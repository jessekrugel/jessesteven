#include <istream>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

const int QUESTIONS = 10;
string toUpper(string name);
char toLower(char c);
bool yesOrNo(int index);
char choice[QUESTIONS];

int main()
{
    string name;
    cout << "Choose your own adventure!" << endl;
    cout << "Enter your first name: ";
    cin >> name;
    name = toUpper(name);
    cout << "The year is 2169. You're living as a college student " << endl
        << "at the University of Michigan, in Ann Arbor, which has "<< endl
        << "recently been named the best city on EARTH. Despite " << endl
        << "climate change, racial injustice, and income inequality " << endl
        << "in the rest of the world, Ann Arbor is viewed as a utopia!" << endl;
   
    cout << "The smart chip, Annalee, implanted in your brain has a message "
        << "for you: " << endl
        << "Annalee: " << name << ", it's Monday. You have an 8am "
        << "class. Would you like to wake up? (y/n)" << endl;
   
    if (yesOrNo(0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}

string toUpper(string name)
{
    //capitalizes first letter in name
    if (name.at(0) >= 97)
    {
        name.at(0) -= 32;
    }
    for (int i = 1; i < name.size(); i++)
    {
        if (name.at(i) >= 65 && name.at(i) <= 90)
        {
            name.at(i) += 32;
        }
    }
    return name;
}

char toLower(char c)
{
    if (c >= 65 && c <= 90)
    {
        c += 32;
    }
    return c;
}

bool yesOrNo(int index)
{
    cin >> choice[index];
    choice[index] = toLower(choice[index]);
    
    while (choice[index] != 'y' && choice[index] != 'n')
    {
        cout << "Invalid" << endl;
        cin >> choice[index];
        choice[index] = toLower(choice[index]);
    }
    if (choice[index] == 'y')
    {
        return true;
    }
    return false;
}
