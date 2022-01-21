#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct etud{
char nom[10] ;
char prenom[10] ;
char classe[10];
float note;
struct etud* next;//liste chainé contenat les etudiants d'une classe
}etudiant;

etudiant* alloueEtudiant(){
    etudiant* new;
    new=malloc(sizeof(etudiant));
    return(new);
};
char[] SaisieChaine(){
    char chaine[10]
    scanf("%s",&chaine);
    return (chaine)
};
void SaisieEtudiant(etudiant* etud){
    printf("saisir le nom d'un etudiant : \n");
    etud->nom=SaisieChaine();
    printf("saisir le prenom d'un etudiant :\n");
    etud->prenom=SaisieChaine();
    printf("saisir la classe d'un etudiant :\n");
    etud->classe=SaisieChaine();
    float x;
    printf"saisir la note d'un etudiant :\n");
    scanf("%f",&x);
    etud->note=x; 
}
void RemplirTab(etudiant tab[],int nbr_etudiant,int nbr_classe){
    for (int i=0;i<nbr_classe;i++){
        etudiant* tete;
        for (int j=0;j<nbr_etudiant;j++){
            etudiant* new;
            new=malloc(sizeof(etudiant));
            SaisieEtudiant(new);
            new->next=tete;
        }
    }
};
void afficheEtudiant(etudiant foulen){
    printf("Nom : %s \n",foulen.nom);
    printf("Prenom : %s \n",foulen.prenom);
    printf("Classe : %s \n",foulen.classe);
    printf(("NOte : %f \n"),foulen.note)
};
void AfficheTab(etudiant* tab[],int taille){
    for (int i=0;i<taille;i++){
        if (tab[i]==NULL) printf("cette classe est vide");
        else{
            etudiant* p=tab[i];
            while(p!=NULL){
                afficheEtudiant((*p));
                p=p->next
            };
        };
    };
};
etudiant* notemaximal(int i, etudiant* tab[] ){
    if (tab[i]==NULL) printf("cette classe est vide, pas de note maximal");
    else{
        etudiant* p=tab[i];
        float maxi=p->note;
        etudiant* etudmaxi=tab[i];
        while(p!=NULL){
            if (p->note>maxi){
                maxi=p->note;
                etudmaxi=p;
            }
            p=p->next;
        };
    }
    return etudmaxi;
};

int main(){
    int i,n,m;
    printf("donner le nombre des classe : \n");
    scanf("%d",&n);
    printf("donner le nombre des etudiant par classe : \n");
    scanf("%d";&m);
    etudiant tab[n];
    RemplirTab(tab,m,n);
    AfficheTab(tab,n);
    FILE* f;
    printf("sasiir l'indice de classe : \n");
    scanf("%d",&i);
    f=fopen("note.txt","w");
    fputs(notemaximal(i,tab)->nom);
    fputs(notemaximal(i,tab)->prenom);
    fputs(notemaximal(i,tab)->note);
    fclose(f);

}