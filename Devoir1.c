 #include<stdio.h>
 #include<string.h>
 
 //definir la sctucture facture par Brelle
typedef struct{
    int numero;
    int id;
float montant,inscription,scolarite;
char objet[5];
}
fin structure;

//Procédure remplir tab factures par Brelle 
void remplir Factures (struct Facture Tab[2],int n) {

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
    for (i=0; i<n; i++){
        S=S+tab[i].montant;
    }
      return S;
}
//Fonction Min tab par Alix
float minTab(struct Facture tab[], int n){
    float min=tab[0].montant;
    for(i=1; i<n; i++){
        if(tab[i]).montant < Min){
            Min=tabf[i].montant;
        }
    }
      return min;
}
//Fonction Max tab par Alix
 float maxTab(struct Facture tab[], int n){
    float Max=tabf[0].montant;
    for(i=1; i<n; i++){
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


//Main (pour intégrer les fonctionnalités du programme par David