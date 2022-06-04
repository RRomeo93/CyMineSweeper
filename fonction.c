#include "header.h"





/* Recursive function that will check if around a square (including the diagonals) there is a bomb nearby.
   This function will recall itself in order to check also the squares around the previous ones.
   This function will run until it reveals to the user all the fields where there are no bombs
   

*/


void rec_explore(Case* c,int hauteur,int largeur, Case** grille) /* Function that takes care of displaying all the squares without bombs around a selected square without bombs, takes in arguments the game grid, the square that must be explored as well as the height and width of the grid */
{
    c->visible = 0; /* pass the box in visible */
    c->explored = true;
    int x = c->x;
    int y = c->y; 

    if (x==0 && y==0) /* Case of the top left box */ 
    {
        if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y].bombe)
        {
            (&grille[x+1][y])->visible = 0; 
        }

        if (grille[x+1][y+1].bombe == false && grille[x+1][y+1].explored == false && grille[x+1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y+1].bombe) 
        {
            (&grille[x+1][y+1])->visible = 0;
        }

        if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y+1].bombe)
        {
            (&grille[x][y+1])->visible = 0;
        }
        return;
    }

    if (x==hauteur-1 && y==0)	/*Case of the box at the bottom left */ 
    {
        if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y].bombe)
        {
            (&grille[x-1][y])->visible = 0; 
        }

        if (grille[x-1][y+1].bombe == false && grille[x-1][y+1].explored == false && grille[x-1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y+1].bombe) 
        {
            (&grille[x-1][y+1])->visible = 0;
        }

        if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y+1].bombe)
        {
            (&grille[x][y+1])->visible = 0;
        }
        return;
    }

    if (x==hauteur-1 && y==largeur-1) /* Case of the box at the bottom right */ 
    {
        if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y].bombe)
        {
            (&grille[x-1][y])->visible = 0; 
        }

        if (grille[x-1][y-1].bombe == false && grille[x-1][y-1].explored == false && grille[x-1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y-1].bombe) 
        {
            (&grille[x-1][y-1])->visible = 0;
        }

        if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y-1].bombe)
        {
            (&grille[x][y-1])->visible = 0;
        }
        return;
    }

    if (x==0 && y==largeur-1) /* Case of the box on the top right */ 
    {
        if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y].bombe)
        {
            (&grille[x+1][y])->visible = 0; 
        }

        if (grille[x+1][y-1].bombe == false && grille[x+1][y-1].explored == false && grille[x+1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y-1].bombe) 
        {
            (&grille[x+1][y-1])->visible = 0;
        }

        if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y-1].bombe)
        {
            (&grille[x][y-1])->visible = 0;
        }
        return;
    }

    if (x==0) /* Case of a box on the high side */ 
    {
        if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y].bombe)
        {
            (&grille[x+1][y])->visible = 0; 
        }

        if (grille[x+1][y+1].bombe == false && grille[x+1][y+1].explored == false && grille[x+1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y+1].bombe) 
        {
            (&grille[x+1][y+1])->visible = 0;
        }

        if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y+1].bombe)
        {
            (&grille[x][y+1])->visible = 0;
        }

        if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y-1].bombe)
        {
            (&grille[x][y-1])->visible = 0;
        }

        if (grille[x+1][y-1].bombe == false && grille[x+1][y-1].explored == false && grille[x+1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y-1].bombe)
        {
            (&grille[x+1][y-1])->visible = 0;
        }

        return;
    }

    if (y==0) /* Case of a box on the left side */ 
    {
        if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y].bombe)
        {
            (&grille[x+1][y])->visible = 0; 
        }

        if (grille[x+1][y+1].bombe == false && grille[x+1][y+1].explored == false && grille[x+1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y+1].bombe) 
        {
            (&grille[x+1][y+1])->visible = 0;
        }

        if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y+1].bombe)
        {
            (&grille[x][y+1])->visible = 0;
        }

        if (grille[x-1][y+1].bombe == false && grille[x-1][y+1].explored == false && grille[x-1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y+1].bombe)
        {
            (&grille[x-1][y+1])->visible = 0;
        }

        if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y].bombe)
        {
            (&grille[x-1][y])->visible = 0;
        }

        return;
    }

    if (x==hauteur-1) /* Case of a box on the low side */ 
    {
        if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y].bombe)
        {
            (&grille[x-1][y])->visible = 0; 
        }

        if (grille[x-1][y+1].bombe == false && grille[x-1][y+1].explored == false && grille[x-1][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y+1].bombe) 
        {
            (&grille[x-1][y+1])->visible = 0;
        }

        if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y+1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y+1].bombe)
        {
            (&grille[x][y+1])->visible = 0;
        }

        if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y-1].bombe)
        {
            (&grille[x][y-1])->visible = 0;
        }

        if (grille[x-1][y-1].bombe == false && grille[x-1][y-1].explored == false && grille[x-1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y-1].bombe)
        {
            (&grille[x-1][y-1])->visible = 0;
        }

        return;
    }

    if (y==largeur-1) /* Cas d'une case sur le côté droit */ 
    {
        if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y].bombe)
        {
            (&grille[x+1][y])->visible = 0; 
        }

        if (grille[x+1][y-1].bombe == false && grille[x+1][y-1].explored == false && grille[x+1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x+1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x+1][y-1].bombe) 
        {
            (&grille[x+1][y-1])->visible = 0;
        }

        if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x][y-1].bombe)
        {
            (&grille[x][y-1])->visible = 0;
        }

        if (grille[x-1][y-1].bombe == false && grille[x-1][y-1].explored == false && grille[x-1][y-1].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y-1],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y-1].bombe)
        {
            (&grille[x-1][y-1])->visible = 0;
        }

        if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
        {
            rec_explore(&grille[x-1][y],hauteur,largeur,grille);
        }  
        else if (!grille[x-1][y].bombe)
        {
            (&grille[x-1][y])->visible = 0;
        }

        return;
    }

    /* General case of any square */

    if (grille[x-1][y].bombe == false && grille[x-1][y].explored == false && grille[x-1][y].bombe_alentour == 0)
    {
        rec_explore(&grille[x-1][y],hauteur,largeur,grille);
    }  
    else if (!grille[x-1][y].bombe)
    {
    (&grille[x-1][y])->visible = 0;
    }

    if (grille[x-1][y-1].bombe == false && grille[x-1][y-1].explored == false && grille[x-1][y-1].bombe_alentour == 0)
    {
        rec_explore(&grille[x-1][y-1],hauteur,largeur,grille);
    }  
    else if (!grille[x-1][y-1].bombe)
    {
    (&grille[x-1][y-1])->visible = 0;
    }

    if (grille[x][y-1].bombe == false && grille[x][y-1].explored == false && grille[x][y-1].bombe_alentour == 0)
    {
        rec_explore(&grille[x][y-1],hauteur,largeur,grille);
    }  
    else if (!grille[x][y-1].bombe)
    {
    (&grille[x][y-1])->visible = 0;
    }

    if (grille[x+1][y-1].bombe == false && grille[x+1][y-1].explored == false && grille[x+1][y-1].bombe_alentour == 0)
    {
        rec_explore(&grille[x+1][y-1],hauteur,largeur,grille);
    }  
    else if (!grille[x+1][y-1].bombe)
    {
    (&grille[x+1][y-1])->visible = 0;
    }

    if (grille[x+1][y].bombe == false && grille[x+1][y].explored == false && grille[x+1][y].bombe_alentour == 0)
    {
        rec_explore(&grille[x+1][y],hauteur,largeur,grille);
    }  
    else if (!grille[x+1][y].bombe)
    {
    (&grille[x+1][y])->visible = 0;
    }

    if (grille[x+1][y+1].bombe == false && grille[x+1][y+1].explored == false && grille[x+1][y+1].bombe_alentour == 0)
    {
        rec_explore(&grille[x+1][y+1],hauteur,largeur,grille);
    }  
    else if (!grille[x+1][y+1].bombe)
    {
    (&grille[x+1][y+1])->visible = 0;

        }

    if (grille[x][y+1].bombe == false && grille[x][y+1].explored == false && grille[x][y+1].bombe_alentour == 0)
    {
        rec_explore(&grille[x][y+1],hauteur,largeur,grille);
    }  
    else if (!grille[x][y+1].bombe)
    {
    (&grille[x][y+1])->visible = 0;
    }

    if (grille[x-1][y+1].bombe == false && grille[x-1][y+1].explored == false && grille[x-1][y+1].bombe_alentour == 0)
    {
        rec_explore(&grille[x-1][y+1],hauteur,largeur,grille);
    }  
    else if (!grille[x-1][y+1].bombe)
    {
    (&grille[x-1][y+1])->visible = 0;
    }


    return;

}


