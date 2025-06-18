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
