#include "Staff.h"

void Staff::getinf() const{
    std::cout<<"Name: "<< name<<std::endl;
}

Staff::Staff():Staff("Unknown",new int(0)) {
    std::cout<<"Base default constructor was called; "<<std::endl;
}

Staff::Staff(std::string name, int *hasearnedmoney):
    name{name},hasearnedmoney{hasearnedmoney}
{
    std::cout<<"Base constructor was called: "<<std::endl;
}


Staff::Staff(Staff &employee):
    name{employee.name},hasearnedmoney{employee.hasearnedmoney}{
    std::cout<<"Deep constructor was called"<<std::endl;
}

Staff::Staff(Staff &&employee) noexcept:
        name{employee.name},hasearnedmoney{employee.hasearnedmoney}{
    employee.name = nullptr;
    employee.hasearnedmoney = nullptr;
}



Staff::~Staff(){
    delete hasearnedmoney;
    std::cout<< "Destructor was called "<<std::endl;
}


Staff &Staff::operator=(const Staff &employee) {
    if (this==&employee){
        return *this;
    }
    name = employee.name;
    hasearnedmoney = employee.hasearnedmoney;
    return *this;
}


//Class waitor: inherited from Staff

void Waitor::getinf() const {
    Staff::getinf();
    std::cout<<"Tips for today: "<< tips << std::endl;
}

Waitor::Waitor(): Waitor("Unknown",0,0) {
    std::cout<<"Default derived constructor was called"<<std::endl;
}

Waitor::Waitor(std::string name, int hasearnedmoney, int tips):
    Staff(name,(new int(hasearnedmoney))),tips{tips}
{
    std::cout << "Derived constructor was called"<<std::endl;
}

Waitor::Waitor(Waitor &waitor):
Staff(waitor),tips{waitor.tips}{
    std::cout<<"Derived copy constructor was called"<<std::endl;
}
//Deep copy constructor


Waitor::Waitor(Waitor &&waitor) noexcept:
        Staff(std::move(waitor)),tips{waitor.tips}{
    std::cout<<"Move constructor was called"<<std::endl;
}

//Waitors move constructor


Waitor::~Waitor(){
    std::cout<<"Derived destructor was called"<<std::endl;
}

Waitor &Waitor::operator=(const Waitor &employee) {
    if(this!=&employee){
        Staff::operator=(employee);
        tips = employee.tips;
    }
    return *this;
}
//Copy assignment operator was called