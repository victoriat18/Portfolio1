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
        "#      #",
        "########"
    };

    int playerX = 1;
    int playerY = 1;
    //Guard position
    int guardX = 1;
    int guardY = 6;
    //1 means right, -1 means left
    int guardDirection = -1;


    char input;

    while (true)
    {
        // print map
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 8; j++){
                if (i == playerX && j == playerY)
                cout << '@';
                else if (i == guardX && j == guardY)
                cout << '>';
                else
                cout << map[i][j];
            }
            cout << endl;
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
            return; // exits
        }
        if (newX == guardX && newY == guardY) //guard caught player
        {
            cout << "YOU WERE CAUGHT!";
            return;
        }

        // Wall check and moving, moving player
        if (map[newX][newY] != '#')
        {
            playerX = newX;
            playerY = newY;

        }



//check next before moving, crash impliment
if (guardY + guardDirection < 0 || guardY + guardDirection >= 8 || map[guardX][guardY + guardDirection] == '#')
{
    guardDirection = -guardDirection;
}
        guardY = guardY + guardDirection;

        //GUARD VISION, lose part
        if (playerX == guardX){
            if (guardDirection == 1 && playerY > guardY){
                cout << "YOU WERE CAUGHT!" << endl;
                return;
            }
            if (guardDirection == -1 && playerY < guardY)
            {
                cout << "YOU WERE CAUGHT!" << endl;
                return;
            }
        }
        
    }
}

void loadLevel2() // LEVEL 2 different map layout
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