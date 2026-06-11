#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
class Book:public LibraryItem
{
    private:
    string isbn;
    string genre;
    int copiesAvailable;

    public:
    Book(int itemID,string title,string author,int publicationYear,string isbn,string genre,int copiesAvailable);

    void checkout() override;
    void displayInfo() const override;
};
#endif