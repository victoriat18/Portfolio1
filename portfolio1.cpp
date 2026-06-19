//Portfolio 1
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
// LEVEL 1 : A New Enemy, Basic Beginner level!
void loadLevel1() 
{
    //map loaded
    cout << "Level 1 loaded" << endl;

    string map[5] =
    {
        "########",
        "#      #",
        "#   #  #",
        "#     $#",
        "########"
    };
    //variables for guards and players
    int playerX = 1;
    int playerY = 1;

    int guardX = 2;
    int guardY = 6;

    int guardDirection = -1;
    char guardSymbol = '<';

    char input;

    while (true)
    {
        // Print map
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

        // Get input
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

        // Lose condition (walk into guard)
        if (newX == guardX && newY == guardY)
        {
            cout << "YOU WERE CAUGHT!" << endl;
            return;
        }

        // Move player
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

        // Update guard symbol
        if (guardDirection == 1)
            guardSymbol = '>';
        else
            guardSymbol = '<';

        // Guard vision
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
// LEVEL 2: The Truth of the Weapon, DIFFERENT MAP!
void loadLevel2() 
{
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

    int guardX = 1;
    int guardY = 6;

    int guardDirection = -1;
    char guardSymbol = '<';

    char input;

    while (true)
    {
        // Print map
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

        // User input
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

        // Lose condition (walking into guard)
        if (newX == guardX && newY == guardY)
        {
            cout << "YOU WERE CAUGHT!" << endl;
            return;
        }

        // Move player
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

        // Update guard symbol
        if (guardDirection == 1)
            guardSymbol = '>';
        else
            guardSymbol = '<';

        // Guard vision
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
// LEVEL 3: Revenge of the General, DIFFERENT MAP!
void loadLevel3() 
{
     cout << "Level 3 loaded" << endl;

    string map[5] =
{
    "########",
    "#     ##",
    "# ##   #",
    "#    #$#",
    "########"
    }; // map string ends here
    int playerX = 1;
    int playerY = 1;

    int guardX = 3;
    int guardY = 1;

    int guardDirection = -1;
    char guardSymbol = '<';

    char input;

    while (true)
    {
        // Print map
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

        // User input
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
            cout << "YOU WIN LEVEL 3!" << endl;
            return;
        }

        // Lose condition (walking into guard)
        if (newX == guardX && newY == guardY)
        {
            cout << "YOU WERE CAUGHT!" << endl;
            return;
        }

        // Move player
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

        // Update guard symbol
        if (guardDirection == 1)
            guardSymbol = '>';
        else
            guardSymbol = '<';

        // Guard vision
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

//Main menu with user input & loading the levels
int main(){
string choice; // user input
 
//main menu
cout << "Welcome to Ultra-Spy" << endl;
cout << "Select a level: " << endl; 
cout << "1) A New Enemy" << endl;
cout << "2) The Truth of the Weapon" << endl;
cout << "3) Revenge of the General" << endl;

getline(cin, choice);
 for (int i = 0; i < choice.length(); i++)
 {
    choice[i] = tolower(choice[i]);
 }


//case insensitive, if statements for user's input
if (choice == "1" || choice == "A New Enemy" || choice == "a new enemy")
{
    loadLevel1(); // function level 1
}
else if (choice == "2" || choice == "The Truth of the Weapon" || choice == "the truth of the weapon")
{
    loadLevel2(); // function level 2
} 
else if (choice == "3" || choice == "revenge of the general" || choice == "Revenge of the General")
{
    loadLevel3(); //function level 3
}
else 
{
    cout << "Invalid choice." << endl;
}
    return 0;
}