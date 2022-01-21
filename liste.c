#include<stdio.h>
#include<stdlib.h>
typedef struct cell {
    int data;
    struct cell* next;
}cellule;

cellule* creerliste(){
    cellule* tete;
    tete=NULL;
    return tete;
}
cellule* ajout(cellule* tete, int x){
    
}
void affiche(cellule* tete){
    cellule* p;
    if (tete==NULL) printf("la liste est vide \n");
    else {
        p=tete;
        while(p!=NULL){
            printf("%d \n",p->data);
            p=p->next;
        }; 
    };
};
int existe(cellule* tete,int x){
    int y=0;
    if (tete==NULL)  y=0 ;
    else {
        cellule* p=tete;
        while (p!=NULL){
            if (x==p->data) {
                y=1;
                break;
            }
            p=p->next;
        }
    }
    return y;
}
int taille(cellule* tete){
    int y=0;
    if (tete==NULL)  y=0 ;
    else {
        cellule* p=tete;
        while (p!=NULL){
            y+=1;
            p=p->next;
        }
    }
    return y;

}
int main (){
    int x,t;
    cellule* tete;
    tete=creerliste();
    affiche(tete);
    for ( int i=0; i <= 5 ; i++){
        printf("donner un entier \n");
        scanf("%d",&x);
        tete=ajout(tete,x);
    };   
    affiche(tete);
    printf("donner une valeur");
    scanf("%d",&t);
    printf("%d \n",existe(tete,t));
    printf("%d \n",taille(tete));
    return 0;
} 

