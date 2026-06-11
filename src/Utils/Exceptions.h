#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include<iostream>
#include<exception>
#include<string>
using namespace std;
class CapacityExceededException:public exception{
    public:
    const char* what() const noexcept override{
        return "Course capacity exceeded.Enrollment not allowed!";
    }
};
class OverdueException:public exception{
    private:
    double fineAmount;
    public:
      OverdueException(double fine){
        fineAmount=fine;
      }
      double getFine() const
      {
        return fineAmount;
      }
      const char* what() const noexcept override{
        return "Library item returned late!";
      }
};
#endif