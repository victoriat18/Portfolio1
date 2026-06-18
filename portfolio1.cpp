//Portfolio 1
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
        "#      #",
        "#   #  #",
        "#     $#",
        "########"
    };

    int playerX = 1;
    int playerY = 1;

    int guardX = 1;
    int guardY = 6;

    int guardDirection = -1;
    char guardSymbol = '<';

    char input;

    while (true)
    {
        // Printing map
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == playerX && j == playerY)
                    cout << '@';
                else if (i == guardX && j == guardY)
                    cout << guardSymbol;
                else
                    cout << map[i][j];
            }
            cout << endl;
        }

        // user input
        cout << "Move (WASD): ";
        cin >> input;
        input = tolower(input);

        int newX = playerX;
        int newY = playerY;

        if (input == 'w') newX--;
        if (input == 's') newX++;
        if (input == 'a') newY--;
        if (input == 'd') newY++;

        // Win condition
        if (map[newX][newY] == '$')
        {
            cout << "YOU WIN LEVEL 1!" << endl;
            return;
        }

        // Lose condition
        if (newX == guardX && newY == guardY)
        {
            cout << "YOU WERE CAUGHT!" << endl;
            return;
        }

        // Move player @
        if (map[newX][newY] != '#')
        {
            playerX = newX;
            playerY = newY;
        }

        // Guard movement 
        if (guardY + guardDirection < 0 ||
            guardY + guardDirection >= 8 ||
            map[guardX][guardY + guardDirection] == '#')
        {
            guardDirection = -guardDirection;
        }

        guardY += guardDirection;

        if (guardDirection == 1) guardSymbol = '>';
        if (guardDirection == -1) guardSymbol = '<';

        // GUARD VISION (simple version)
        if (playerX == guardX)
        {
            if ((guardDirection == 1 && playerY > guardY) ||
                (guardDirection == -1 && playerY < guardY))
            {
                cout << "YOU WERE CAUGHT!" << endl;
                return;
            }
        }
    }
}
void loadLevel2(){
  cout << "Level 2 loaded" << endl;

    string map[5] =
    {
        "########",
        "#   #  #",
        "#   #  #",
        "#     $#",
        "########"
    };

    int playerX = 1;
    int playerY = 1;

    int guardX = 2;
    int guardY = 6;

    int guardDirection = -1;
    char guardSymbol = '<';

    char input;

    while (true)
    {
        // Printing map
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == playerX && j == playerY)
                    cout << '@';
                else if (i == guardX && j == guardY)
                    cout << guardSymbol;
                else
                    cout << map[i][j];
            }
            cout << endl;
        }

        // user input
        cout << "Move (WASD): ";
        cin >> input;
        input = tolower(input);

        int newX = playerX;
        int newY = playerY;

        if (input == 'w') newX--;
        if (input == 's') newX++;
        if (input == 'a') newY--;
        if (input == 'd') newY++;

        // Win condition
        if (map[newX][newY] == '$')
        {
            cout << "YOU WIN LEVEL 2!" << endl;
            return;
        }

        // Lose condition
        if (newX == guardX && newY == guardY)
        {
            cout << "YOU WERE CAUGHT!" << endl;
            return;
        }

        // Move player @
        if (map[newX][newY] != '#')
        {
            playerX = newX;
            playerY = newY;
        }

        // Guard movement 
        if (guardY + guardDirection < 0 ||
            guardY + guardDirection >= 8 ||
            map[guardX][guardY + guardDirection] == '#')
        {
            guardDirection = -guardDirection;
        }

        guardY += guardDirection;

        if (guardDirection == 1) guardSymbol = '>';
        if (guardDirection == -1) guardSymbol = '<';

        // GUARD VISION (simple version)
        if (playerX == guardX)
        {
            if ((guardDirection == 1 && playerY > guardY) ||
                (guardDirection == -1 && playerY < guardY))
            {
                cout << "YOU WERE CAUGHT!" << endl;
                return;
            }
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
cout << "3) Revenge of the General" << endl;

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