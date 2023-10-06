#ifndef EXECUTIVE_H
#define EXECUTIVE_H

class Executive : virtual public Employee
{
    private:
    std::string _location;
    public:
    Executive (std::string id,std::string name,std::string location)
    : Employee(id,name),Manager(size),_location(location){}

    void CalculateTax() ovveride {
        std::cout<< "Executive pays 20% tax\n";
    }

    virtual ~Executive() {}
}

#endif // EXECUTIVE_H