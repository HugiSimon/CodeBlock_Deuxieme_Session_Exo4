#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 1
/*
    int n_nbr, n_hab, n_i, n_j=0;

    printf("Nombre de ville/village ?\n");
    scanf("%d", &n_nbr);

    for (n_i=1;n_i <= n_nbr;n_i++) {
        printf("Nombre d'habitant ? ");
        scanf("%d", &n_hab);

        if (n_hab > 10000) {
            n_j++;
        }
    }
    printf("Il y a %d de ville", n_j);
*/
    //Exercice 2
/*
    int n_enter, n_somme=0;

    printf("Quel age avez vous ?\n");
    scanf("%d", &n_enter);

    if (n_enter < 10) {
        n_somme = n_somme + 5;
    }else{
        if (n_enter < 60) {
            n_somme = n_somme + 30;
        }
    }

    printf("Quel est le poid de vos bagages ?\n");
    scanf("%d", &n_enter);

    if (n_enter >= 20) {
        n_somme = n_somme + 10;
    }

    printf("Vous devez %d ecus", n_somme);
*/
    //Exercice 3
/*
    int n_enter, n_somme=0;

    do {
        printf("Entre/Sortie\n");
        scanf("%d", &n_enter);

        if (n_somme + n_enter < 250) {
            n_somme = n_somme + n_enter;
        }else{
            printf("Impossible, il y a deja %d personnes\n", n_somme);
        }
    }while (n_enter != 0);
*/
    //Exercice 4
/*
    int n_i, n_j;

    for (n_i=-1;n_i <= 6;n_i++){
        if (n_i == -1) {
            printf("X");
        }
        if (n_i == 0) {
            printf("XX");
        }
        if (n_i > 0 && n_i < 6) {
            printf("X");
            for (n_j=1;n_j <= n_i;n_j++) {
                printf("O");
            }
            printf("X");
        }
        if (n_i == 6) {
            for (n_j=-1;n_j <= n_i;n_j++) {
                printf("X");
            }
        }
        printf("\n");
    }

    for (n_i=0;n_i <= 9;n_i++) {
        for (n_j=1;n_j <= n_i;n_j++) {
            printf(" ");
        }
        for (n_j=0;n_j <= 9 - n_i;n_j++) {
            printf("%d", n_i);
        }
        printf("\n");
    }
*/
    //Exercice 5
/*
    int n_long, n_larg, n_i, n_j;
    char c_c1, c_c2;

    printf("Quel est la longeur du carre ?\n");
    scanf("%d", &n_long);
    printf("Quel est la largeur ?\n");
    scanf("%d", &n_larg);
    printf("Le premier caractere ?\n");
    scanf(" %c", &c_c1);
    printf("Le deuxieme caracter ?\n");
    scanf(" %c", &c_c2);

    for (n_i=1;n_i <= n_larg;n_i++){
        for (n_j=1;n_j <= n_long;n_j++){
            if (n_i == 1 || n_i == n_larg){
                printf("%c", c_c1);
            }else{
                if (n_j == 1 || n_j == n_long){
                    printf("%c", c_c1);
                }else{
                    printf("%c", c_c2);
                }
            }
        }
        printf("\n");
    }
*/
    //Exercice 6
/*
    int n_enter, n_vomi=1, n_i=0;

    printf("Population totale ?\n");
    scanf("%d", &n_enter);
    while (n_vomi < n_enter){
        n_vomi = n_vomi * 3;
        n_i++;
    }
    printf("Nombre de jour pour que la population soit contamine est de %d", n_i);
*/
    //Exercice 7
/*
    int n_enter, n_pierre=0, n_i=0;

    printf("Quel est le nombre de pierre disponible ?\n");
    scanf("%d", &n_enter);

    while (n_pierre + (n_i * n_i) <= n_enter){
        n_pierre = n_pierre + (n_i * n_i);
        n_i++;
    }

    printf("Nombre d etage est de %d et %d pierres", n_i-1, n_pierre);
*/
}
