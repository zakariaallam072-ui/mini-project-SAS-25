#include <stdio.h>

int main() {
    int nombre ;
    do{
    printf("entrer le nomber de tableux : ");
    scanf("%d",&nombre);
    }while(nombre>31);
    int tableux[nombre];
    for(int i=0;i<nombre;i++){
        printf("entrer lea note %d : ",i+1);
        scanf("%d",&tableux[i]);
    }

    return 0;
}