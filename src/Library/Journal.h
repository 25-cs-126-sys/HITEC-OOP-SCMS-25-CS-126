#ifndef JOURNAL_H
#define JOURNAL_H

#include "LibraryItem.h"
class Journal:public LibraryItem
{
    private:
    string issn;
    int volume;
    int issueNumber;

    public:
      Journal(int itemID,string title,string author,int publicationYear,string issn,int volume,int issueNumber);

      void checkout() override;
      void displayInfo() const override;
};
#endif