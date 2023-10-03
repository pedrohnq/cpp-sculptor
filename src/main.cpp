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
            s1->putVoxel(i, 13, 0);
        }
    }

    for (int i=5; i<15; i++){
        if (i == 5 || i == 6 || i == 14 || i == 13) {
            s1->putVoxel(i, 14, 0);
        }
    }

    for (int i=7; i<13; i++){
        s1->putVoxel(i, 15, 0);
    }

    for (int i=6; i<14; i++){
        s1->putVoxel(i, 5, 0);
    }

    s1->setColor(1, 0, 0, 1);
    
    int r5[] = {4, 5, 14, 15, 16};
    int r6[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 16};
    int r7[] = {5, 6, 10, 11, 12};
    int r8[] = {4, 5, 11, 12};
    int r9[] = {3, 4, 5, 11, 12, 13, 16};
    int r10[] = {3, 4, 5, 11, 12, 13, 14, 15, 16};
    int r11[] = {5, 6, 10, 11, 12};
    int r12[] = {6, 7, 8, 9, 10, 11};
    int r13[] = {7, 8, 9, 10};


    for (int i=0; i<5; i++) {
        s1->putVoxel(r5[i], 5, 0);
    }

    for (int i=0; i<10; i++) {
        s1->putVoxel(r6[i], 6, 0);
    }

    for (int i=0; i<5; i++) {
        s1->putVoxel(r7[i], 7, 0);
    }

    for (int i=0; i<4; i++) {
        s1->putVoxel(r8[i], 8, 0);
    }

    for (int i=0; i<7; i++) {
        s1->putVoxel(r9[i], 9, 0);
    }

    for (int i=0; i<9; i++) {
        s1->putVoxel(r10[i], 10, 0);
    }

    for (int i=0; i<5; i++) {
        s1->putVoxel(r11[i], 11, 0);
    }

    for (int i=0; i<6; i++) {
        s1->putVoxel(r12[i], 12, 0);
    }

    for (int i=0; i<4; i++) {
        s1->putVoxel(r13[i], 13, 0);
        s1->putVoxel(r13[i], 14, 0);
    }


    s1->setColor(1, 1, 1, 1);
    int r1[] = {6, 7, 8, 9, 10, 11, 12, 13};
    int r2[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int r3[] = {5, 6, 7, 9, 10, 12, 13, 14};
    int r4[] = {6, 7, 9, 10, 12, 13};
    int rr5[] = {3};
    int rr6[] = {3, 4, 14, 15};
    int rr7[] = {3, 4, 7, 8, 9, 13, 14, 15, 16};
    int rr8[] = {3, 6, 7, 8, 9, 10, 13, 14, 15, 16};
    int rr9[] = {6, 7, 8, 9, 10, 14, 15};
    int rr10[] = {6, 7, 8, 9, 10};
    int rr11[] = {4, 7, 8, 9, 13, 14, 15};
    int rr12[] = {4, 5, 12, 13, 14, 15};
    int rr13[] = {5, 6, 11, 12, 13, 14};
    int rr14[] = {11, 12};

    for (int i=0; i<8; i++) {
        s1->putVoxel(r1[i], 1, 0);
    }

    for (int i=0; i<10; i++) {
        s1->putVoxel(r2[i], 2, 0);
    }

    for (int i=0; i<8; i++) {
        s1->putVoxel(r3[i], 3, 0);
    }

    for (int i=0; i<6; i++) {
        s1->putVoxel(r4[i], 4, 0);
    }

    for (int i=0; i<1; i++) {
        s1->putVoxel(rr5[i], 5, 0);
    }

    for (int i=0; i<4; i++) {
        s1->putVoxel(rr6[i], 6, 0);
    }

    for (int i=0; i<9; i++) {
        s1->putVoxel(rr7[i], 7, 0);
    }

    for (int i=0; i<10; i++) {
        s1->putVoxel(rr8[i], 8, 0);
    }

    for (int i=0; i<7; i++) {
        s1->putVoxel(rr9[i], 9, 0);
    }

    for (int i=0; i<5; i++) {
        s1->putVoxel(rr10[i], 10, 0);
    }

    for (int i=0; i<7; i++) {
        s1->putVoxel(rr11[i], 11, 0);
    }

    for (int i=0; i<6; i++) {
        s1->putVoxel(rr12[i], 12, 0);
    }

    for (int i=0; i<6; i++) {
        s1->putVoxel(rr13[i], 13, 0);
    }

    for (int i=0; i<2; i++) {
        s1->putVoxel(rr14[i], 14, 0);
    }

    


    

    s1->writeOFF("./teste.off");
    delete s1;

    return 0;

}