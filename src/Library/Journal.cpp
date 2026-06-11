#include "Journal.h"
#include<iostream>

using namespace std;

Journal::Journal(int itemID,string title,string author,int publicationYear,string issn,int volume,int issueNumber):LibraryItem(itemID,title,author,publicationYear)
{
    this->issn=issn;
    this->volume=volume;
    this->issueNumber=issueNumber;
}
void Journal::checkout()
{
    cout<<"Journal checked out successfully."<<endl;
}
void Journal::displayInfo() const
{
    cout<<"\n==============Journal Information==============\n";
    cout<<"Item ID: "<<itemID<<endl;
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Publication Year: "<<publicationYear<<endl;
    cout<<"ISSN: "<<issn<<endl;
    cout<<"Volume: "<<volume<<endl;
    cout<<"Issue number: "<<issueNumber<<endl;
}