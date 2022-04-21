#include <stdio.h>
#define MAX 50
int main() {
    int x,y,i,j,matris[MAX][MAX]={0},degerler[MAX]={0};
    printf("Matris boyutu giriniz(X,Y):\n");
    scanf("%d,%d",&x, &y);
    for (i = 0; i <x ; i++) {
        for (j = 0; j <y ; j++) {
            printf("Matris elemanlarini giriniz %d,%d:\n",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    for (i = 0; i <x ; i++) {
        for (j = 0; j <y ; j++) {
            degerler[matris[i][j]]++;
        }
    }
    printf("unique degerler: ");
    for (int k = 0; k < MAX; ++k) {
       if(degerler[k]==1)
           printf("%d ",k);
    }
    return 0;
}
