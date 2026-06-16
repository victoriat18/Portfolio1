#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void loadLevel1()
{
    cout << "Level 1 loaded" << endl;

    string map[5] =
    {
        "########",
        "#@     #",
        "#   #  #",
        "#   $  #",
        "########"
    };

    int playerX = 1;
    int playerY = 1;

    char input;

    while (true)
    {
        // print map
        for (int i = 0; i < 5; i++)
        {
            cout << map[i] << endl;
        }

        //get input
        cout << "Move (WASD): ";
        cin >> input;

        input = tolower(input);

        int newX = playerX;
        int newY = playerY;

        if (input == 'w') newX--;
        if (input == 's') newX++;
        if (input == 'a') newY--;
        if (input == 'd') newY++;

        // win condition
        if (map[newX][newY] == '$')
        {
            cout << "YOU WIN LEVEL 1!" << endl;
            return; // exits level safely
        }

        // Wall check and moving
        if (map[newX][newY] != '#')
        {
            map[playerX][playerY] = ' ';
            playerX = newX;
            playerY = newY;
            map[playerX][playerY] = '@';
        }
    }
}

void loadLevel2() // LEVEL 2
{
    cout << "Level 2 loaded" << endl;

    string map[5] =
    {
        "########",
        "#@  #  #",
        "#   #  #",
        "#   $  #",
        "########"
    };

    int playerX = 1;
    int playerY = 1;

    char input;

    while (true)
    {
        // print map
        for (int i = 0; i < 5; i++)
        {
            cout << map[i] << endl;
        }

        //get input
        cout << "Move (WASD): ";
        cin >> input;

        input = tolower(input);

        int newX = playerX;
        int newY = playerY;

        if (input == 'w') newX--;
        if (input == 's') newX++;
        if (input == 'a') newY--;
        if (input == 'd') newY++;

        // win condition
        if (map[newX][newY] == '$')
        {
            cout << "YOU WIN LEVEL 2!" << endl;
            return; // exits level safely
        }

        // Wall check and moving
        if (map[newX][newY] != '#')
        {
            map[playerX][playerY] = ' ';
            playerX = newX;
            playerY = newY;
            map[playerX][playerY] = '@';
        }
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