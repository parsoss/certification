#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(999<num&&num<10000){
        printf("천단위의 숫자입니다");
    }
    else{
        printf("천단위의 숫자가 아닙니다.");
    }
}
