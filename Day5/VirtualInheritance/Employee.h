#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

class Employee
{
    private:
    std::string _id;
    std::string _name;
    public:
    Employee(std::string id, std::string name) :
     _id(id), _name(name){}
    virtual void CalculateTax() = 0; // abs
    virtual ~Employee() {}
};

#endif // EMPLOYEE_H