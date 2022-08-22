#include <stdio.h>

int main(void)
{
    int nb1 = 0;
    int nb2;
    int i = 0;
    float moyenne = 0;

    do {
        printf("(pour quitter saisissez un nombre > 20)\n");
        printf("Saisissez vos notes  :\n");
        scanf("%d", &nb1);
        if (nb1 >=0 && nb1 <=20)
        {
            nb2 = nb2+nb1;
            i++;
        }
    }
    while (nb1 >=0 && nb1 <=20);

    if (i == 0)
    {
        printf("Aucune note n'a ete saisie");
    }
    else {
        moyenne = nb2 / i;
        printf("Vous avez enregistre %d notes\n",i);
        printf("La moyenne de ces notes est de : %f/20\n", moyenne);
    }

    return 0;
}

/*  Correction :
 *
 * #include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main() {
	int nbNotes;	                // Entier : nbNotes
	float note, sommeDesNotes;	    // Réels : note, sommeDesNotes

	// Afficher : Entrez des notes (entre 0 et 20)
	// Afficher  : Pour stopper, saisir une note hors de cet intervalle.
	printf("Entrez des notes (entre 0 et 20)\nPour stopper, saisir une note hors de cet intervalle.\n");

	nbNotes = 0;		// nbNotes <-- 0
	sommeDesNotes = 0;      // sommeDesNotes <-- 0

	do {										// Faire
		scanf("%f", &note);						//		Entrer : note
		nbNotes++;								//		nbNotes <-- nbNotes + 1
		sommeDesNotes = sommeDesNotes + note;   //      sommeDesNotes <-- sommeDesNotes + note
	} while((note >= 0) && (note <= 20));		// Tant que (note >= 0) ET (note <= 20)

	nbNotes--;  // La dernière note ne compte pas (en dehors de l'intervalle 0 - 20)
	sommeDesNotes = sommeDesNotes - note;   // La dernière note ne compte pas

	if(nbNotes > 0) {	    // Si(nbNotes > 0)
							//		Afficher : Vous avez saisi nbNotes note(s)
		printf("Vous avez saisi %d note(s)\n", nbNotes);
		printf("La moyenne des notes est : %.2f\n", sommeDesNotes / nbNotes);
	}
	else {					// Sinon
							//		Afficher : ERREUR : Vous n'avez pas saisi de note.
		printf("ERREUR : Vous n'avez pas saisi de note.\n");
	}

	return 0;
}
 *
 *
 */