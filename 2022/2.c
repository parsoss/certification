#include <stdio.h>

int main()
{
    int a, b;
    int i;
    int gop;

    scanf("%d %d", &a, &b);
    gop = a*b;

    if(a<b){
        printf("first number: %d\n", a);
        printf("second number: %d\n", b);
        for(i=a+1; i<b; i++){
            gop = gop*i;
        }
    }
    else{
        printf("first number: %d\n", a);
        printf("second number: %d\n", b);
        for(i=b+1; i<a; i++){
            gop = gop*i;
        }
    }



    printf("%d", gop);
    return 0;
}
