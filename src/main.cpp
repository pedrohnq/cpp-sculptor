#include <iostream>
#include "sculptor.h"


int main() {
    
    Sculptor *s1 = new Sculptor(100, 100, 100);

    s1->writeOFF("./draw.off");
    delete s1;

    return 0;

}