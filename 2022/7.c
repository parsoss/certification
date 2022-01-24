#include <stdio.h>

int main()
{
    int i, j, k;
    int a[10];
    int tmp;
    int ye;

    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<9; i++){
        ye = 1;
        for(j=0; j<10-i-1; j++){
            if(a[j]<a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                ye = 0;
            }
            else if(a[j]>=a[j+1]){
                ye = 1;
            }
        }
        if(ye == 1) break;

        for(k=0; k<10; k++){
            printf("%d ", a[k]);
        }
        printf("\n");
    }

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

//1 4 7 2 3 5 9 2 8 6
