#include <iostream>
#include "Ordering.h"
#include "Staff.h"
#include "Visitor.h"
#include <vector>

using namespace std;

int main() {

    Waitor vova("Vova",3600,25);

    vova.getinf();

    Staff *Nastya = new Waitor;

    Nastya->getinf();




    return 0;
}
