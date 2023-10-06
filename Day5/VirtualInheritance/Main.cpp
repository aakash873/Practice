#include<iostream>
#include "Director.h"
#include "Employee.h"

int main(){
    Director* d1 = new Director(
        "D191",
        "Aakash",
        16,
        "Pune",
        456789.0f
    );

    std::cout << "Director object\n";
    d1->CalculateTax();
    std::cout << "ID from Employee: " << d1->id()<<"\n";
    std::cout << "Name from EMployee" << d1->name()<<"\n";
    std::cout << "Team Size from Manager section: "<< d1->teamSize() <<"\n";
    std::cout << "Location from executive section: "<< d1->location() <<"\n";
    std::cout << "Budget from Director section: "<< d1->budget() <<"\n";

    std::cout << "Calling calculateTax inherited from Manager class: "<<"\n";
    d1->Manager::CalculateTax();
    std::cout <<"\n";

    std::cout << "Calling calculateTax inherited from Executive class: "<<"\n";
    d1->Executive::CalculateTax();
    std::cout<< "\n";

    std::cout << "Director;s implementation of calculateTax: "<<"\n";
    d1->CalculateTax();
    std::cout<<"\n";

    std::cout<<"Director object\n";
    std::cout << *d1 <<"\n";
    
    delete d1;
}