#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <stdbool.h>
#include <string.h>
typedef struct Case {
    int visible;
    bool bombe;
    int bombe_alentour;
    bool explored;
    int x;
    int y;

} Case ;

void rec_explore(Case* c,int hauteur,int largeur, Case** grille);
int bombe_alentour(Case c,int hauteur,int largeur,Case** grille);
void affichage_fin(Case** grille,int hauteur, int largeur);
void affichage(Case** grille, int* mine_restantes, int hauteur, int largeur);
void presentation(int* hauteur,int* largeur, int* nb_mines);
void libere(int* a, int* b, int* c, int* d, Case** grille);
bool check(Case** grille,int hauteur,int largeur);
bool jouer(Case** grille,int* mine_restantes,int hauteur,int largeur);
Case** init_grille(int* nb_mines,int hauteur,int largeur,int nb_mines_max);


