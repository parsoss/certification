#include <stdio.h>

int main()
{
    int ga, se;
    int i, j;

    printf("가로사이즈: "); scanf("%d", &ga);
    printf("세로사이즈: "); scanf("%d", &se);

    for(i=1; i<se+1; i++){
        for(j=1; j<ga+1; j++){
            printf("%d-%d  ", i, j);
        }
        printf("\n");
    }

    return 0;
}
