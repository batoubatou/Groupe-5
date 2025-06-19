#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 //definir la sctucture facture par Brelle
typedef struct{
    int numero;
<<<<<<< HEAD
    int id;
    int idRecherche;
float montant,inscription,scolarite;
char objet[5];
};


//Procédure remplir tab factures par Brelle 
void remplirtabF (struct facture tabF[]) {

 for (int i = 0; i < n; i++){
    
 } 
 
    printf ("\n veuillez saisir le numero de l etudiant \n");
    scanf("%d",&Facture Tab [i].numero);
     printf ("\n veuillez saisir l id de l etudiant \n");
     scanf("%d",&Facture Tab [i].id);
     printf ("\n veuillez saisir le montant de l etudiant \n");
     scanf("%f",&Facture Tab [i].montant);
     printf ("\n veuillez saisir l inscription de l etudiant \n");
     scanf("%f",&Facture Tab [i].incription);
     printf ("\n veuillez saisir la scolarite de l etudiant \n");
     scanf("%f",&Facture Tab [i].scolarite);
     printf ("\n veuillez saisir l objet \n");
     scanf("%s",&Facture Tab [i].objet);






 }
 
=======
    int id_etudiant;
    float montant;
    char objet[20];
}Facture;


//Procédure remplir tab factures par Brelle 
void remplirTab(Facture tab[], int *n) { // n est maintenant un pointeur
    int num_to_add;
    printf("Combien de factures voulez-vous ajouter ? ");
    scanf("%d", &num_to_add);
    int i;
>>>>>>> 456fce059e19d503dcf0924489679182504eed04

    for (i = 0; i < num_to_add; i++) {
        printf("\n--- Saisie de la facture #%d ---\n", *n + 1);
        printf("Veuillez saisir le numéro : ");
        scanf("%d", &tab[*n].numero);
        printf("Veuillez saisir l'ID de l'étudiant : ");
        scanf("%d", &tab[*n].id_etudiant);
        printf("Veuillez saisir le montant de l'étudiant : ");
        scanf("%f", &tab[*n].montant);
        printf("Veuillez saisir l'objet (max 19 caractères) : ");
        scanf("%s", tab[*n].objet);
        (*n)++; // Incrémenter le nombre total de factures
    }
}

 
//Procédure affiche tab par Brelle
void afficheTab(Facture tab[], int n) {
     int i;
    if (n == 0) {
        printf("\nAucune facture à afficher.\n");
        return;
    }
    printf("\n--- Liste des factures ---\n");
    for (i = 0; i < n; i++) {
        printf("Numéro: %d | Étudiant: %d | Montant: %.2f | Objet: %s\n",
               tab[i].numero, tab[i].id_etudiant, tab[i].montant, tab[i].objet);
    }
}
