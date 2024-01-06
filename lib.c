#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

void procClear(int idClear) {
    switch (idClear) {
    case 1:
        #ifdef _WIN32
            system("pause");
            system("cls");
        #elif __linux__
            printf("Press Enter to continue...");
            fflush(stdout);
            getchar();
            system("clear");
        #endif
        break;
    case 2:
        #ifdef _WIN32
            system("cls");
            printf("Saisi incorrect, Annulation...\n\n");
            system("pause");
            system("cls");
        #elif __linux__
            system("clear");
            printf("Saisi incorrect, Annulation...\n\n");
            printf("Press Enter to continue...");
            fflush(stdout);
            getchar();
            system("clear");
        #endif
        break;
    case 3:
        #ifdef _WIN32
            printf("\nAnnulation ...\n");
            system("pause");
            system("cls");
        #elif __linux__
            printf("\nAnnulation ...\n");
            printf("Press Enter to continue...");
            fflush(stdout);
            getchar();
            system("clear");
        #endif
        break;
    case 4:
        #ifdef _WIN32
            system("cls");
            printf("Saisi incorrect ...\n\n");
        #elif __linux__
            system("clear");
            printf("Saisi incorrect ...\n\n");
        #endif
        break;
    default:
        #ifdef _WIN32
            system("cls");
        #elif __linux__
            system("clear");
        #endif
        break;
    }
}

