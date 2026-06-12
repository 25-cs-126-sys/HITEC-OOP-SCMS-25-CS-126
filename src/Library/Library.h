#include "Journal.h"
#include <iostream>

using namespace std;
Journal::Journal(int itemID,string title,string author,int publicationYear,string issn,int volume,int issueNumber):Libraryitem(itemID,title,author,publicationYear)
{
    this->issn=issn;
    this->volume=volume;
    this->issueNumber=issueNumber;
}
void Journal::checkout()
{
    cout<<"Journal checked out Successfully."<<endl;
}

void Journal::displayInfo() const
{
    cout"\n=============Journal Information============\n"<<endl;
    cout<<"Item ID: "<<itemID<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Publication Year: "<<publicationYear<<endl;
    cout<<"ISSN: "<<issn<<endl;
    cout<<"Issue Number: "<<issueNumber<<endl;
}