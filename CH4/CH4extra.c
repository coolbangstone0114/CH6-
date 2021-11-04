#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char gender;
    int d1;
    printf("type your gender(male/female): ");
    scanf("%c", &gender);
    if (gender == "male"){
        d1 = 1;
    } else{
        d1 = 2;
    }
    printf("%d", d1);
    int flownumber;
    srand((unsigned)time(NULL));
    flownumber = rand() % 100000000 + 1000000;
    printf("%d\n",flownumber);
    int d8 = flownumber%10;
    int d7 = (flownumber%100-d8)/10;
    int d6 = (flownumber%1000-d7)/100;
    int d5 = (flownumber%10000-d6)/1000;
    int d4 = (flownumber%100000-d5)/10000;
    int d3 = (flownumber%1000000-d4)/100000;
    int d2 = (flownumber%10000000-d3)/1000000;
    printf("%d %d %d %d %d %d %d", d2, d3, d4, d5, d6, d7, d8);
    return 0;
}