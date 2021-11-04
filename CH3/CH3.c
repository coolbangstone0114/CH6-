#include <stdio.h>
int main (void){
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;
    int c1, c2, c3, c4;
    int d1, d2, d3, d4;
    int Rowsums1, Rowsums2, Rowsums3, Rowsums4;
    int Columnsums1, Columnsums2, Columnsums3, Columnsums4;
    int Diagonalsums1, Diagonalsums2;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);
    Rowsums1 = a1 + a2 + a3 + a4;
    Rowsums2 = b1 + b2 + b3 + b4;
    Rowsums3 = c1 + c2 + c3 + c4;
    Rowsums4 = d1 + d2 + d3 + d4;
    Columnsums1 = a1 + b1 + c1 + d1;
    Columnsums2 = a2 + b2 + c2 + d2;
    Columnsums3 = a3 + b3 + c3 + d3;
    Columnsums4 = a4 + b4 + c4 + d4;
    Diagonalsums1 = a1 + b2 + c3 + d4;
    Diagonalsums2 = a4 + b3 + c2 + d1;
    printf("%2d %2d %2d %2d\n", a1, a2, a3, a4);
    printf("%2d %2d %2d %2d\n", b1, b2, b3, b4);
    printf("%2d %2d %2d %2d\n", c1, c2, c3, c4);
    printf("%2d %2d %2d %2d\n", d1, d2, d3, d4);
    printf("\n");
    printf("Row sums: %d %d %d %d\n", Rowsums1, Rowsums2, Rowsums3, Rowsums4);
    printf("Column sums: %d %d %d %d\n", Columnsums1, Columnsums2, Columnsums3, Columnsums4);
    printf("Diagonal sums: %d %d\n", Diagonalsums1, Diagonalsums2);
}