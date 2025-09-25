
#include <stdio.h>
int main() {
    int n ;
    printf("saisir un element ",n);
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++){
        printf("entrer les element du tableau");
        scanf("%d",&tab[i],i+1);
    }
    return 0;
