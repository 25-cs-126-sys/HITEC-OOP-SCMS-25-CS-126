#include "Person.h"
Person::Person
{
    this->name=name;
    this->cnic=cnic;
    this->age=age;
    this->contact=contact;
}
Person::~Person(){

}
string Person::getName() const
{
    return name;
}
string Person::getCNIC() const
{
    return cnic;
}
int Person::getAge() const
{
    return age;
}
string Person::getAge() const
{
    return age;
}
string Person::getContact() const
{
    return contact;
}