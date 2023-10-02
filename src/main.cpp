#include <iostream>
#include "sculptor.h"


int main() {
    
    Sculptor *s1 = new Sculptor(20, 20, 20);
    s1->setColor(0, 0, 0, 1);
    // cogumelo Mario
    for (int i=6; i<14; i++) {
        s1->putVoxel(i, 0, 0);
    }
    
    for (int i=5; i<15; i++) {
        if (i == 5 || i==14) {
            s1->putVoxel(i, 1, 0);
        }
    }

    for (int i=4; i<16; i++) {
        if (i == 4 || i==15) {
            s1->putVoxel(i, 2, 0);
        }
    }

    for (int i=4; i<16; i++) {
        if (i == 4 || i==15 || i == 8 || i == 11) {
            s1->putVoxel(i, 3, 0);
        }
    }

    for (int i=3; i<17; i++) {
        if (i == 3 || i==4 || i == 5 || i == 8 || i == 11 || i == 14 || i == 15 || i == 16) {
            s1->putVoxel(i, 4, 0);
        }
    }

    for (int i=2; i<18; i++) {
        if (i == 2 || i == 17) {
            s1->putVoxel(i, 5, 0);
            s1->putVoxel(i, 6, 0);
            s1->putVoxel(i, 7, 0);
            s1->putVoxel(i, 8, 0);
            s1->putVoxel(i, 9, 0);
            s1->putVoxel(i, 10, 0);
        }
    }

    for (int i=3; i<17; i++){
        if (i == 3 || i == 16) {
            s1->putVoxel(i, 11, 0);
            s1->putVoxel(i, 12, 0);
        }
    }
    
    for (int i=4; i<16; i++){
        if (i == 4 || i == 15) {
            s1->putVoxel(i, 12, 0);
        }
    }

    for (int i=5; i<15; i++){
        if (i == 5 || i == 6 || i == 14 || i == 13) {
            s1->putVoxel(i, 13, 0);
        }
    }

    for (int i=7; i<13; i++){
        s1->putVoxel(i, 14, 0);
    }

    for (int i=6; i<14; i++){
        s1->putVoxel(i, 5, 0);
    }
    
    

    s1->writeOFF("./teste.off");
    delete s1;

    return 0;

}