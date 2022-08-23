#include <stdio.h>

int main(void)
{
    int min_note = 20;
    int max_note = 0;
    int nb_note = 0;
    int total_note = 0;
    int note = 0;
    float moyenne;

    printf("Pour sortir de la boucle, saisir une note > 20\n");
    printf("Saisissez vos notes : \n");

    do
    {
        printf("Votre note : \n");
        scanf("%d",&note);
        if (note >= 0 && note <= 20)
        {
            total_note +=note;
            nb_note++;
            if (note <= min_note)
            {
                min_note = note;
            } else if (note >= max_note)
            {
                max_note = note;
            }
        }

        printf("%d\n",total_note);

    }
    while (note >= 0 && note <= 20);
    printf("tt : %d\n",total_note);

    printf("Le nombre total de note entree est : %d\n", nb_note);
    nb_note-= 2 ;
    total_note = (total_note - min_note) - max_note;
    moyenne = total_note / nb_note;

    printf("la moyenne tronquee est : %f/20\n", moyenne);

    return 0;
}

/*  Correction :
 *
 * #include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main() {
	int nbNotes;	                // Entier : nbNotes
	float note, sommeDesNotes, noteMin, noteMax; // Réels : note, sommeDesNotes, noteMin, noteMax

	// Afficher : Entrez des notes (entre 0 et 20)
	// Afficher  : Pour stopper, saisir une note hors de cet intervalle.
	printf("Entrez des notes (entre 0 et 20)\nPour stopper, saisir une note hors de cet intervalle.\n");

	nbNotes = 0;		// nbNotes <-- 0
	sommeDesNotes = 0;  // sommeDesNotes <-- 0
	noteMax = 0;
	noteMin = 20;

	do {										// Faire
		scanf("%f", &note);						//		Entrer : note
		nbNotes++;								//		nbNotes <-- nbNotes + 1
		sommeDesNotes = sommeDesNotes + note;   //      sommeDesNotes <-- sommeDesNotes + note

		if((note > noteMax) && (note <= 20)) noteMax = note;
		if((note < noteMin) && (note >= 0)) noteMin = note;

	} while((note >= 0) && (note <= 20));		// Tant que (note >= 0) ET (note <= 20)

	nbNotes--;  // La dernière note ne compte pas (en dehors de l'intervalle 0 - 20)
	sommeDesNotes = sommeDesNotes - note;   // La dernière note ne compte pas

	if(nbNotes > 0) {	    // Si(nbNotes > 0)
							//		Afficher : Vous avez saisi nbNotes note(s)
		printf("Vous avez saisi %d note(s)\n", nbNotes);
		printf("La note la plus basse est : %.2f\n", noteMin);
		printf("La note la plus haute est : %.2f\n", noteMax);
		printf("La moyenne des notes est : %.2f\n", sommeDesNotes / nbNotes);
		printf("La moyenne tronquée est : %.2f\n", (sommeDesNotes - noteMin - noteMax) / (nbNotes - 2));
	}
	else {					// Sinon
							//		Afficher : ERREUR : Vous n'avez pas saisi de note.
		printf("ERREUR : Vous n'avez pas saisi de note.\n");
	}

	return 0;
}
 *
 */