void maReserve(MachineReserve *reserve){
    int choix, addproduit;

    printf("Voulez-vous visualiser la reserve ou ajouter des produits ?\n (1) Pour ajouter des produits \n(Un autre chiffre) Pour visualiser et passer à la suite\n Votre choix : ");
    if (scanf("%d", &choix) != 1) {
        scanf("%*s");
    }
    if (choix == 1){
        printf("Combien de baguettes voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbbaguette += addproduit;
        printf("Combien de pains longs voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbpainslong += addproduit;
        printf("Combien de pain de seigle voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbpainauseigle += addproduit;
        printf("Combien de pains au chocolat voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbpainauchocolat += addproduit;
        printf("Combien de croissant voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbcroissant += addproduit;
        printf("Combien de pizza voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbpizza += addproduit;
        printf("Combien de pissaladiere voulez-vous ajouter ? : ");
        if (scanf("%d", &addproduit) != 1) {
            scanf("%*s");
            addproduit = 0;
        }
        reserve->nbpissaladiere += addproduit;
    }
    else{
        printf("Vous avez dans votre machine :\n Baguettes : %d \n Pains longs : %d \n Pain au seigle : %d \n Pains au chocolat : %d \n Croissant : %d \n Pizza : %d \n Pissaladiere : %d \n\n", reserve->nbbaguette, reserve->nbpainslong, reserve->nbpainauseigle, reserve->nbpainauchocolat, reserve->nbcroissant, reserve->nbpizza, reserve->nbpissaladiere);
    }
}

void maCaisse(MachineCaisse *caisse){

    int addpiece, choix;
    float totalCaisse;

    printf("\nVoulez-vous visualiser la caisse ou ajouter des pieces ?\n (1) Pour ajouter des pieces \n(Un autre chiffre) Pour visualiser et passer à la suite\n Votre choix : ");
    if (scanf("%d", &choix) != 1) {
        scanf("%*s");
    }
    if (choix == 1){
        printf("Combien de piece de 2€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece2 = caisse->nbpiece2 + addpiece;
        printf("Combien de piece de 1€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece1 = caisse->nbpiece1 + addpiece;
        printf("Combien de piece de 0.50€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece05 = caisse->nbpiece05 + addpiece;
        printf("Combien de piece de 0.20€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece02 = caisse->nbpiece02 + addpiece;
        printf("Combien de piece de 0.10€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece01 = caisse->nbpiece01 + addpiece;
        printf("Combien de piece de 0.05€ voulez-vous ajouter ? : ");
        if (scanf("%d", &addpiece) != 1) {
            scanf("%*s");
            addpiece = 0;
        }
        caisse->nbpiece005 = caisse->nbpiece005 + addpiece;
    }
    totalCaisse = caisse->nbpiece1*PIECE1+caisse->nbpiece2*PIECE2+caisse->nbpiece05*PIECE05+caisse->nbpiece02*PIECE02+caisse->nbpiece01*PIECE01+caisse->nbpiece005*PIECE005;
    printf("Vous avez dans votre caisse :\n Piece de 2€ : %d \n Piece de 1€ : %d \n Piece de 0.50€ : %d \n Piece de 0.20€ : %d \n Piece de 0.10€ : %d \n Piece de 0.05€ : %d \n Vous avez au total dans votre caisse : %.2f€ \n\n", caisse->nbpiece2, caisse->nbpiece1, caisse->nbpiece05, caisse->nbpiece02, caisse->nbpiece01, caisse->nbpiece005, totalCaisse);
}

void giveMonnai(MachineCaisse *caisse, MachineReserve *reserve, float prix, int id, int qtt){
    int addpiece1, addpiece2, addpiece05, addpiece02, addpiece01, addpiece005;
    float totalGive, rembourcement, manque;

    printf("Combien de piece de 2€ voulez-vous donner ? : ");
    scanf("%d", &addpiece2);
    caisse->nbpiece2 = caisse->nbpiece2 + addpiece2;
    printf("Combien de piece de 1€ voulez-vous donner ? : ");
    scanf("%d", &addpiece1);
    caisse->nbpiece1 = caisse->nbpiece1 + addpiece1;
    printf("Combien de piece de 0.50€ voulez-vous donner ? : ");
    scanf("%d", &addpiece05);
    caisse->nbpiece05 = caisse->nbpiece05 + addpiece05;
    printf("Combien de piece de 0.20€ voulez-vous donner ? : ");
    scanf("%d", &addpiece02);
    caisse->nbpiece02 = caisse->nbpiece02 + addpiece02;
    printf("Combien de piece de 0.10€ voulez-vous donner ? : ");
    scanf("%d", &addpiece01);
    caisse->nbpiece01 = caisse->nbpiece01 + addpiece01;
    printf("Combien de piece de 0.05€ voulez-vous donner ? : ");
    scanf("%d", &addpiece005);
    caisse->nbpiece005 = caisse->nbpiece005 + addpiece005;

    totalGive = addpiece1 * PIECE1 + addpiece2 * PIECE2 + addpiece05 * PIECE05 + addpiece02 * PIECE02 + addpiece01 * PIECE01 + addpiece005 * PIECE005;

    printf("Vous avez donnée %.2f€ \n", totalGive);
    rembourcement = totalGive - prix;

    if (totalGive < prix){
        manque = prix - totalGive;
        printf("Il manque %.2f€ \nCommande annulé ..\n", manque);
        rembourcement = prix - manque;
    }

    while (rembourcement > 0.01) {

        if (rembourcement >= PIECE2 && caisse->nbpiece2 > 0) {
            rembourcement = rembourcement - PIECE2;
            caisse->nbpiece2 = caisse->nbpiece2 - 1;
            printf("La machine a rendu une pièce de 2.00€\n");
             
        } 
        else if (rembourcement >= PIECE1 && caisse->nbpiece1 > 0) {
            rembourcement = rembourcement -  PIECE1;
            caisse->nbpiece1 = caisse->nbpiece1 - 1;
            printf("La machine a rendu une pièce de 1.00€\n");
             
        } 
        else if (rembourcement >= PIECE05 && caisse->nbpiece05 > 0) {
            rembourcement = rembourcement -  PIECE05;
            caisse->nbpiece05 = caisse->nbpiece05 - 1;
            printf("La machine a rendu une pièce de 0.50€\n");
             
        } 
        else if (rembourcement >= PIECE02 && caisse->nbpiece02 > 0) {
            rembourcement = rembourcement -  PIECE02;
            caisse->nbpiece02 = caisse->nbpiece02 - 1;
            printf("La machine a rendu une pièce de 0.20€\n");
             
            
        } 
        else if (rembourcement >= PIECE01 && caisse->nbpiece01 > 0) {
            rembourcement = rembourcement -  PIECE01;
            caisse->nbpiece01 = caisse->nbpiece01 - 1;
            printf("La machine a rendu une pièce de 0.10€\n");
             
            
        } 
        else if (rembourcement >= PIECE005 && caisse->nbpiece005 > 0) {
            rembourcement = rembourcement -  PIECE005;
            caisse->nbpiece005 = caisse->nbpiece005 - 1;
            printf("La machine a rendu une pièce de 0.05€\n");
             
        }
        else{
            if (caisse->nbpiece005 > 0){
                rembourcement = rembourcement -  PIECE005;
                caisse->nbpiece005 = caisse->nbpiece005 - 1;
                printf("La machine a rendu une pièce de 0.05€\n");
            }
            else{
                printf("Nous n'avons plus de monnais desolé");
                break;
            }
        }
    }
    if (totalGive >= prix){
        switch (id){
        case 1:
            printf("\nVoici vos %d baguette(s)", qtt);
            reserve->nbbaguette = reserve->nbbaguette - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 2:
            printf("\nVoici vos %d pain(s) long(s)", qtt);
            reserve->nbpainslong = reserve->nbpainslong - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 3:
            printf("\nVoici vos %d pain(s) Seigles", qtt);
            reserve->nbpainauseigle = reserve->nbpainauseigle - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 4:
            printf("\nVoici vos %d pain(s) au chocolat", qtt);
            reserve->nbpainauchocolat = reserve->nbpainauchocolat - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 5:
            printf("\nVoici vos %d croissant(s)", qtt);
            reserve->nbcroissant = reserve->nbcroissant - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 6:
            printf("\nVoici vos %d pizza(s)", qtt);
            reserve->nbpizza = reserve->nbpizza - qtt;
            printf("\nMerci a bientot\n");
            break;
        case 7:
            printf("\nVoici vos %d pissaladiere(s)", qtt);
            reserve->nbpissaladiere = reserve->nbpissaladiere - qtt;
            printf("\nMerci a bientot\n");
            break;
        default:
            printf("Bah la t'as commander un truc mais quoi, je sais pas ??");
            break;
        }
    }
}
void procPaiement(MachineCaisse *caisse, MachineReserve *reserve, float prix, int id, int qtt){
    int v;
    printf("Voulez-vous :\n (1) Poursuivre vers le paiement\n (2) Annuler\n Entrer votre choix : ");
        if (scanf("%d", &v) != 1) {
            scanf("%*s");
            procClear(2);
        }
        else{
            if (v == 1){
            giveMonnai(caisse, reserve, prix, id, qtt);
            procClear(1);
            }
            else{
                procClear(3);
            }
        }
        
}
int mdpVerif(int mdp){
    int mdpok, calcul;
    calcul = (((((mdp * mdp)+12)-100000)/2)/6)-5810229;
    mdpok = calcul + mdp;
    return mdpok;
}