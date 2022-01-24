#include <stdio.h>

int main()
{
    int i=4, j=0, k=0;

    while(i>0){
        while(j<i){
            printf("A");
            j++;
        }
        while(k<5-i){
            printf("B");
            k++;
        }
        printf("\n");
        j=0;
        k=0;
        i--;
    }

    return 0;
}
