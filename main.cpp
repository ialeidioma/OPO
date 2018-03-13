#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

#include "variables.h"

int main()
{
    srand (time(NULL));
    cout << "alright i'm trying to make something, don't mind me\n";
    cout << "it's gonna take a while to make it work but it shouldn't be too hard\n";
    cout << "since i \"lost\" my \"partner\" had to kinda gave up on the other project\n";
    cout << "anyway let's start, type \"start\" etc should be used to by now\n";

    for(;;){
    getline(cin, game_menu);

    if(!game_menu.compare("start"))
    {
        system("cls");
        #include "game_start.h"
    }
    else if(!game_menu.compare("adakkusu"))
    {
        cout << "hello fren\n";
        cout << "it's adakkusu-san here\n";
        cout << "~~(•_•)~~\n";
    }
    else if(!game_menu.compare("exit"))
    {
        break;
    }
    else
    {
        cout << "you can only start the game atm\n";
    }
    }

    return 0;
}
