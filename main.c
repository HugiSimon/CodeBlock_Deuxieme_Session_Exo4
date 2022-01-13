#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 1
/*
    int n_nbr, n_hab, n_i, n_j=0;

    printf("Nombre de ville/village ?\n");
    scanf("%d", &n_nbr);

    for (n_i=1;n_i <= n_nbr;n_i++) { //On boucle le nombre de ville/village qu'on a rencontré
        printf("Nombre d'habitant ? ");
        scanf("%d", &n_hab);

        if (n_hab > 10000) { //Si c'est strictement au dessus de 10 000 c'est un ville
            n_j++; //Donc on incrémente la variable j
        }
    }
    printf("Il y a %d de ville", n_j);
*/
    //Exercice 2
/*
    int n_enter, n_somme=0;

    printf("Quel age avez vous ?\n");
    scanf("%d", &n_enter);

    if (n_enter < 10) { //Si on est en dessous de 10 on arrête toute suite
        n_somme = n_somme + 5;
    }else //Sinon on continue le programme
        if (n_enter < 60) { //On vérifie bien qu'on a moins de 60 ans
            n_somme = n_somme + 30;

            printf("Quel est le poid de vos bagages ?\n"); //C'est que ceux entre 10 ans et 60 ans doivent potentiellement payer pour les bagages
            scanf("%d", &n_enter);

            if (n_enter >= 20) { //Si c'est plus de 20 kilos, c'est payant
                n_somme = n_somme + 10;
            }
        } //Pas de else, car les personnes au dessus de 60 ans ont rien à payer

    printf("Vous devez %d ecus", n_somme);
*/
    //Exercice 3
/*
    int n_enter, n_somme=0;

    do { //Rentrer dans la boucle sans condition
        printf("Entre/Sortie\n");
        scanf("%d", &n_enter);

        if (n_somme + n_enter < 250) { //Tester si on peut incrémenter
            n_somme = n_somme + n_enter; //Et on incrémente
        }else{ //Et si on peut pas, on affiche le message
            printf("Impossible, il y a deja %d personnes\n", n_somme);
        }
    }while (n_enter != 0); //Si on rentre la valeur 0, on sort
*/
    //Exercice 4
/*
    int n_i, n_j, max=6;

    for (n_i=-1;n_i <= max;n_i++){ //On commence à moins 1 comme ça dés que c'est au dessus de 0, c'est le nombre de fois qu'on répéte "O"
        if (n_i == -1) {
            printf("X"); //Première ligne, qu'un X
        }
        if (n_i == 0) { //Deuxième ligne
            printf("XX");
        }
        if (n_i > 0 && n_i < max) { //Les lignes du milieu
            printf("X");
            for (n_j=1;n_j <= n_i;n_j++) { //Le nombre de fois ou "O" est écrit
                printf("O");
            }
            printf("X");
        }
        if (n_i == max) { //Tout les "X" de fin
            for (n_j=-1;n_j <= n_i;n_j++) {
                printf("X");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (n_i=0;n_i <= 9;n_i++) { //C'est à quel ligne on est et c'est quel chiffre utiliser
        for (n_j=0;n_j <= 9;n_j++) { //Le nombre d'espace avant
            if (n_j < n_i){
                printf(" ");
            }else{
                printf("%d", n_i);
            }
        }
        printf("\n");
    }
*/
    //Exercice 5
/*
    int n_long, n_larg, n_i, n_j;
    char c_c1, c_c2;

    printf("Quel est la longeur du carre ?\n"); //Toutes les questions
    scanf("%d", &n_long);
    getchar();
    printf("Quel est la largeur ?\n");
    scanf("%d", &n_larg);
    getchar();
    printf("Le premier caractere ?\n");
    scanf("%c", &c_c1);
    getchar();
    printf("Le deuxieme caracter ?\n");
    scanf("%c", &c_c2);
    getchar();

    for (n_i=1;n_i <= n_long;n_i++){ //La boucle pour chaque ligne
        for (n_j=1;n_j <= n_larg;n_j++){ //La boucle pour toutes les colones de la ligne
            if (n_i == 1 || n_i == n_long){ //Si on est sur la première lignes ou la dernière
                printf("%c", c_c1);
            }else if (n_j == 1 || n_j == n_larg){ //Si on est dans la première colones de la lignes ou la dernière
                printf("%c", c_c1);
            }else{
                printf("%c", c_c2);
            }
        }
        printf("\n"); //Un petit saut de ligne
    }
*/
    //Exercice 6

    int n_enter, n_vomi=1, n_i=0;

    printf("Population totale ?\n");
    scanf("%d", &n_enter);

    while (n_vomi < n_enter){ //Tant que vomi n'a pas atteint toute la population
        n_vomi = n_vomi * 3; //La contamination de vomi
        n_i++; //Et l'incrémentation
    }

    printf("Nombre de jour pour que la population soit contamine est de %d", n_i);

    //Exercice 7
/*
    int n_enter, n_pierre=0, n_i=0;

    printf("Quel est le nombre de pierre disponible ?\n");
    scanf("%d", &n_enter);

    while (n_pierre + (n_i * n_i) <= n_enter){
        n_pierre = n_pierre + (n_i * n_i); //i augmente à chaque boucle de 1, et on peut utiliser la variable i, i*i qui permet avec l'étage de savoir le nombre de pierre qu'on a besoin
        n_i++; //L'incrémentation, qui nous sert d'étages
    }

    printf("Nombre d etage est de %d et %d pierres", n_i-1, n_pierre);
*/
}
