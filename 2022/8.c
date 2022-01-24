#include <stdio.h>

int main()
{
    int i, j;
    int num;
    int a[10];
    int cnt=0;


    scanf("%d", &num);
    for(i=0; num!=0; i++){
        a[i] = num % 2;
        num = num/2;
        cnt++;
    }

    for(i=cnt-1; i>=0; i--){
        printf("%d", a[i]);
    }

    return 0;
}
