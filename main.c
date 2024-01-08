#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.c"

int main(){
    #ifdef _WIN32
        system("chcp 65001");
        procClear(0);
    #endif
    MachineReserve reserve;
    MachineCaisse caisse;

    int qtt, id, mdp;
    float prix;

    reserve.nbbaguette = 0;
    reserve.nbpainslong = 0;
    reserve.nbpainauseigle = 0;
    reserve.nbpainauchocolat = 0;
    reserve.nbcroissant = 0;
    reserve.nbpizza = 0;
    reserve.nbpissaladiere = 0;

    caisse.nbpiece1 = 0;
    caisse.nbpiece2 = 0;
    caisse.nbpiece05 = 0;
    caisse.nbpiece02 = 0;
    caisse.nbpiece01 = 0;
    caisse.nbpiece005 = 0;

    do{
        printf("Que souhaitez vous ?\n (1) Baguette - 0.90€ \n (2) Pain Long - 1.60€ \n (3) Pain au seigle - 2.20€ \n (4) Pain au chocolat - 1.10€ \n (5) Croissant - 1.10€ \n (6) Pizza - 2.80€ \n (7) Pissaladiere - 2.80€\n (8) Quitter\n (9) Caisse/Reserve\n Entrer votre choix : ");
        if (scanf("%d", &id) != 1) {
            scanf("%*s");
            procClear(4);
            continue;
        }
        switch (id){
        case 1:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbbaguette >= qtt && qtt > 0){
                prix = qtt*BAGUETTES;
                procClear(0);
                printf("Vous avez demandez %d Baguette(s)\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Baguette(s), vraiment d\u00e9sol\u00e9 ...\n\n", reserve.nbbaguette);
            }
            break;
        case 2:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbpainslong >= qtt && qtt > 0){
                prix = qtt*PAINS_LONG;
                procClear(0);
                printf("Vous avez demandez %d Pain(s) Long\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Pain(s) Long, vraiment désolé ...\n\n", reserve.nbpainslong);
            }
            break;
        case 3:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbpainauseigle >= qtt && qtt > 0){
                prix = qtt*PAINS_AU_SEIGLE;
                procClear(0);
                printf("Vous avez demandez %d Pain(s) Seigles\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Pain(s) seigle, vraiment désolé ...\n\n", reserve.nbpainauseigle);
            }
            break;
        case 4:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbpainauchocolat >= qtt && qtt > 0){
                prix = qtt*PAINS_AU_CHOCOLAT;
                procClear(0);
                printf("Vous avez demandez %d Pain(s) Chocolat\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Pain(s) Chocolat, vraiment désolé ...\n\n", reserve.nbpainauchocolat);
            }
            break;
        case 5:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbcroissant >= qtt && qtt > 0){
                prix = qtt*CROISSANTS;
                procClear(0);
                printf("Vous avez demandez %d Croissant(s)\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Croissant(s), vraiment désolé ...\n\n", reserve.nbcroissant);
            }
            break;
        case 6:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbpizza >= qtt && qtt > 0){
                prix = qtt*PIZZAS;
                procClear(0);
                printf("Vous avez demandez %d Pizza(s)\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Pizza(s), vraiment désolé ...\n\n", reserve.nbpizza);
            }
            break;
        case 7:
            printf("Entrer la quantité : ");
            if (scanf("%d", &qtt) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if (reserve.nbpissaladiere >= qtt && qtt > 0){
                prix = qtt*PISSALADIERES;
                procClear(0);
                printf("Vous avez demandez %d Pissaladiere(s)\nCela vous coutera %.2f€ \n", qtt, prix);
                procPaiement(&caisse, &reserve, prix, id, qtt);
            }
            else{
                procClear(0);
                printf("Il ne reste que %d Pissaladiere, vraiment désolé ...\n\n", reserve.nbpissaladiere);
            }
            break;
        case 8:
            procClear(0);
            printf("Machine STOP !");
            break;
        case 9:
            printf("Entrer le mot de passe : ");
            if (scanf("%d", &mdp) != 1) {
                scanf("%*s");
                procClear(4);
                continue;
            }
            if(mdp == mdpVerif(mdp)){
                procClear(0);
                maReserve(&reserve);
                procClear(1);
                maCaisse(&caisse);
                procClear(1);
            }
            else{
                printf("Mot de passe incorrect\n");
                printf("Indice : Var et Morbihan\n");
                procClear(1);
            }
            break;
        default:
            procClear(0);
            break;
        }
    } while (id != 8);

    return 0;
    
}