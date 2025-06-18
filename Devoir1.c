 #include<stdio.h>
 #include<string.h>
 
 //definir la sctucture facture par Brelle
typedef struct{
    int numero;
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
 

}


//Procédure affiche tab par Brelle
void afficher (Facture)


//Fonction somme tab par Alix
float sommeTab(struct Facture tab[], int n){
    float S=0;
    for ( int i=0; i<n; i++){
        S += tab[i].montant;
    }
      return S;
}
//Fonction Min tab par Alix
float minTab(struct Facture tab[], int n){
    float min=tab[0].montant;
    for( int i=1; i<n; i++){
        if(tab[i]).montant < Min){
            Min=tabf[i].montant;
        }
    }
      return min;
}
//Fonction Max tab par Alix
 float maxTab(struct Facture tab[], int n){
    float Max=tabf[0].montant;
    for(int i=1; i<n; i++){
       if(tabf[i]).montant > Max){
         Max=tabf[i]).montant;
       }
    }
        return Max; 
}       
//Fonction somme par objet par David
S=0;
for(i=0; i<n; i++){
    if(tabf[i].objet,objetrecherche){
        S=S+tabf[i].montant;
    }
}


//Procédure facture par étudiant par David
void factureParEtudiant(){
    int found = 0;
    printf("\nEntrez l'ID de l'etudiant pour afficher ses factures : ");
    scanf("%d", &idRecherche);
    printf("\n--- Factures pour l'etudiant ID %d ---\n", idRecherche);
    for (int i = 0; i < nombreFactures; i++){
        if (tableauFactures[i].idEtudiant == idRecherche){
            printf("  Numero: %d\n", tableauFactures[i].numero);
            printf("  Montant: %.2f\n", tableauFactures[i].montant);
            printf("  Objet: %s\n", tableauFactures[i].objet);
            printf("--------------------------\n");
            found = 1;
        }
    }
    if (!found){
        printf("Aucune facture trouvee pour l'etudiant ID %d.\n", idRecherche);
    }
}


//Main (pour intégrer les fonctionnalités du programme par David
main() {
    int choix;
    char objetPourSomme[50];

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Remplir une nouvelle facture\n");
        printf("2. Afficher toutes les factures\n");
        printf("3. Calculer la somme totale des montants\n");
        printf("4. Trouver le montant minimum\n");
        printf("5. Trouver le montant maximum\n");
        printf("6. Calculer la somme des montants par objet\n");
        printf("7. Afficher les factures par etudiant\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                remplirTab();
                break;
            case 2:
                afficheTab();
                break;
            case 3:
                printf("\nSomme totale des montants : %.2f\n", sommeTab());
                break;
            case 4:
                printf("\nMontant minimum : %.2f\n", minTab());
                break;
            case 5:
                printf("\nMontant maximum : %.2f\n", maxTab());
                break;
            case 6:
                printf("Entrez l'objet pour calculer la somme (ex: inscription, scolarite) : ");
                scanf("%s", objetPourSomme);
                printf("Somme pour l'objet '%s' : %.2f\n", objetPourSomme, sommeParObjet(objetPourSomme));
                break;
            case 7:
                factureParEtudiant();
                break;
            case 0:
                printf("Merci d'avoir utilise le programme. Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 0);

    return 0;
}