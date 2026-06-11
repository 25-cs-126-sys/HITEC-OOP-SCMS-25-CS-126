#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include<iostream>
#include<string>
using namespace std;
class LibraryItem{|
protected:
     int itemID;
     string title;
     string author;
     int publicationYear;

     public:
     LibraryItem(int itemID,string title,string author,int publicationYear);

     virtual ~LibraryItem();

     int getItemID() const;
     string getTitle() const;
     string getAuthor() const;
     int getPublicationYear() const;

     virtual void checkout()=0;
     virtual void displayInfo() const=0;
};
#endif