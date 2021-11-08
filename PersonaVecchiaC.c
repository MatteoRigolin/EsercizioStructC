// @file PersonaVecchiaC.c
// @date file creato il 8/11/2021

/**
* @struct Persona_T
* @param char nome
* @param char cognome
* @param int età
* @fn Persona_T inserisci()
* @brief funzione che crea una nuova persona con nome, cognome e età
* @param Persona_T persona, nuova persona creata
* @return Persona_T: la funzione ritorna la nuova persona creata
* @fn Persona_T vecchio(Persona_T persone[])
* @brief funzione che determina la persona più vecchia
* @param int anniVecchio, età della persona più vecchia
* @param Persona_T personaVecchia, persona con l'età maggiore
* @return Persona_T: la funzione ritorna la persona più vecchia nell'array
* @date 8/11/2021
* @author Matteo Rigolin
* @file PersonaVecchiaC.c
*/

#include <stdio.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int età;
} Persona_T;

Persona_T inserisci()
{
    Persona_T persona;
    printf("Inserisci il nome della persona: ");
    scanf("%s", persona.nome);
    printf("Inserisci il cognome dalla persona: ");
    scanf("%s", persona.cognome);
    printf("Inserisci l'età della persona: ");
    scanf("%d", persona.età);
    return persona;
}

Persona_T vecchio(Persona_T persone[])
{
    int anniVecchio = 0;
    Persona_T personaVecchia;
    for (int i = 0; i < 4; i++)
    {
        if (persone[i].età > anniVecchio)
        {
            anniVecchio = persone[i].età;
            personaVecchia = persone[i];
        }
    }
    return personaVecchia;
}

int main(int argc, char *argv[])
{
    Persona_T arrayPersone[4];
    for (int i = 0; i < 4; i++)
    {
        arrayPersone[i] = inserisci();
    }
    Persona_T personaPiùVecchia;
    personaPiùVecchia = vecchio(arrayPersone);
    printf("La persona più vecchia è  %s %s %d\n", personaPiùVecchia.nome, personaPiùVecchia.cognome, personaPiùVecchia.età);
    return 0;
}