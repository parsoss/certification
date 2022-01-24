#include <stdio.h>

int main()
{
    int a, b;
    int i;
    int gop;

    scanf("%d %d", &a, &b);
    gop = a*b;

    if(a<b){
        printf("첫 번째 수: %d\n", a);
        printf("두 번째 수: %d\n", b);
        for(i=a+1; i<b; i++){
            gop = gop*i;
        }
    }
    else{
        printf("첫 번째 수: %d\n", a);
        printf("두 번째 수: %d\n", b);
        for(i=b+1; i<a; i++){
            gop = gop*i;
        }
    }



    printf("%d", gop);
    return 0;
}
