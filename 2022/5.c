#include <stdio.h>

int main()
{
    int a[10];
    int i, j;
    int tmp;
    int sum=0;

    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<9; i++){
        for(j=0; j<10-i-1; j++){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    for(i=1; i<9; i++){
        sum += a[i];
    }

    printf("%.2f", (float)sum/8);

    return 0;
}
