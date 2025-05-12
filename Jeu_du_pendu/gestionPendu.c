#include "gestionPendu.h"

int afficherMenu()
{
	/* A completer */

}

void afficherPendu(int nroErreur)
{
	/* A completer */

}
void afficherLettre(char *histo, int nbLettre)
{
	int i;
	printf("\nLettres deja proposees : ");
	/* A completer */
	printf("\n");
}

int motEstTrouve(char *motATtrouver, char *motPropose){
	return(strcmp(motATtrouver,motPropose));
}

int placerLettre(char *motATrouver,char *motCourant,char lettrePropose){
	int flag=1;
	int i;
	for(i=0;i<strlen(motATrouver);i++){
		/* A completer */
	}
	return flag;
}

int verifierLettrePropose(char *lettresProposees, int nbLettreProposee, char lettre)
{
	int flag=1;
	int i;
	for(i = 0; i<nbLettreProposee;i++){
		if ((lettre == lettresProposees[i]) || (lettre<'a' || lettre>'z') ){
			flag=0;
		}
	}
	return flag;

}




void msleep(unsigned int maxTime)
{
   
    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000)
    {
        do
        {
            secondes++;
            maxTime -= 1000;
        }
        while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}
/**
 * Génère une valeur aléatoire entre 0 et maxAlea - 1.
 * @param maxAlea La valeur maximale (non incluse) pour l'aléatoire.
 * @return Une valeur aléatoire dans [0, maxAlea[.
 */
unsigned int aleatoire(unsigned int maxAlea)
{
    struct timeval tv;
    float a, b;

    // Obtenir l'heure actuelle en secondes et microsecondes
    gettimeofday(&tv, NULL);
    unsigned long seed = tv.tv_sec * 1000000 + tv.tv_usec; // Timestamp en microsecondes
    srand(seed); // Initialisation de la graine aléatoire

    a = rand();                     // Générer un nombre aléatoire
    b = (maxAlea * a) / RAND_MAX;   // Réduire à l'intervalle [0, maxAlea[
    usleep(250000);                 // Pause de 250 millisecondes (250 000 microsecondes)
    return (unsigned int)b;
}

void initialiserMot(char *motCourant,int longueurMot){
	int i;
	/* A completer */
        // ajout du \0 apres les - pour que le tableau soit une chaine de caractere
	motCourant[longueurMot]='\0';
}
