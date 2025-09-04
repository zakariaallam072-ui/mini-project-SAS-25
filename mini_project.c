#include <stdio.h>

void menu {
    printf(" 1 . pour moyenne");
    printf(" 2 . pour trouver les note elveé et faibl");
    printf(" 3 . etudient réussi");
    printf(" 0 . pour exit ");
    printf(" entrer votre choi : ")
    
}
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
    do{
        int choi;
        menu();
        scanf("%d",choi);
        switch (choi)
        {
        case 1: 
            break;
        case 2: 
            break;
        case 3: 
            break;
        case 0: printf(" Merci !!");
            break;
        
        default: printf(" entrer le choi dant le menu");
            break;
        }
    }while(!=0);

    return 0;
}