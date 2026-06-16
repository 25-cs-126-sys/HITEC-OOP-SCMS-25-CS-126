#include<iostream>

#include "person/Student.h"
#include "person/Faculty.h"
#include "person/Staff.h"
#include "person/GradStudent.h"
#include "src\Library\Library.h"
#include "Book.h"
#include "Journal.h"

using namespace std;
int main(){
   Student s1("Owais Ahmad","16202-7180024-1",20,"03163473089","CS-021",3,3.43);

   s1.addCourse("OOP");
   s1.addCourse("DSA");

   Faculty f1("Dr.Owais","16202-33243322",40,"03234224423","F-101","Computer Science","Assistant Professor");

   f1.assignCourse("OOP");

   Staff st1("Ahmed","45656-789688-8",35,"038328384322","CS-378","Clerk",787780);

   GradStudent g1("Bilal","77854-765775-9",25,"03459865488","MS-021",2,3.9,"Artificial Intelligence","Dr.Ali");

   Person* persons[4];

   persons[0]=&s1;
   persons[1]=&f1;
   persons[2]=&st1;
   persons[3]=&g1;

   cout<<"-------PERSONS INFORMATION--------\n";
   for(int i=0;i<4;i++)
   {
    persons[i]->displayInfo();
    cout<<endl;
   }
   Library lib;
   Book* b1=new Book(101,"C++ Object Oriented Programming","Robert Lafore",2020,"978-3-16","Computer Science",5);
   Journal* j1=new Journal(201,"IEEE RESEARCH ON MATHS","Dr.Ahmad",2026,"ISSN-9988",15,2);
   lib.addItem(b1);
   lib.addItem(j1);
   cout<<"\n=========LIBRARY MODULE============\n";
   lib.displayAllItems();
return 0;
   

}