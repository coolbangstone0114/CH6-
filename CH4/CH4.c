#include <stdio.h>
int main(){
    int stpe1, step2, step3, step4, step5, step6;
    int a, b, c, d, e, f, g, h, i, j, k, l,m;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m );
    /*
    printf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%d\n", a, b, c, d, e, f, g, h, i, j, k, l,m);
    */
    stpe1 = b + d + f + h + j + l;
    step2 = a + c + e + g + i + k;
    step3 = stpe1*3 + step2;
    step4 = step3-1;
    step5 = step4%10;
    step6 = 9 - step5;
    printf("Check digit: %d", step6);
}
