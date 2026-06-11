#include "Book.h"
#include<iostream>

using namespace std;

Book::Book(int itemID,string title,string author,int publicationYear,string isbn,string genre,int copiesAvailable):LibraryItem(itemID,title,author,publicationYear)
{
    this->isbn=isbn;
    this->genre=genre;
    this->copiesAvailable=copiesAvailable;
}
void Book::checkout()
{
    if(copiesAvailable>0){
        copiesAvailable--;
        cout<<"Book issued successfully."<<endl;
    }
    else{
        cout<<"No copies Available."<<endl;
    }
}

void Book::displayInfo() const
{
    cout<<"\n============Book Information==============\n";
    cout<<"ItemID: "<<itemID<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Publication Year: "<<publicationYear<<endl;
    cout<<"ISBN: "<<isbn<<endl;
    cout<<"Genre: "<<genre<<endl;
    cout<<"Copies Available: "<<copiesAvailable<<endl;
}