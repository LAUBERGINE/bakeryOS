#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int nbpiece1, nbpiece2, nbpiece05, nbpiece02, nbpiece01, nbpiece005, ch, nbbaguettes, nbpainauchocolat, nbpainauseigle, nbpainslong, nbpizza, nbpissaladiere, nbcroissant, addpiece1, addpiece2, addpiece05, addpiece02, addpiece01, addpiece005, addbaguettes, addpainauchocolat, addpainauseigle, addpainslong, addpizza, addpissaladiere, addcroissant, qtt, wpiece1, wpiece2, wpiece05, wpiece02, wpiece01, wpiece005, a;
float baguettes, painauchocolat, painauseigle, painslong, pizza, pissaladiere, croissant, piece1, piece2, piece05, piece02, piece01, piece005, prix, totalWallet, totalCaisse, totalWalletPay, rembourcement;
char cch;
vcaisse(){
    totalCaisse = nbpiece1*piece1+nbpiece2*piece2+nbpiece05*piece05+nbpiece02*piece02+nbpiece01*piece01+piece005*nbpiece005;
    printf("Vous avez dans votre caisse :\n Piece de 2€ : %d \n Piece de 1€ : %d \n Piece de 0.50€ : %d \n Piece de 0.20€ : %d \n Piece de 0.10€ : %d \n Piece de 0.05€ : %d \n Vous avez au total dans votre caisse : %.2f€ \n\n", nbpiece2, nbpiece1, nbpiece05, nbpiece02, nbpiece01, nbpiece005, totalCaisse);
}
addcaisse(){
    printf("Combien de piece de 2€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece2);
    nbpiece2 = nbpiece2 + addpiece2;
    printf("Combien de piece de 1€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece1);
    nbpiece1 = nbpiece1 + addpiece1;
    printf("Combien de piece de 0.50€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece05);
    nbpiece05 = nbpiece05 + addpiece05;
    printf("Combien de piece de 0.20€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece02);
    nbpiece02 = nbpiece02 + addpiece02;
    printf("Combien de piece de 0.10€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece01);
    nbpiece01 = nbpiece01 + addpiece01;
    printf("Combien de piece de 0.05€ voulez-vous ajouter ? : ");
    scanf("%d", &addpiece005);
    nbpiece005 = nbpiece005 + addpiece005;
}
caisse(){
    ch = 0;
    printf("Voulez-vous visualiser la caisse ou ajouter de l'argent ?\n (1) Pour visualiser \n (2) Pour ajouter de l'argent\n ");
    scanf("%d", &ch);
    if (ch == 2){
        vcaisse();
        addcaisse();
        vcaisse();
    }
    else{
       vcaisse(); 
    }
}
vpain(){
    printf("Vous avez dans votre machine :\n Baguettes : %d \n Pains longs : %d \n Pain au seigle : %d \n Pains au chocolat : %d \n Croissant : %d \n Pizza : %d \n Pissaladiere : %d \n\n", nbbaguettes, nbpainslong, nbpainauseigle, nbpainauchocolat, nbcroissant, nbpizza, nbpissaladiere);
}
addpain(){
    printf("Combien de baguettes voulez-vous ajouter ? : ");
    scanf("%d", &addbaguettes);
    nbbaguettes = nbbaguettes + addbaguettes;
    printf("Combien de pains longs voulez-vous ajouter ? : ");
    scanf("%d", &addpainslong);
    nbpainslong = nbpainslong + addpainslong;
    printf("Combien de pain de seigle voulez-vous ajouter ? : ");
    scanf("%d", &addpainauseigle);
    nbpainauseigle = nbpainauseigle + addpainauseigle;
    printf("Combien de pains au chocolat voulez-vous ajouter ? : ");
    scanf("%d", &addpainauchocolat);
    nbpainauchocolat = nbpainauchocolat + addpainauchocolat;
    printf("Combien de croissant voulez-vous ajouter ? : ");
    scanf("%d", &addcroissant);
    nbcroissant = nbcroissant + addcroissant;
    printf("Combien de pizza voulez-vous ajouter ? : ");
    scanf("%d", &addpizza);
    nbpizza = nbpizza + addpizza;
    printf("Combien de pissaladiere voulez-vous ajouter ? : ");
    scanf("%d", &addpissaladiere);
    nbpissaladiere = nbpissaladiere + addpissaladiere;
}
pain(){
    ch = 0;
    printf("Voulez-vous visualiser votre stock ou ajouter du stock ?\n (1) Pour visualiser \n (2) Pour ajouter du stock \n ");
    scanf("%d", &ch);
    if (ch == 2){
        vpain();
        addpain();
        vpain();
    }
    else{
       vpain(); 
    }
}
init(){
    caisse();
    pain();
    machine();

}
achat(){
    printf("Que souhaitez vous ?\n (1) Baguette - 0.90€ \n (2) Pain Long - 1.60€ \n (3) Pain au seigle - 2.20€ \n (4) Pain au chocolat - 1.10€ \n (5) Croissant - 1.10€ \n (6) Pizza - 2.80€ \n (7) Pissaladiere - 2.80 \n Entrer votre choix : ");
    scanf("%c", &cch);
    printf("Entrer la quantité : ");
    scanf("%d", &qtt);
    switch (cch){
    case '1':
        if (nbbaguettes >= qtt){
            prix = qtt*baguettes;
            nbbaguettes = nbbaguettes - 1;
            printf("Vous avez demandez %d Baguette(s)\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Baguette(s), vraiment désolé ...\n\n", nbbaguettes);
            machine();
        }
        break;
    case '2':
        if (painslong >= qtt){
            prix = qtt*painslong;
            nbpainslong = nbpainslong - 1;
            printf("Vous avez demandez %d Pain(s) Long\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Pain(s) Long, vraiment désolé ...\n\n", nbpainslong);
            machine();
        }
        break;
    case '3':
        if (painauseigle >= qtt){
            prix = qtt*painauseigle;
            nbpainauseigle = nbpainauseigle - 1;
            printf("Vous avez demandez %d Pain(s) seigle\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Pain(s) seigle, vraiment désolé ...\n\n", nbpainauseigle);
            machine();
        }
        break;
    case '4':
        if (nbpainauchocolat >= qtt){
            prix = qtt*painauchocolat;
            nbpainauchocolat = nbpainauchocolat - 1;
            printf("Vous avez demandez %d Pain(s) Chocolat\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Pain(s) Chocolat, vraiment désolé ...\n\n", nbpainauchocolat);
            machine();
        }
        break;
    case '5':
        if (nbcroissant >= qtt){
            prix = qtt*croissant;
            nbcroissant = nbcroissant - 1;
            printf("Vous avez demandez %d Croissant(s)\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Croissant(s), vraiment désolé ...\n\n", nbcroissant);
            machine();
        }
        break;
    case '6':
        if (nbpizza >= qtt){
            prix = qtt*pizza;
            nbpizza = pizza - 1;
            printf("Vous avez demandez %d Pizza(s)\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Pizza(s), vraiment désolé ...\n\n", nbpizza);
            machine();
        }
        break;
    case '7':
        if (nbpissaladiere >= qtt){
            prix = qtt*pissaladiere;
            nbpissaladiere = nbpissaladiere - 1;
            printf("Vous avez demandez %d Pissaladiere(s)\n Cela vous coutera %.2f€ \n", qtt, prix);
            walletpay();
        }
        else{
            system("clear");
            printf("Il ne reste que %d Pissaladiere, vraiment désolé ...\n\n", nbpissaladiere);
            machine();
        }
        break;
    case '9':
        init();
        break;
    default:
        machine();
        break;
    }
}
configwallet(){
    totalWallet = wpiece1*piece1+wpiece2*piece2+wpiece05*piece05+wpiece02*piece02+wpiece01*piece01+piece005*wpiece005;
    printf("\n\n Vous avez dans votre porte monnai :\n Piece de 2€ : %d \n Piece de 1€ : %d \n Piece de 0.50€ : %d \n Piece de 0.20€ : %d \n Piece de 0.10€ : %d \n Piece de 0.05€ : %d \n Vous avez au total dans votre porte monnai : %.2f€ \n\n\n\n", wpiece2, wpiece1, wpiece05, wpiece02, wpiece01, wpiece005, totalWallet);
}
walletpay(){
    printf(" _     _ _______ ___     ___     _______ _______   _______ _______ __   __ \n");
    printf("| | _ | |   _   |   |   |   |   |       |       | |       |   _   |  | |  |\n");
    printf("| || || |  |_|  |   |   |   |   |    ___|_     _| |    _  |  |_|  |  |_|  |\n");
    printf("|       |       |   |   |   |   |   |___  |   |   |   |_| |       |       |\n");
    printf("|       |       |   |___|   |___|    ___| |   |   |    ___|       |_     _|\n");
    printf("|   _   |   _   |       |       |   |___  |   |   |   |   |   _   | |   |  \n");
    printf("|__| |__|__| |__|_______|_______|_______| |___|   |___|   |__| |__| |___|  \n");

    printf("Bienvenue dans Wallet Pay\n Voici votre porte monnai : \n");
    configwallet();
    printf("Vous devez payer : %.2f€.\n Avec quelles pieces voulez vous payer ? : \n", prix);

    printf("Combien de piece de 2€ voulez-vous ? : ");
    scanf("%d", &addpiece2);
    wpiece2 = wpiece2 - addpiece2;
    printf("Combien de piece de 1€ voulez-vous ? : ");
    scanf("%d", &addpiece1);
    wpiece1 = wpiece1 - addpiece1;
    printf("Combien de piece de 0.50€ voulez-vous ? : ");
    scanf("%d", &addpiece05);
    wpiece05 = wpiece05 - addpiece05;
    printf("Combien de piece de 0.20€ voulez-vous ? : ");
    scanf("%d", &addpiece02);
    wpiece02 = wpiece02 - addpiece02;
    printf("Combien de piece de 0.10€ voulez-vous ? : ");
    scanf("%d", &addpiece01);
    wpiece01 = wpiece01 - addpiece01;
    printf("Combien de piece de 0.05€ voulez-vous ? : ");
    scanf("%d", &addpiece005);
    wpiece005 = wpiece005 - addpiece005;

    totalWalletPay = addpiece1 * piece1 + addpiece2 * piece2 + addpiece05 * piece05 + addpiece02 * piece02 + addpiece01 * piece01 + piece005 * addpiece005;

    nbpiece2 = nbpiece2 + addpiece2;
    nbpiece1 = nbpiece1 + addpiece1;
    nbpiece05 = nbpiece05 + addpiece05;
    nbpiece02 = nbpiece02 + addpiece02;
    nbpiece01 = nbpiece01 + addpiece01;
    nbpiece005 = nbpiece005 + addpiece005;

    printf("Vous avez donnée %.2f€ \n", totalWalletPay);

    rembourcement = totalWalletPay - prix;

    while (rembourcement > 0) {

        if (rembourcement >= piece2 && nbpiece2 > 0) {
            rembourcement = rembourcement - piece2;
            nbpiece2 = nbpiece2 - 1;
            wpiece2 = wpiece2 + 1;
            printf("La machine a rendu une pièce de 2.00€\n");
        } 
        else if (rembourcement >= piece1 && nbpiece1 > 0) {
            rembourcement -= piece1;
            nbpiece1 = nbpiece1 - 1;
            wpiece1 = wpiece1 + 1;
            printf("La machine a rendu une pièce de 1.00€\n");
        } 
        else if (rembourcement >= piece05 && nbpiece05 > 0) {
            rembourcement -= piece05;
            nbpiece05 = nbpiece05 - 1;
            wpiece05 = wpiece05 + 1;
            printf("La machine a rendu une pièce de 0.50€\n");
        } 
        else if (rembourcement >= piece02 && nbpiece02 > 0) {
            rembourcement -= piece02;
            nbpiece02 = nbpiece02 - 1;
            wpiece02 = wpiece02 + 1;
            printf("La machine a rendu une pièce de 0.20€\n");
            
        } 
        else if (rembourcement >= piece01 && nbpiece01 > 0) {
            rembourcement -= piece01;
            nbpiece01 = nbpiece01 - 1;
            wpiece01 = wpiece01 + 1;
            printf("La machine a rendu une pièce de 0.10€\n");
            
        } 
        else if (rembourcement >= piece005 && nbpiece005 > 0) {
            rembourcement -= piece005;
            nbpiece005 = nbpiece005 - 1;
            wpiece005 = wpiece005 + 1;
            printf("La machine a rendu une pièce de 0.05€\n");
        }
        else{
            printf("Nous n'avons plus de monnais desolé");
            break;
        }
    }
    configwallet();
    machine();
}
machine(){
    achat();
}
main(){
    system("clear");
    piece1 = 1.0;
    piece2 = 2.0;
    piece05 = 0.5;
    piece02 = 0.2;
    piece01 = 0.1;
    piece005 = 0.05;

    baguettes = 0.90;
    painslong = 1.60;
    painauseigle = 2.20;
    painauchocolat = 1.10;
    croissant = 1.10;
    pizza = 2.80;
    pissaladiere = 2.80;

    nbbaguettes = 0;
    nbpainslong = 0;
    nbpainauseigle = 0;
    nbpainauchocolat = 0;
    nbcroissant = 0;
    nbpizza = 0;
    nbpissaladiere = 0;

    nbpiece1 = 0;
    nbpiece2 = 0;
    nbpiece05 = 0;
    nbpiece02 = 0;
    nbpiece01 = 0;
    nbpiece005 = 0;

    wpiece1 = 10;
    wpiece2 = 10;
    wpiece05 = 20;
    wpiece02 = 30;
    wpiece01 = 30;
    wpiece005 = 20;

    machine();
}