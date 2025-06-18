#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 //definir la sctucture facture par Brelle
typedef struct{
    int numero;
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

//Fonction somme tab par Alix
float sommeTab(Facture tab[], int n) {
      int i;
    if (n == 0) {
        return 0.0f;
    }
    float somme = 0;
    for (i = 0; i < n; i++) {
        somme += tab[i].montant;
    }
    return somme;
}

//Fonction Min tab par Alix
float minTab(Facture tab[], int n) {
      int i;
    if (n == 0) {
        printf("Aucune facture pour calculer le minimum.\n");
        return 0.0f; // Ou une valeur sentinelle comme FLT_MAX de <float.h>
    }
    float min_val = tab[0].montant;
    for (i = 1; i < n; i++) {
        if (tab[i].montant < min_val) {
            min_val = tab[i].montant;
        }
    }
    return min_val;
}

//Fonction Max tab par Alix
float maxTab(Facture tab[], int n) {
      int i;
    if (n == 0) {
        printf("Aucune facture pour calculer le maximum.\n");
        return 0.0f; // Ou une valeur sentinelle comme FLT_MIN de <float.h>
    }
    float max_val = tab[0].montant;
    for (i = 1; i < n; i++) {
        if (tab[i].montant > max_val) {
            max_val = tab[i].montant;
        }
    }
    return max_val;
}

//Fonction somme par objet par David
float sommeParObjet(Facture tab[], int n, char objet_rechercher[]) {
      int i;
    float somme = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(tab[i].objet, objet_rechercher) == 0) {
            somme += tab[i].montant;
        }
    }
    return somme;
}

//Procédure facture par étudiant par David
void factureParEtudiant(Facture tab[], int n, int idRecherche) {
     int i;
    int found = 0;
    printf("\n--- Factures de l'étudiant %d ---\n", idRecherche);
    for (i = 0; i < n; i++) {
        if (tab[i].id_etudiant == idRecherche) {
            printf("Numéro: %d | Montant: %.2f | Objet: %s\n",
                   tab[i].numero, tab[i].montant, tab[i].objet);
            found = 1;
        }
    }
    if (!found) {
        printf("Aucune facture trouvée pour l'étudiant ID %d.\n", idRecherche);
    }
}

//Main (pour intégrer les fonctionnalités du programme par David
int main() {
    Facture tab[100]; // Tableau pour stocker 100 factures max
    int n = 0;        // Initialise le nombre de factures à 0
    int choix;
    char objetPourSomme[20]; // Taille ajustée pour correspondre à la structure

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Remplir une ou plusieurs nouvelles factures\n");
        printf("2. Afficher toutes les factures\n");
        printf("3. Calculer la somme totale des montants\n");
        printf("4. Trouver le montant minimum\n");
        printf("5. Trouver le montant maximum\n");
        printf("6. Calculer la somme des montants par objet\n");
        printf("7. Afficher les factures par étudiant\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                remplirTab(tab, &n); // Passer l'adresse de n
                break;
            case 2:
                afficheTab(tab, n);
                break;
            case 3:
                printf("\nSomme totale des montants : %.2f\n", sommeTab(tab, n));
                break;
            case 4:
                printf("\nMontant minimum : %.2f\n", minTab(tab, n));
                break;
            case 5:
                printf("\nMontant maximum : %.2f\n", maxTab(tab, n));
                break;
            case 6:
                printf("Entrez l'objet pour calculer la somme : ");
                scanf("%19s", objetPourSomme); // Utilisation de %19s
                printf("Somme pour l'objet '%s' : %.2f\n", objetPourSomme, sommeParObjet(tab, n, objetPourSomme));
                break;
            case 7: { // Utilisation d'un bloc pour la déclaration de idRecherche
                int idRecherche;
                printf("Entrez l'ID étudiant : ");
                scanf("%d", &idRecherche);
                factureParEtudiant(tab, n, idRecherche);
                break;
            }
            case 0:
                printf("Merci d'avoir utilisé le programme. Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}