/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/game_of_life/game_of_life.h"



//------------------------------------------------------------------------------

using namespace std;

int main()
{
    // set seed
    srand(500);
    char ans;
    int world[WORLD_HEIGHT][WORLD_WIDTH];
    char fileName[] = "save.txt";
    char command;
    bool running = true;

    if(!load_grid(fileName, world)){
        init_array(world);
    }
    
    display_menu();
    while(running) {
        print_grid(world);
        cout << ": ";
        cin >> command;
        switch (command) 
        {

        // TODO
            
        default:
            cout << "{ Wrong Operation Command! }\n";
            break;
        }
    }
    cout << "Exit Game of Life\n";
    cout << "---------------------------------\n\n";
    return 0;
}
