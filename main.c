#include <stdio.h>
#include <string.h>





struct Criatura {
    char name[30];
    int age;
    int energy;
    int happiness;
    int intelligence;
    int consciousness;
};


void mostrarCriatura(struct Criatura g)

{
    printf("--- Status: %s ---\n", g.name);
    printf("Idade: %d dias\n", g.age);
    printf("Energia: %d/100\n", g.energy);
    printf("Felicidade: %d/100\n", g.happiness);
    printf("Inteligencia: %d\n", g.intelligence);
    printf("Consciencia Pol: %d\n", g.consciousness);
    printf("-------------------------\n\n");
}


int main(void)
{
    printf("=== DIGITAL GIBBLES ===\n\n");


    struct Criatura gibbles;
    strcpy(gibbles.name, "Gibbles");
    gibbles.age = 0;
    gibbles.energy = 100;
    gibbles.happiness = 80;
    gibbles.intelligence = 1;
    gibbles.consciousness = 0;

    printf("%s nasceu!\n\n", gibbles.name);
    mostrarCriatura(gibbles);

   

    struct Criatura bibbles;
    strcpy(bibbles.name, "Bibbles");
    bibbles.age = 0;
    bibbles.energy = 90;
    bibbles.happiness = 60;
    bibbles.intelligence = 3;
    bibbles.consciousness = 5;

    printf("%s nasceu!\n\n", bibbles.name);
    mostrarCriatura(bibbles);



    struct Criatura pipples;
    strcpy(bibbles.name, "Pibbles");
    pipples.age = 0;
    pipples.energy = 20;
    pipples.happiness = 40;
    pipples.intelligence = 1;
    pipples.consciousness = 2;

    printf("%s nasceu!\n\n", pipples.name);
    mostrarCriatura(pipples);



    return 0;

}
