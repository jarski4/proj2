/*
   COPYRIGHT (C) 2018 Jared Skinner (jss136) All rights reserved.
   Data Structures Project #2
   Author.  Jared Skinner
            jss136@zips.uakron.edu
   Version. 1.01 03.11.2018
   Purpose: Given a directed weighted graph, this program generates the
   shortest path based on Dijkstra's Algorithm
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "jss136_316p2.hpp"

int main()
{
    int userPick, src;
    bool stillGoing = true;
    Graph* listPtr;

    //create a menu for user
    std::cout << "To find the shortest path:\n"
        << "(1) Open input files\n"
        << "(2) Source for shortest path\n"
        << "(3) Paths from A to B\n"
        << "(4) Quit\n";
    do{
        std::cout << "Select your choice: ";
        std::cin >> userPick;

        switch(userPick){
            case 1:{
                listPtr = openFile();
                break;
            }
            case 2:{
                src = getSource(listPtr);
                break;
            }
            case 3:{
                dijkstra(listPtr, src);
                break;
            }
            case 4:{
                stillGoing = false;
                break;
            }
        }
    }while((stillGoing == true));



    return 0;
}
