#ifndef HOSTELBLOCK_H
#define HOSTELBLOCK_H
#include "Room.h" // Ya jo bhi aapki room wali file ka sahi path hai
#include<iostream>
#include<string>
using namespace std;

class HostelBlock{
    private:
    string blockName;
    Room rooms[10];

    public:
    HostelBlock()
    {
        blockName = "Deafult Block! ";
    }
    HostelBlock(string name){
        blockName = name;
    }
    void setRoom(int index, Room r)
    {
        if(index >=0 && index <10)
        {
            rooms[index ]= r;
        }
    }
    void displayRooms()
    {
        cout<< "\n===== "<< blockName<< "====\n";
        for(int i=0;i<10;i++){
            rooms[i].displayRoom();
        }
    }
    string getBlockName() const{
        return blockName;
    }
};
#endif