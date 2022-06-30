#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#include <iostream>
#include <iomanip>
#include <fstream>

const int WORLD_HEIGHT = 10; // the height of world
const int WORLD_WIDTH = 20;  // the width of world 
const int WIDTH = 2;         // the width of a cell
const int ALIVE = 1;         // indicate live cell
const int DEAD = 0;          // indicate dead cell
const int RANDOM = 20;       // add n random number live cell

// display the menu
void display_menu();
// generate a random number
int random(int low, int high);
// initialize array with val
void init_array(int g[WORLD_HEIGHT][WORLD_WIDTH], int val=DEAD);
// display the array
void print_grid(int g[WORLD_HEIGHT][WORLD_WIDTH]);
// copy src array to dest array
void copy_array(int dest[][WORLD_WIDTH], int src[][WORLD_WIDTH]);
// calculate the alive neighbors for a cell
int count_neighbors(int g[][WORLD_WIDTH], int i, int j);
// update grid to the next generation
void step(int g[][WORLD_WIDTH]);
// add an additional n random live cells
void random_add(int g[][WORLD_WIDTH]);
// set live cell to dead or dead cell to live
void toggle(int g[][WORLD_WIDTH], int i, int j);
// save the grid in a text file
bool save_grid(char file_name[], int g[][WORLD_WIDTH]);
// load the grid from the disk file 
bool load_grid(char file_name[], int g[][WORLD_WIDTH]);


//Definition

/**
 * @brief display_menu: display the menu
 */
void display_menu()
{
    using namespace std;
    cout << "[S]tep  [G]o  [R]andom  [C]lear  [T]oggle  sa[V]e  [L]oad  [?]Menu  e[x]it" << endl;
}

/**
 * @brief print_grid: display the world
 * @param g: world 2D array
 */
void print_grid(int g[WORLD_HEIGHT][WORLD_WIDTH])
{
    using namespace std;
    for (int i=0; i<WORLD_HEIGHT; i++) {
        // print upper boarder
        if(i==0){
            for (int j=0; j<WORLD_WIDTH*WIDTH+4; j++) {
                cout << "-";
            }
            cout << endl;
        }
        // print the world
        cout << "||";
        for (int j=0; j<WORLD_WIDTH; j++) {
            if (g[i][j] == ALIVE) {
                cout << setw(WIDTH) << "*";
            } else {
                cout << setw(WIDTH) << " ";
            }
        }
        cout << "||" << endl;
    }
    // print lower boarder
    for (int j=0; j<WORLD_WIDTH*WIDTH+4; j++) {
        cout << "-";
    }
    cout << endl;
}

// TODO: more definition

#endif // GAME_OF_LIFE_H