int bombe_alentour(Case c,int hauteur,int largeur,Case** grille)  /* Function that displays the number of bombs around a square, it takes into account the game grid, the height and width of it and the square in question */
{
    int nb_bombe=0;
    int x = c.x;
    int y = c.y;

    if (c.x == 0 && c.y == 0) /* Case of the top left box */ 
    {
        if (grille[x+1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y+1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;
    }
    if (c.x == 0 && c.y == largeur-1) /* Case of the box on the top right */ 
    {
        if (grille[x+1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y-1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;
    }
    if (c.x == hauteur-1 && c.y == largeur-1) /* Case of the box at the bottom right */ 
    {
        if (grille[x-1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y-1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;
    }
    if (c.x == hauteur-1 && c.y == 0) /* Case of the box at the bottom left */ 
    {
        if (grille[x-1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y+1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;;
    }

    if (c.x ==0 ) /* Case of a box on the high side  */ 
    {
        if (grille[x][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y-1].bombe)
        {
            nb_bombe++;
        }
    
        return nb_bombe;
    }  
    if (c.x == hauteur-1) /*  Case of a box on the low side */ 
    {
        if (grille[x][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y-1].bombe)
        {
            nb_bombe++;
        }
    
        return nb_bombe;
    }
    if (c.y ==0 ) /*  Case of a box on the left side */ 
    {
        if (grille[x+1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y+1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y+1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;
    }
    if (c.y == largeur-1) /* Case of a box on the right side */ 
    {
        if (grille[x+1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y].bombe)
        {
            nb_bombe++;
        }
        if (grille[x][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x+1][y-1].bombe)
        {
            nb_bombe++;
        }
        if (grille[x-1][y-1].bombe)
        {
            nb_bombe++;
        }
        return nb_bombe;   
    }

    /* General case of any case */

    if (grille[x-1][y].bombe)
    {
        nb_bombe++;
    }
    if (grille[x-1][y+1].bombe)
    {
        nb_bombe++;
    }
    if (grille[x][y+1].bombe)
    {
        nb_bombe++;
    }
    if (grille[x+1][y+1].bombe)
    {
        nb_bombe++;
    }
    if (grille[x+1][y].bombe)
    {
        nb_bombe++;
    }
    if (grille[x+1][y-1].bombe)
    {
        nb_bombe++;
    }
    if (grille[x][y-1].bombe)
    {
        nb_bombe++;
    }
    if (grille[x-1][y-1].bombe)
    {
        nb_bombe++;
    }
    return nb_bombe;
}


void affichage_fin(Case** grille,int hauteur, int largeur) /* Function that displays the grid at the end of the game with all the bombs revealed, takes in arguments the grid and its height and width */
{
    for (int i=0;i<hauteur;i++)
    {
        for (int j=0;j<largeur;j++)
        {
            grille[i][j].visible = 0;
        }
    }

    system("clear");
    printf(" \n     ");
    for (int i=0;i<largeur;i++)
    {
        if (i<10)
        {	
        	printf(" %d  ",i);
        }
        if (i==10)
        {
        	printf("%d ",i);
        }
        if (i>10)
        {
        printf(" %d ",i);
        }
    }
    printf("\n    ");
    for (int i=0;i<largeur;i++)
    {
        printf(" ___");
    }
    printf("\n");
    for (int i=0;i<hauteur;i++)
    {
        if (i<10)
        {
        printf("%d  -", i);
        }
        else
        {
        printf("%d -",i);
        }
        for (int j=0;j<largeur;j++)
        {
            if ((grille[i][j].visible==0) && grille[i][j].bombe==false)
            {
                printf("| %d ", grille[i][j].bombe_alentour);
            }
            if (grille[i][j].visible==1)
            {
                printf("|   ");
            }
            if (grille[i][j].visible==2)
            {
                printf("| ");
                printf("\33[38;2;255;255;0m"); //yellow
                printf("X ");
                printf("\33[38;2;255;255;255m"); // back to white
            }
            if (grille[i][j].bombe)
            {
            	 
            	 
            	 printf("| ");
            	 printf("\33[38;2;255;0;0m"); //red 
                printf("# ");
                printf("\33[38;2;255;255;255m"); // back to white
            }
        }
        printf("|");
        if (i<10)
        {
        	printf("- %d", i);
        }
        else
        {
        	printf("- %d",i);
        }
        if (i != hauteur-1) 
        {
        	printf("\n");
        }
    }
    printf("\n    ");
    for (int i=0;i<largeur;i++)
    {
        printf(" ⎻⎻⎻");
    }
    printf("\n");
    printf("     ");
    for (int i=0;i<largeur;i++)
    {
        if (i<10)
        {
        	printf(" %d  ",i);
        }
        if (i==10)
        {
        	printf("%d ",i);
        }
        if (i>10)
        {
        	printf(" %d ",i);
        }
    }
    printf("\n");
    printf("\n");
}

void affichage(Case** grille, int* mine_restantes, int hauteur, int largeur) /* Function that displays the grid during the game, takes as arguments the grid and its height and width */
{
    system("clear");
    printf(" \n     ");
    for (int i=0;i<largeur;i++)
    {
        if (i<10)
        {
        	printf(" %d  ",i);
        }
        if (i==10)
        {
        	printf("%d ",i);
        }
        if (i>10)
        {
        	printf(" %d ",i);
        }
    }
    printf("\n    ");
    for (int i=0;i<largeur;i++)
    {
        printf(" ___");
    }
    printf("\n");
    for (int i=0;i<hauteur;i++)
    {
        if (i<10)
        {
        	printf("%d  -", i);
        }
        else
        {
        	printf("%d -",i);
        }
        for (int j=0;j<largeur;j++)
        {
            if ((grille[i][j].visible==0) && grille[i][j].bombe==false)
            {
                printf("| %d ", grille[i][j].bombe_alentour);
            }
            if (grille[i][j].visible==1)
            {
                printf("|   ");
            }
            if (grille[i][j].visible==2)
            {
                                printf("| ");
                printf("\33[38;2;255;255;0m"); //yellow
                printf("X ");
                printf("\33[38;2;255;255;255m"); // back to white
            }
        }
        printf("|");
        if (i<10)
        {
        	printf("- %d", i);
        }
        else
        {
        	printf("- %d",i);
        }
        if (i != hauteur-1) 
        {
        	printf("\n");
        }
    }
    printf("\n    ");
    for (int i=0;i<largeur;i++)
    {
        printf(" ⎻⎻⎻");
    }
    printf("\n");
    printf("     ");
    for (int i=0;i<largeur;i++)
    {
        if (i<10)
        {
        	printf(" %d  ",i);
        }
        if (i==10)
        {
        	printf("%d ",i);
        }
        if (i>10)
        {
        	printf(" %d ",i);
        }
    }
    printf("\n ");
    printf("Il(s) reste(nt) encore %d mine(s).\n", *mine_restantes);
}

// VOID FUNCTION THAT MANAGES THE FIRST MENU WHERE THE USER ENTERS THE INPUTS
void presentation(int* hauteur,int* largeur, int* nb_mines)
{
    int choix;
    printf("--------------------------------------------------------\n");
    do{
   	system("clear");
    	printf("Choisissez entre une partie classique ou partie personnalisée (choix des dimensions)\n");printf("1. Partie classique\n");printf("2. Partie personnalisée\n");

	while(scanf("%d",&choix) != 1)
       {
		printf("\nSaisir votre choix, attention saisir un entier: ");
		while(getchar() != '\n');
       }
      
    }while(choix<1 || choix>2);
    if (choix == 2){
        do{
		system("clear");
		printf("Choisissez la hauteur de la grille entre 6 cases et 32 ! \n");
		while(scanf("%d",hauteur) != 1)
	    	{
			printf("\nSaisir votre choix, attention saisir un entier: ");
			while(getchar() != '\n');
	        }
        }while(*hauteur<6 || *hauteur>32);
        do{
		  system("clear");
		  printf("Choisissez la largeur de la grille entre 6 cases et 32 !\n") ;
		  while(scanf("%d",largeur) != 1)
	          {
			printf("\nSaisir votre choix, attention saisir un entier: ");
		   	while(getchar() != '\n');
	          }
        }while(*largeur <6 || *largeur>32);
        
        
        
        
        do{
        	system("clear"); // refresh the consol
        	printf("Choisissez le nombre de mines dans le jeu (le maximun étant %d)\n",(*hauteur)*(*largeur)/3); 
                while(scanf("%d",nb_mines) != 1)
    		{
        		printf("\nSaisir votre choix, attention saisir un entier: ");
        		while(getchar() != '\n');
    		}
        }while(*nb_mines < 1 || *nb_mines > (*hauteur)*(*largeur)/3);
        
    }
    else
    {
        do{
        	system("clear");
        	printf("Choisissez la difficulté de la partie \n");
        	printf("1. Débutante (9*9 cases et 10 mines)\n");
        	printf("2. Intermédiaire (16*16 et 40 mines)\n");  	
          	while(scanf("%d",&choix) != 1)
		{
			printf("\nSaisir votre choix, attention saisir un entier: ");
		      	while(getchar() != '\n');
		}
          }while(choix < 1 || choix > 2);
        if (choix == 1)
        {
            *hauteur = 9;
            *largeur = 9;
            *nb_mines = 10;
        }
        else
        {
            *hauteur = 16;
            *largeur = 16;
            *nb_mines = 40;
        }
    }
    system("clear");
    printf("Le jeu est donc sous le format %dx%d avec %d cases et %d mines\n",*hauteur,*largeur,(*hauteur)*(*largeur),*nb_mines);
    printf("--------------------------------------------------------\n");
}

// VOID FUNCTION FREES THE MEMORY
void libere(int* a, int* b, int* c, int* d, Case** grille)
{
    for (int i=0;i<(*a);i++)
    {
        free(grille[i]);
    }
    free(grille);
    free(a);
    free(b);
    free(c);
    free(d);
}

bool check(Case** grille,int hauteur,int largeur)
{
    for (int i=0;i<hauteur;i++)
    {
        for (int j=0;j<largeur;j++)
        {
            if (grille[i][j].bombe == false && grille[i][j].visible != 0)
            {
            	return false;
            }
            if (grille[i][j].bombe == true && grille[i][j].visible != 2)
            {
            	return false;
            }
        }
    }
    return true;
}

// BOOLEAN FUNCTION THAT ALLOWS THE USER TO PLAY AND ENTER INPUTS 
// IT ALSO TAKES CARE OF SECURING THE SCANF AND ASK AGAIN IF THE USER ENTERS ANYTHING

bool jouer(Case** grille,int* mine_restantes,int hauteur,int largeur)
{
    bool jeu = true;
    int reponse;
    int x;
    int y;
    while (jeu){
        printf("\n");
        affichage(grille,mine_restantes,hauteur,largeur);
        printf("\n");
    do{
    	printf("Ecrivez 1 si vous voulez dévoiler une case, 2 si vous voulez posez un drapeau.\n");
   	while(scanf("%d",&reponse) != 1)
       {
        	printf("Saisir votre choix un entier svp : ");
        	while(getchar() != '\n');
       }
   
   
   
      }while(reponse > 2 || reponse < 1);
      do{
      	  printf("Entrez les coordonnées de la case sur laquelle vous voulez agir. (Numéro de ligne puis numéro de colonne.)\n");
          while(scanf("%d",&x) != 1)
    	  {
          printf("Saisir votre choix un entier svp : ");
          while(getchar() != '\n');
         } 
         while(scanf("%d",&y) != 1)
    	 {
        	printf("Saisir votre choix un entier svp : ");
        	while(getchar() != '\n');
         }  
          
        



          
        }while(x<0 || x>hauteur-1 || y<0 || y>largeur-1);
        
        
        if (reponse==1)
        {
            if (grille[x][y].bombe)
            {
                return false;
            }
            if (grille[x][y].bombe_alentour == 0)
            {
                rec_explore(&grille[x][y],hauteur,largeur,grille);
            }
            else{grille[x][y].visible=0;}
        }
        else
        {
            if (grille[x][y].visible == 2){
            	grille[x][y].visible = 1;
            	*mine_restantes = *mine_restantes +1;
            	 }
            else if (grille[x][y].visible == 1)
            	{
            	grille[x][y].visible = 2;
            	*mine_restantes = *mine_restantes -1;
            	}
        }
        if (check(grille,hauteur,largeur))
        	{
        	return true;
        	};
    }
}

Case** init_grille(int* nb_mines,int hauteur,int largeur,int nb_mines_max) /* Function that creates the grid at the beginning of the game according to the parameters entered by the user in the presentation function, takes as arguments the number of mines, the height and width of the grid */
{
    int compteur = 0;
    Case** grille = malloc(hauteur*sizeof(Case*));

    for (int i=0;i<hauteur;i++)
    {
        grille[i] = malloc(largeur*sizeof(Case));
    }

    do
    {
        compteur = 0;
        for (int i=0;i<hauteur;i++)
        {
            for (int j=0;j<largeur;j++)
            {
                int r = rand () % 4;
                if (r == 0 && compteur < nb_mines_max)
                {
                    grille[i][j].bombe = true;
                    compteur++;
                }
                else{
                    grille[i][j].bombe = false;
                }
                grille[i][j].x = i;
                grille[i][j].y = j;
                grille[i][j].explored= false;
                grille[i][j].visible=1;
            }
        }
    }while(compteur != nb_mines_max);

    for (int i=0;i<hauteur;i++)
    {
        for (int j=0;j<largeur;j++)
        {
            grille[i][j].bombe_alentour = bombe_alentour(grille[i][j],hauteur,largeur,grille);
        }
    }

    *nb_mines = compteur;
    return grille;
}



