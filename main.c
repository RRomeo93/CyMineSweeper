
#include "header.h"


void main()
{
    system("clear");
    srand(time(NULL));
    struct timeval debut,fin;
    int* hauteur = malloc(sizeof(int));
    int* largeur = malloc(sizeof(int));
    int* nb_mines = malloc(sizeof(int));
    int* mine_restantes = malloc(sizeof(int));
    *mine_restantes = 0;
    

    presentation(hauteur,largeur,nb_mines);
    Case** grille = init_grille(mine_restantes,*hauteur,*largeur,*nb_mines);

    gettimeofday(&debut,NULL);
    bool resultat = jouer(grille,mine_restantes,(*hauteur),(*largeur));
    gettimeofday(&fin,NULL);
    affichage_fin(grille,(*hauteur),(*largeur));
    float Score = (( ((*nb_mines)-(*mine_restantes)) *(fin.tv_sec - debut.tv_sec)  )/(3)        );

    if (resultat) {
        printf("Bravo ! Vous avez gagnée la partie en %ld secondes. \n", (fin.tv_sec - debut.tv_sec));
        printf("\nVotre score est de %.0f\n", Score);  // score =( bomb find * time spent ) divided by 3
    }
    else{
        printf("Vous avez perdu la partie en %ld secondes, ils restaient %d mines. \n",(fin.tv_sec - debut.tv_sec),*mine_restantes);
        printf("\nVotre score est de %.0f\n", Score); // score =( bomb find * time spent ) divided by 3
        }
    
    
    
    
    FILE *f;
    char BestScore;
     f= fopen("DataScore.txt","rb+");
     float BestScore1= 0; // best score in the .txt
     float temp;
     fscanf (f, "%f", &BestScore1); 
     printf("\nLe meilleur score est de :%f\n",BestScore1);
     if(Score>BestScore1)
     
     {
     	
     	putw(Score,f);
     	
     	
     	BestScore1=Score;
     	printf("\nVous avez battu le record");
     }
     	
     fclose(f);
        
     
     
	    
   /*  while((BestScore=fgetc(f))!=EOF)
     {
	printf("%c",BestScore);
     }
	 fclose(f);
	*/
        
    libere(hauteur,largeur,nb_mines,mine_restantes,grille);
    
}
