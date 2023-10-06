#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

/*
  In Multiple inheritance in CPP, the most derived class is responsible for
  instantiating the most base class/classes
*/

class Director : public Manager, public Executive
{
    private:
    float _budget;
    public:
    Director (std::string id,std::string name, int size,std::string location,float budget)
    : Employee(id,name),_Manager(id,name,size),Executive(id,name,location),_budget(budget){}

    void CalculateTax(){
        std::cout << "Director pays 50% as tax because RICH PROPLE\n"
    }
 ~Director() {
    std::cout<<"Director destroyed\n";
 }
}

#endif // DIRECTOR_H