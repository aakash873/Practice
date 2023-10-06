#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "Employee.h"

class Manager : virtual public Employee
{
    private:
    int _team_size;
    public:
    Manager(std::string id, std::string name, int size)
    : Employee(id,name), _team_size(size){}

    void CalculateTax() ovveride {
        std::cout<< "Manager pays 20% tax\n";
    }

    virtual ~Manager() {}

};

#endif // MANAGER_H