#include <stdio.h>

int main()
{
    int a;
    int i;
    int num;

    scanf("%d", &num);

    if(2<=num&&num<=9){
        for(a=1; a<=9; a++){
            printf("%d * %d = ", num, a);
            for(i=0; i<num*a; i++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
