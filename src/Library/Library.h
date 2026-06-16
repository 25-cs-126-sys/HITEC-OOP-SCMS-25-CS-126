#ifndef LIBRARY_H
#define LIBRARY_H

#include "LibraryItem.h"
#include<string>

using namespace std;
class Library{
    private:
    LibraryItem* items[100];
    int itemCount;

public:
Library();
~Library();

void addItem(LibraryItem* item);
void displayAllItems() const;
void searchByTitle(string title) const;

void savetoFile(string filename);
void loadFromFile(string filename);
};
#endif