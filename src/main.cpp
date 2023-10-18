#include <iostream>
#include "sculptor.h"

const int GRID_SIZE = 100;

void placeVoxelsFromArray(int voxelsInArray[], int quantityOfVoxels, Sculptor *s1, int y, int z)
{
    for (int i = 0; i < quantityOfVoxels; i++)
    {
        s1->putVoxel(voxelsInArray[i], y, z);
    }
}

int main()
{
    Sculptor *s1 = new Sculptor(GRID_SIZE, GRID_SIZE, GRID_SIZE);

    int groundDistance = 50;

    // Mario Background Ground
    for (int i = 0 ; i <= 54; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((j % 3 == 0 && j != 1) || i == 0 || i == 54) {
                s1->setColor(0, 0, 0, 1);
                s1->putVoxel(i, j, 0);
            }
        }
    }

    // Mario Wiggler
    // ROW - 0
    s1->setColor(0, 0, 0, 1);
    int blackColorRow0[] = {24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    placeVoxelsFromArray(blackColorRow0,
                         (sizeof(blackColorRow0) / sizeof(blackColorRow0[0])),
                         s1,
                         0 + groundDistance,
                         0);
    // ROW - 1
    int blackColorRow1[] = {1, 2, 3, 4, 17, 18, 19, 20, 24, 33};
    int redColorRow1[] = {25, 26, 27, 28, 29, 30};
    int yellowColorRow1[] = {31, 32};
    placeVoxelsFromArray(blackColorRow1,
                         (sizeof(blackColorRow1) / sizeof(blackColorRow1[0])),
                         s1,
                         1 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow1,
                         (sizeof(redColorRow1) / sizeof(redColorRow1[0])),
                         s1,
                         1 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow1,
                         (sizeof(yellowColorRow1) / sizeof(yellowColorRow1[0])),
                         s1,
                         1 + groundDistance,
                         0);

    // ROW - 2
    s1->setColor(0, 0, 0, 1);
    int blackColorRow2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 16, 17, 18, 19, 20, 21, 22, 23, 24, 32, 33};
    int redColorRow2[] = {25, 26, 27, 28};
    int yellowColorRow2[] = {29, 30};
    int whiteColorRow2[] = {31};
    placeVoxelsFromArray(blackColorRow2,
                         (sizeof(blackColorRow2) / sizeof(blackColorRow2[0])),
                         s1,
                         2 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow2,
                         (sizeof(redColorRow2) / sizeof(redColorRow2[0])),
                         s1,
                         2 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow2,
                         (sizeof(yellowColorRow2) / sizeof(yellowColorRow2[0])),
                         s1,
                         2 + groundDistance,
                         0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow2,
                         (sizeof(whiteColorRow2) / sizeof(whiteColorRow2[0])),
                         s1,
                         2 + groundDistance,
                         0);

    // ROW - 3
    s1->setColor(0, 0, 0, 1);
    int blackColorRow3[] = {0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 19, 20, 21, 22, 23, 24, 25, 30, 31, 34, 35, 36, 37, 38, 39, 40, 41};
    int redColorRow3[] = {1, 2, 17, 18, 26, 27, 28};
    int yellowColorRow3[] = {29};
    int orangeColorRow3[] = {32, 33};
    placeVoxelsFromArray(blackColorRow3,
                         (sizeof(blackColorRow3) / sizeof(blackColorRow3[0])),
                         s1,
                         3 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow3,
                         (sizeof(redColorRow3) / sizeof(redColorRow3[0])),
                         s1,
                         3 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow3,
                         (sizeof(yellowColorRow3) / sizeof(yellowColorRow3[0])),
                         s1,
                         3 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow3,
                         (sizeof(orangeColorRow3) / sizeof(orangeColorRow3[0])),
                         s1,
                         3 + groundDistance,
                         0);

    // ROW - 4
    s1->setColor(0, 0, 0, 1);
    int blackColorRow4[] = {0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 25, 26, 27, 28, 29, 30, 35, 36, 41, 42, 43};
    int redColorRow4[] = {1, 2, 3, 4, 5, 17, 18, 19, 20, 21, 26, 27, 28};
    int yellowColorRow4[] = {6, 7, 22, 23, 24};
    int orangeColorRow4[] = {31, 32, 33, 34, 37, 38, 39, 40};
    placeVoxelsFromArray(blackColorRow4,
                         (sizeof(blackColorRow4) / sizeof(blackColorRow4[0])),
                         s1,
                         4 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow4,
                         (sizeof(redColorRow4) / sizeof(redColorRow4[0])),
                         s1,
                         4 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow4,
                         (sizeof(yellowColorRow4) / sizeof(yellowColorRow4[0])),
                         s1,
                         4 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow4,
                         (sizeof(orangeColorRow4) / sizeof(orangeColorRow4[0])),
                         s1,
                         4 + groundDistance,
                         0);

    // ROW - 5
    s1->setColor(0, 0, 0, 1);
    int blackColorRow5[] = {0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 24, 25, 26, 30, 39, 40, 44, 45};
    int redColorRow5[] = {1, 2, 3, 4, 17, 18, 19, 20, 27, 28, 41, 42, 43};
    int yellowColorRow5[] = {5, 6, 21, 22, 31, 32, 33};
    int whiteColorRow5[] = {7, 23};
    int orangeColorRow5[] = {27, 28, 29, 34, 35, 36, 37, 38};
    placeVoxelsFromArray(blackColorRow5,
                         (sizeof(blackColorRow5) / sizeof(blackColorRow5[0])),
                         s1,
                         5 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow5,
                         (sizeof(redColorRow5) / sizeof(redColorRow5[0])),
                         s1,
                         5 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow5,
                         (sizeof(yellowColorRow5) / sizeof(yellowColorRow5[0])),
                         s1,
                         5 + groundDistance,
                         0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow5,
                         (sizeof(whiteColorRow5) / sizeof(whiteColorRow5[0])),
                         s1,
                         5 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow5,
                         (sizeof(orangeColorRow5) / sizeof(orangeColorRow5[0])),
                         s1,
                         5 + groundDistance,
                         0);
    // ROW - 6
    s1->setColor(0, 0, 0, 1);
    int blackColorRow6[] = {1, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 26, 30, 33, 38, 46};
    int redColorRow6[] = {2, 3, 9, 18, 19, 31, 39, 40, 41, 42, 43, 44, 45};
    int yellowColorRow6[] = {4, 20, 27, 28, 29, 32};
    int orangeColorRow6[] = {25, 34, 35, 36, 37};
    placeVoxelsFromArray(blackColorRow6,
                         (sizeof(blackColorRow6) / sizeof(blackColorRow6[0])),
                         s1,
                         6 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow6,
                         (sizeof(redColorRow6) / sizeof(redColorRow6[0])),
                         s1,
                         6 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow6,
                         (sizeof(yellowColorRow6) / sizeof(yellowColorRow6[0])),
                         s1,
                         6 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow6,
                         (sizeof(orangeColorRow6) / sizeof(orangeColorRow6[0])),
                         s1,
                         6 + groundDistance,
                         0);

    // ROW - 7
    s1->setColor(0, 0, 0, 1);
    int blackColorRow7[] = {0, 1, 2, 3, 4, 5, 8, 12, 13, 14, 16, 17, 18, 19, 20, 21, 24, 27, 30, 33, 37, 47};
    int yellowColorRow7[] = {6, 7, 15, 22, 23, 26, 28, 29, 36};
    int redColorRow7[] = {9, 10, 11, 32, 34, 38, 39, 40, 41, 42, 43, 46};
    int orangeColorRow7[] = {25, 31, 35, 44, 45};
    placeVoxelsFromArray(blackColorRow7,
                         (sizeof(blackColorRow7) / sizeof(blackColorRow7[0])),
                         s1,
                         7 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow7,
                         (sizeof(yellowColorRow7) / sizeof(yellowColorRow7[0])),
                         s1,
                         7 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow7,
                         (sizeof(redColorRow7) / sizeof(redColorRow7[0])),
                         s1,
                         7 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow7,
                         (sizeof(orangeColorRow7) / sizeof(orangeColorRow7[0])),
                         s1,
                         7 + groundDistance,
                         0);

    // ROW - 8
    s1->setColor(0, 0, 0, 1);
    int blackColorRow8[] = {0, 1, 6, 8, 9, 10, 16, 17, 22, 24, 28, 29, 32, 37, 47};
    int yellowColorRow8[] = {3, 4, 5, 11, 12, 13, 14, 19, 20, 21, 25, 26, 27, 36};
    int redColorRow8[] = {7, 23, 33, 34, 35, 38, 39, 40, 41};
    int orangeColorRow8[] = {2, 18, 30, 31, 42, 43, 44, 45, 46};
    int whiteColorRow8[] = {15};
    placeVoxelsFromArray(blackColorRow8,
                         (sizeof(blackColorRow8) / sizeof(blackColorRow8[0])),
                         s1,
                         8 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow8,
                         (sizeof(yellowColorRow8) / sizeof(yellowColorRow8[0])),
                         s1,
                         8 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow8,
                         (sizeof(redColorRow8) / sizeof(redColorRow8[0])),
                         s1,
                         8 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow8,
                         (sizeof(orangeColorRow8) / sizeof(orangeColorRow8[0])),
                         s1,
                         8 + groundDistance,
                         0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow8,
                         (sizeof(whiteColorRow8) / sizeof(whiteColorRow8[0])),
                         s1,
                         8 + groundDistance,
                         0);

    // ROW - 9
    s1->setColor(0, 0, 0, 1);
    int blackColorRow9[] = {0, 6, 8, 9, 11, 12, 13, 14, 15, 16, 18, 22, 25, 32, 38, 47};
    int yellowColorRow9[] = {2, 3, 4, 5, 7, 10, 19, 20, 21, 26, 27, 36, 37};
    int redColorRow9[] = {24, 28, 33, 34, 39, 40};
    int orangeColorRow9[] = {1, 17, 23, 29, 30, 31, 35, 41, 42, 43, 44, 46};
    int whiteColorRow9[] = {45};
    placeVoxelsFromArray(blackColorRow9,
                         (sizeof(blackColorRow9) / sizeof(blackColorRow9[0])),
                         s1,
                         9 + groundDistance,
                         0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow9,
                         (sizeof(yellowColorRow9) / sizeof(yellowColorRow9[0])),
                         s1,
                         9 + groundDistance,
                         0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow9,
                         (sizeof(redColorRow9) / sizeof(redColorRow9[0])),
                         s1,
                         9 + groundDistance,
                         0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow9,
                         (sizeof(orangeColorRow9) / sizeof(orangeColorRow9[0])),
                         s1,
                         9 + groundDistance,
                         0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow9,
                         (sizeof(whiteColorRow9) / sizeof(whiteColorRow9[0])),
                         s1,
                         9 + groundDistance,
                         0);

    // ROW - 10
    s1->setColor(0, 0, 0, 1);
    int blackColorRow10[] = {0,3,4,5,8,10,14, 16,19,20,21, 26, 32, 39, 40,46};
    int yellowColorRow10[] = {1, 2,6,7,9,11,12,13, 15, 17, 18,25, 27, 28, 36, 37,38};
    int redColorRow10[] = {24, 29, 30, 31, 33, 34};
    int orangeColorRow10[] = {22,23, 35,41,42,45};
    int whiteColorRow10[] = {43, 44};
    placeVoxelsFromArray(blackColorRow10,
                        (sizeof(blackColorRow10) / sizeof(blackColorRow10[0])),
                        s1,
                        10 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow10,
                        (sizeof(yellowColorRow10) / sizeof(yellowColorRow10[0])),
                        s1,
                        10 + groundDistance,
                        0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow10,
                        (sizeof(redColorRow10) / sizeof(redColorRow10[0])),
                        s1,
                        10 + groundDistance,
                        0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow10,
                        (sizeof(orangeColorRow10) / sizeof(orangeColorRow10[0])),
                        s1,
                        10 + groundDistance,
                        0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow10,
                        (sizeof(whiteColorRow10) / sizeof(whiteColorRow10[0])),
                        s1,
                        10 + groundDistance,
                        0);

    // ROW - 11
    s1->setColor(0, 0, 0, 1);
    int blackColorRow11[] = {1, 8,9,11,12,13,17,27,28,32,41,42,43,44,45,46};
    int yellowColorRow11[] = {2, 3, 5, 6,7, 10,14,15,18,19,25,26,29,30,31,36,37,38,39,40};
    int redColorRow11[] = {4,16,20,24,33};
    int orangeColorRow11[] = {21,22,23,34,35};
    placeVoxelsFromArray(blackColorRow11,
                        (sizeof(blackColorRow11) / sizeof(blackColorRow11[0])),
                        s1,
                        11 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow11,
                        (sizeof(yellowColorRow11) / sizeof(yellowColorRow11[0])),
                        s1,
                        11 + groundDistance,
                        0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow11,
                        (sizeof(redColorRow11) / sizeof(redColorRow11[0])),
                        s1,
                        11 + groundDistance,
                        0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow11,
                        (sizeof(orangeColorRow11) / sizeof(orangeColorRow11[0])),
                        s1,
                        11 + groundDistance,
                        0);

    // ROW - 12
    s1->setColor(0, 0, 0, 1);
    int blackColorRow12[] = {2,9,18,29,30,31,32,33,45};
    int yellowColorRow12[] = {3,4,8,10,11,13,14,15,17,19,20,24,25,26,27,28,35,36,37,38,39,40,41,42,43,44};
    int redColorRow12[] = {5,6,7,12,16,21,22,23};
    int orangeColorRow12[] = {34};
    placeVoxelsFromArray(blackColorRow12,
                        (sizeof(blackColorRow12) / sizeof(blackColorRow12[0])),
                        s1,
                        12 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow12,
                        (sizeof(yellowColorRow12) / sizeof(yellowColorRow12[0])),
                        s1,
                        12 + groundDistance,
                        0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow12,
                        (sizeof(redColorRow12) / sizeof(redColorRow12[0])),
                        s1,
                        12 + groundDistance,
                        0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow12,
                        (sizeof(orangeColorRow12) / sizeof(orangeColorRow12[0])),
                        s1,
                        12 + groundDistance,
                        0);

    // ROW - 13
    s1->setColor(0, 0, 0, 1);
    int blackColorRow13[] = {3,4,10,19,20,27,28,33,39,41,45};
    int yellowColorRow13[] = {5,6,7,11,12,16,17,18,21,22,23,34,35,36,37,38,40,42,43,44};
    int redColorRow13[] = {13,14,15};
    int whiteColorRow13[] = {8,9,24,25,26};
    placeVoxelsFromArray(blackColorRow13,
                        (sizeof(blackColorRow13) / sizeof(blackColorRow13[0])),
                        s1,
                        13 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow13,
                        (sizeof(yellowColorRow13) / sizeof(yellowColorRow13[0])),
                        s1,
                        13 + groundDistance,
                        0);
    s1->setColor(1, 0, 0, 1);
    placeVoxelsFromArray(redColorRow13,
                        (sizeof(redColorRow13) / sizeof(redColorRow13[0])),
                        s1,
                        13 + groundDistance,
                        0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow13,
                        (sizeof(whiteColorRow13) / sizeof(whiteColorRow13[0])),
                        s1,
                        13 + groundDistance,
                        0);

    // ROW - 14
    s1->setColor(0, 0, 0, 1);
    int blackColorRow14[] = {5,6,7,8,9,10,11,12,19,20,21,22,23,24,25,26,34,39,41,44};
    int yellowColorRow14[] = {13,14,15,35,36,37,38,40,42};
    int whiteColorRow14[] = {16,17,18,43};
    placeVoxelsFromArray(blackColorRow14,
                        (sizeof(blackColorRow14) / sizeof(blackColorRow14[0])),
                        s1,
                        14 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow14,
                        (sizeof(yellowColorRow14) / sizeof(yellowColorRow14[0])),
                        s1,
                        14 + groundDistance,
                        0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow14,
                        (sizeof(whiteColorRow14) / sizeof(whiteColorRow14[0])),
                        s1,
                        14 + groundDistance,
                        0);

    // ROW - 15
    s1->setColor(0, 0, 0, 1);
    int blackColorRow15[] = {13,14,15,16,17,18,35,36,42,43};
    int yellowColorRow15[] = {37,38,39};
    int whiteColorRow15[] = {40,41};
    placeVoxelsFromArray(blackColorRow15,
                        (sizeof(blackColorRow15) / sizeof(blackColorRow15[0])),
                        s1,
                        15 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow15,
                        (sizeof(yellowColorRow15) / sizeof(yellowColorRow15[0])),
                        s1,
                        15 + groundDistance,
                        0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow15,
                        (sizeof(whiteColorRow15) / sizeof(whiteColorRow15[0])),
                        s1,
                        15 + groundDistance,
                        0);

    // ROW - 16
    s1->setColor(0, 0, 0, 1);
    int blackColorRow16[] = {37,38,39,40,41};
    placeVoxelsFromArray(blackColorRow16,
                        (sizeof(blackColorRow16) / sizeof(blackColorRow16[0])),
                        s1,
                        16 + groundDistance,
                        0);

    // ROW - 17
    s1->setColor(0.3, 1, 0.3, 1);
    int greenColorRow17[] = {34,35,36,37,38,39};
    placeVoxelsFromArray(greenColorRow17,
                        (sizeof(greenColorRow17) / sizeof(greenColorRow17[0])),
                        s1,
                        17 + groundDistance,
                        0);

    // ROW - 18
    s1->setColor(0.3, 1, 0.3, 1);
    int greenColorRow18[] = {33,34,36,37,39, 40};
    placeVoxelsFromArray(greenColorRow18,
                        (sizeof(greenColorRow18) / sizeof(greenColorRow18[0])),
                        s1,
                        18 + groundDistance,
                        0);

    // ROW - 19
    s1->setColor(0.3, 1, 0.3, 1);
    int greenColorRow19[] = {37, 40};
    int whiteColorRow19[] = {35, 36};
    placeVoxelsFromArray(greenColorRow19,
                        (sizeof(greenColorRow19) / sizeof(greenColorRow19[0])),
                        s1,
                        19 + groundDistance,
                        0);
    s1->setColor(1, 1, 1, 1);
    placeVoxelsFromArray(whiteColorRow19,
                        (sizeof(whiteColorRow19) / sizeof(whiteColorRow19[0])),
                        s1,
                        19 + groundDistance,
                        0);

    // ROW - 20
    s1->setColor(1, 1, 1, 1);
    int whiteColorRow20[] = {35, 36};
    placeVoxelsFromArray(whiteColorRow20,
                        (sizeof(whiteColorRow20) / sizeof(whiteColorRow20[0])),
                        s1,
                        20 + groundDistance,
                        0);

    // ROW - 21
    s1->setColor(1, 1, 1, 1);
    int whiteColorRow21[] = {33, 34, 37, 38};
    int yellowColorRow21[] = {35, 36};
    placeVoxelsFromArray(whiteColorRow21,
                        (sizeof(whiteColorRow21) / sizeof(whiteColorRow21[0])),
                        s1,
                        21 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow21,
                        (sizeof(yellowColorRow21) / sizeof(yellowColorRow21[0])),
                        s1,
                        21 + groundDistance,
                        0);

    // ROW - 22
    s1->setColor(1, 1, 1, 1);
    int whiteColorRow22[] = {33, 34, 37, 38};
    int orangeColorRow22[] = {35};
    int yellowColorRow22[] = {36};
    placeVoxelsFromArray(whiteColorRow22,
                        (sizeof(whiteColorRow22) / sizeof(whiteColorRow22[0])),
                        s1,
                        22 + groundDistance,
                        0);
    s1->setColor(1, 0.6, 0, 1);
    placeVoxelsFromArray(orangeColorRow22,
                        (sizeof(orangeColorRow22) / sizeof(orangeColorRow22[0])),
                        s1,
                        22 + groundDistance,
                        0);
    s1->setColor(1, 1, 0, 1);
    placeVoxelsFromArray(yellowColorRow22,
                        (sizeof(yellowColorRow22) / sizeof(yellowColorRow22[0])),
                        s1,
                        22 + groundDistance,
                        0);


    // ROW - 23
    s1->setColor(1, 1, 1, 1);
    int whiteColorRow23[] = {35, 36};
    placeVoxelsFromArray(whiteColorRow23,
                        (sizeof(whiteColorRow23) / sizeof(whiteColorRow23[0])),
                        s1,
                        23 + groundDistance,
                        0);

    // ROW - 24
    s1->setColor(1, 1, 1, 1);
    int whiteColorRow24[] = {35, 36};
    placeVoxelsFromArray(whiteColorRow24,
                        (sizeof(whiteColorRow24) / sizeof(whiteColorRow24[0])),
                        s1,
                        24 + groundDistance,
                        0);

    s1->writeOFF("./draw.off");
    delete s1;

    return 0;
}
