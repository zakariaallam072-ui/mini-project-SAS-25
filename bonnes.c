// Online C compiler to run C program online
#include <stdio.h>
void moyenne_etudiant(float note[][3] , int nomber_etudient){
     float somme_etudient , moyenne;
     somme_etudient =0;
    for(int i=0;i<nomber_etudient;i++){
        for(int j=0;j<3;j++){
      somme_etudient +=  note[i][j];
        }
     printf(" moyenne de etudient nombre %d = %.2f \n",i+1,somme_etudient/nomber_etudient);
     somme_etudient =0;
    }

}

int main() {
    int number_etudient;
    printf("entrer le nombre détudient : ");
    scanf("%d",&number_etudient);
    float tableux_des_note[number_etudient][3];
    for(int i=0;i<number_etudient;i++){
        for(int j=0;j<3;j++){
            printf("entrer le note %d de matier %d : ",i+1,j+1);
            scanf("%f",&tableux_des_note[i][j]);
        }
    }

moyenne_etudiant(tableux_des_note,number_etudient);
    
    return 0;
}