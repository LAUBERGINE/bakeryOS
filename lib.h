#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

    #ifdef _WIN32
        #include <windows.h>
    #elif __linux__
        #include <stdio.h>
        #include <stdlib.h>
    #endif

    #define PIECE1 1.0
    #define PIECE2 2.0
    #define PIECE05 0.5
    #define PIECE02 0.2
    #define PIECE01 0.1
    #define PIECE005 0.05

    #define BAGUETTES 0.90
    #define PAINS_LONG 1.60
    #define PAINS_AU_SEIGLE 2.20
    #define PAINS_AU_CHOCOLAT 1.10
    #define CROISSANTS 1.10
    #define PIZZAS 2.80
    #define PISSALADIERES 2.80

    typedef struct {
        int nbbaguette;
        int nbpainslong;
        int nbpainauseigle;
        int nbpainauchocolat;
        int nbcroissant;
        int nbpizza;
        int nbpissaladiere;
    } MachineReserve;

    typedef struct {
        int nbpiece1;
        int nbpiece2;
        int nbpiece05;
        int nbpiece02;
        int nbpiece01;
        int nbpiece005;
    } MachineCaisse;
    
    void maReserve(MachineReserve *reserve);
    void maCaisse(MachineCaisse *caisse);
    void giveMonnai(MachineCaisse *caisse, MachineReserve *reserve, float prix, int id, int qtt);
    void procClear(int idClear);
    void procPaiement(MachineCaisse *caisse, MachineReserve *reserve, float prix, int id, int qtt);
    int mdpVerif(int mdp);

#endif