#include <iostream>
#include <string>
using namespace std;

void loadLevel1() // LEVEL 1
{
    cout << "Level 1 loaded" << endl;
    //MAP
    string level[] =
    {
        "########",
        "#@     #",
        "#   #  #",
        "#      #",
        "########"
    }; //closes
    for (int i = 0; i < 5; i++)
    {
        cout << level[i] << endl;
    }
}

void loadLevel2() // LEVEL 2
{
    cout << "Level 2 loaded" << endl;
     string level[] =
    {
        "########",
        "#@     #",
        "#   #  #",
        "#      #",
        "########"
    };//closes
    for (int i = 0; i < 5; i++)
    {
        cout << level[i] << endl;
    }
}

void loadLevel3() // LEVEL 3
{
    cout << "Loading Level 3..." << endl;
}
//Main menu with user input
int main(){
string choice; // user input
 

cout << "Welcome to Ultra-Spy" << endl;
cout << "Select a level: " << endl; 
cout << "1) A New Enemy" << endl;
cout << "2) The Truth of the Weapon" << endl;

getline(cin, choice);

//case insensitive, if statements
if (choice == "1" || choice == "A New Enemy" || choice == "a new enemy")
{
    loadLevel1(); // function
}
else if (choice == "2" || choice == "The Truth of the Weapon" || choice == "the truth of the weapon")
{
    loadLevel2();
}
else 
{
    cout << "Invalid choice." << endl;
}
    return 0;
}