#include "Library.h"
#include <iostream>
#include <fstream>

using namespace  std;
Library::Library()
{
    itemCount=0;
}
Library::~Library()
{
    for(int i=0;i<itemCount;i++)
    {
        delete items[i];
    }
}
void Library::addItem(LibraryItem* item){
    if(itemCount<100)
    {
        items[itemCount]=item;
        itemCount++;
    }
}
void Library::displayAllItems() const
{
    for(int i=0;i<itemCount;i++)
    {
        items[i]->displayInfo();
        cout<<endl;
    }
}

void Library::searchByTitle(string title) const
{
   bool found=false;
   for(int i=0;i<itemCount;i++)
   {
    if(items[i]->getTitle() == title)
    {
        items[i]->displayInfo();
        found=true;
    }
   }
   if(!found)
   {
    cout<<"Item not found."<<endl;
   }
}
void Library::savetoFile(string filename){
    ofstream file(filename);

    if(file.is_open())
    {
        file<<"Library Catalog Saved Successfully"<<endl;
        file.close();
    }
}
void Library::loadFromFile(string filename)
{
    ifstream file(filename);
    if(file.is_open())
    {
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
}