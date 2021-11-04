#include <stdio.h>
//引入亂數相關函式
#include <stdlib.h>
//引入時間相關函式
#include <time.h>
//引入字串相關處理函式
#include <string.h>
//身分證的組成可表為L d1 d2 d3 d4 d5 d6 d7 d8 d9
//其中L為可填入英文字母A~Z，代表不同城市。其中，各字母各自對應到10~35這26個整數，以十位數表為x1，個位數表為x2
//d1代表性別，1為男性、2為女性
//d2~d8為流水號
//d9為檢查碼
//一個正確的身分證需要符合公式 
//Y = x1+9*x2+8*d1+7*d2+6*d3+5*d4+4*d5+3*d6+2*d7+1*d8+d9
//且 Y 必須可被10整除，則才表示該身分證號碼正確無誤
int main(){
    int x1, x2,data, d1, d2, d3, d4, d5, d6, d7, d8, d9;
    char gender[10];
    char capital[1];
    printf("Type your gender(male/female): \n");
    scanf("%s", gender);
    //利用字串長度檢驗所輸入性別為男性或女性
    size_t len = strlen(gender);
    //長度為4，代表輸入male
    if(len == 4){
        d1 = 1;
    } 
    //長度為6，代表輸入female
    else if(len == 6){
        d1 = 2;
    }
    //長度不為4或6，則代表輸入格式錯誤，中止程式
    else if(len!=4 | len!=6){
        printf("Wrong format! Please type your gender(male/female) again!");
        exit(0);
    }
    //建立26個英文字母所形成的陣列，用來表示所對應的城市
    char city[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K' ,'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    //利用時間作為亂數種子，讓每一次執行都可生成不同亂數
    srand((unsigned)time(NULL));
    //取0~25其中一數，並儲存於capital[1]中
    data=(rand()%25);
    capital[1]=city[data];
    //將capital[1]所得到之英文字母換成對應之縣市代碼x1、x2
    //A=10 台北市　　　J=18 新竹縣　　　S=26 高雄縣 
    //B=11 台中市　　　K=19 苗栗縣　　　T=27 屏東縣 
    //C=12 基隆市　　　L=20 台中縣　　　U=28 花蓮縣 
    //D=13 台南市　　　M=21 南投縣　　　V=29 台東縣 
    //E=14 高雄市　　　N=22 彰化縣　　* W=32 金門縣 
    //F=15 台北縣　　* O=35 新竹市　　　X=30 澎湖縣 
    //G=16 宜蘭縣　　　P=23 雲林縣　　　Y=31 陽明山 
    //H=17 桃園縣　　　Q=24 嘉義縣　　* Z=33 連江縣 
    //*I=34 嘉義市　　 R=25 台南縣
    //在此利用if判斷x1、x2數值　
    if(capital[1]=='A')
    {
        x1=1;
        x2=0;
    }
    if(capital[1]=='B')
    {
        x1=1;
        x2=1;
    }
    if(capital[1]=='C')
    {
        x1=1;
        x2=2;
    }
    if(capital[1]=='D')
    {
        x1=1;
        x2=3;
    }
    if(capital[1]=='E')
    {
        x1=1;
        x2=4;
    }
    if(capital[1]=='F')
    {
        x1=1;
        x2=5;
    }
    if(capital[1]=='G')
    {
        x1=1;
        x2=6;
    }
    if(capital[1]=='H')
    {
        x1=1;
        x2=7;
    }
    if(capital[1]=='I')
    {
        x1=3;
        x2=4;
    }
    if(capital[1]=='J')
    {
        x1=1;
        x2=8;
    }
    if(capital[1]=='K')
    {
        x1=1;
        x2=9;
    }
    if(capital[1]=='L')
    {
        x1=2;
        x2=0;
    }
    if(capital[1]=='M')
    {
        x1=2;
        x2=1;
    }
    if(capital[1]=='N')
    {
        x1=2;
        x2=2;
    }
    if(capital[1]=='O')
    {
        x1=3;
        x2=5;
    }
    if(capital[1]=='P')
    {
        x1=2;
        x2=3;
    }
    if(capital[1]=='Q')
    {
        x1=2;
        x2=4;
    }
    if(capital[1]=='R')
    {
        x1=2;
        x2=5;
    }
    if(capital[1]=='S')
    {
        x1=2;
        x2=6;
    }
    if(capital[1]=='T')
    {
        x1=2;
        x2=7;
    }
    if(capital[1]=='U')
    {
        x1=2;
        x2=8;
    }
    if(capital[1]=='V')
    {
        x1=2;
        x2=9;
    }
    if(capital[1]=='W')
    {
        x1=3;
        x2=2;
    }
    if(capital[1]=='X')
    {
        x1=3;
        x2=0;
    }
    if(capital[1]=='Y')
    {
        x1=3;
        x2=1;
    }
    if(capital[1]=='Z')
    {
        x1=3;
        x2=3;
    }
    //利用rand()函數產生範圍在0~9之間的亂數作為身分證中間的流水號
    d2=(rand()%10);
    d3=(rand()%10);
    d4=(rand()%10);
    d5=(rand()%10);
    d6=(rand()%10);
    d7=(rand()%10);
    d8=(rand()%10);
    //利用公式反推出可使身分證號碼正確的檢查碼d9
    d9=10-(x1+9*x2+8*d1+7*d2+6*d3+5*d4+4*d5+3*d6+2*d7+1*d8)%10;
    printf("%c%d%d%d%d%d%d%d%d%d",capital[1], d1, d2, d3, d4, d5, d6, d7, d8, d9);
}