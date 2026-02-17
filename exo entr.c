
#include <stdio.h>
int main(){
    int n,i,somme;
    do{
        printf("saisir un nombre positif");
        scanf("%d", &n);
    }while(n<0);
    for(i=1;i<=n-1;i++);{
        somme=somme+1;


    }

    printf("%d est triangulaire\ n",n);




    return 0;
}

