#include <stdio.h>
#include <stdio.h>
int main (void){
    int a1, a2, a3, a4, a5;
    int b1, b2, b3, b4, b5;
    int c1, c2, c3, c4, c5;
    int d1, d2, d3, d4, d5;
    int e1, e2, e3, e4, e5;
    int Rowsums1, Rowsums2, Rowsums3, Rowsums4, Rowsums5;
    int Columnsums1, Columnsums2, Columnsums3, Columnsums4, Columnsums5;
    int Diagonalsums1, Diagonalsums2;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &b1, &b2, &b3, &b4, &b5, &c1, &c2, &c3, &c4, &c5, &d1, &d2, &d3, &d4, &d5, &e1, &e2, &e3, &e4, &e5);
    Rowsums1 = a1 + a2 + a3 + a4 + a5;
    Rowsums2 = b1 + b2 + b3 + b4 + b5;
    Rowsums3 = c1 + c2 + c3 + c4 + c5;
    Rowsums4 = d1 + d2 + d3 + d4 + d5;
    Rowsums5 = e1 + e2 + e3 + e4 + e5;
    Columnsums1 = a1 + b1 + c1 + d1 + e1;
    Columnsums2 = a2 + b2 + c2 + d2 + e2;
    Columnsums3 = a3 + b3 + c3 + d3 + e3;
    Columnsums4 = a4 + b4 + c4 + d4 + e4;
    Columnsums5 = a5 + b5 + c5 + d5 + e5;
    Diagonalsums1 = a1 + b2 + c3 + d4 + e5;
    Diagonalsums2 = e1 + d2 + c3 + b4 + a5;
    printf("%2d %2d %2d %2d %2d\n", a1, a2, a3, a4, a5);
    printf("%2d %2d %2d %2d %2d\n", b1, b2, b3, b4, b5);
    printf("%2d %2d %2d %2d %2d\n", c1, c2, c3, c4, c5);
    printf("%2d %2d %2d %2d %2d\n", d1, d2, d3, d4, d5);
    printf("%2d %2d %2d %2d %2d\n", e1, e2, e3, e4, e5);
    printf("\n");
    printf("Row sums: %d %d %d %d %d\n", Rowsums1, Rowsums2, Rowsums3, Rowsums4, Rowsums5);
    printf("Column sums: %d %d %d %d %d\n", Columnsums1, Columnsums2, Columnsums3, Columnsums4, Columnsums5);
    printf("Diagonal sums: %d %d\n", Diagonalsums1, Diagonalsums2);
}