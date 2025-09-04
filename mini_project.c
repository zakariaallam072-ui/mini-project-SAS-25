#include <stdio.h>

void menu() {
    printf(" 1 . pour moyenne\n");
    printf(" 2 . pour trouver les note max\n");
    printf(" 3 . pour trouver les note min\n");
    printf(" 4 . etudient réussi\n");
    printf(" 0 . pour exit \n");
    printf(" entrer votre choi : ");
    
}

float calculer_moyenne(int note[],int nomber_etudient){
    int somme =0;
    float moyenne ;
    for(int i=0; i<nomber_etudient; i++){
       somme += note[i];
       moyenne = somme/nomber_etudient;
    }
    return moyenne ;
}
int Trouver_max(int note[],int nomber_etudient){
    int max = note[0];
    for(int i=0; i<nomber_etudient; i++){
        if(max < note[i]){
           max = note[i];
        }
    }
    return max ;
}
int main() {
    int nombre ;
    do{
    printf("entrer le nomber de tableux : ");
    scanf("%d",&nombre);
    }while(nombre>31);
    int tableux_note[nombre];
    for(int i=0;i<nombre;i++){
        printf("entrer lea note %d : ",i+1);
        scanf("%d",&tableux_note[i]);
    }
    do{
        int choi;
        menu();
        scanf("%d",&choi);
        switch (choi)
        {
        case 1: float moyenne = calculer_moyenne(tableux_note,nombre);
                printf("%.2f\n",moyenne);
            break;
        case 2: int max = calculer_moyenne(tableux_note,nombre);
                printf("%.2f\n",max);
            break;
        case 3: int min = calculer_moyenne(tableux_note,nombre);
                printf("%.2f\n",min);
            break;
        case 4: 
            break;
        case 0: printf(" Merci !!");
            break;
        
        default: printf(" entrer le choi dant le menu");
            break;
        }
    }while(!0);

    return 0;
}