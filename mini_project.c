#include <stdio.h>

void menu() {
    printf(" 1 . pour moyenne\n");
    printf(" 2 . pour trouver les note max\n");
    printf(" 3 . pour trouver les note min\n");
    printf(" 4 . etudient réussi\n");
    printf(" 0 . pour exit \n");
    printf(" entrer votre choi : ");
    
}

float calculer_moyenne(float note[],int nomber_etudient){
    float somme =0;
    float moyenne ;
    for(int i=0; i<nomber_etudient; i++){
       somme += note[i];
       moyenne = somme/nomber_etudient;
    }
    return moyenne ;
}

int Trouver_max(float note[],int nomber_etudient){
    float max = note[0];
    for(int i=1; i<nomber_etudient; i++){
        if(max < note[i]){
           max = note[i];
        }
    }
    return max ;
}

int Trouver_min(float note[],int nomber_etudient){
    float min = note[0];
    for(int i=0; i<nomber_etudient; i++){
        if(min > note[i]){
           min = note[i];
        }
    }
    return min ;
}

int compter_reussiter_v(float note[],int nomber_etudient){
    int compt_valid = 0;
    for(int i=0; i<nomber_etudient; i++){
        if(note[i] >= 10){
           compt_valid++;
        }
    }
    return compt_valid ;
}

int compter_reussiter_non_v(float note[],int nomber_etudient){
    int compt_non_valid = 0;
    for(int i=0; i<nomber_etudient; i++){
        if(note[i] < 10){
           compt_non_valid++;
        }
    }
    return compt_non_valid ;
}

int main() {
    int nombre ;
    do{
    printf("entrer le nomber de tableux : ");
    scanf("%d",&nombre);
    }while(nombre>31 || nombre<=0);
    float tableux_note[nombre];
    for(int i=0;i<nombre;i++){
        printf("entrer lea note %d : ",i+1);
        scanf("%f",&tableux_note[i]);
    }
    do{
        int choi;
        menu();
        scanf("%d",&choi);
        switch (choi) {
        case 1: float moyenne = calculer_moyenne(tableux_note,nombre);
                printf("%.2f\n",moyenne);
            break;
        case 2: float max = Trouver_max(tableux_note,nombre);
                printf("%.2f\n",max);
            break;
        case 3: float min = Trouver_min(tableux_note,nombre);
                printf("%.2f\n",min);
            break;
        case 4: int valid = compter_reussiter_v(tableux_note,nombre);
                printf("%d\n",valid);
                
                int non_valid = compter_reussiter_non_v(tableux_note,nombre);
                printf("%d\n",non_valid);
            break;
        case 0: printf(" Merci !!");
            break;
        
        default: printf(" entrer le choi dant le menu");
            break;
        }
    }while(!0);

    return 0;
}