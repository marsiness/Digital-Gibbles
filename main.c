#include <stdio.h>
#include <string.h>
#include <ncurses/ncurses.h>



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
    printf("Consciencia: %d\n", g.consciousness);
    printf("-------------------------\n\n");
}

int menuInicial(void) {
    clear();
    mvprintw(2, 5, "===========================================");
    mvprintw(3, 5, "==============DIGITAL GIBBLES==============");
    mvprintw(4, 5, "===========================================");
    
    mvprintw(6, 22, "  /^ ^\\  ");  
    mvprintw(7, 22, " / 0 0 \\ ");
    mvprintw(8, 22, " V\\ Y /V ");
    mvprintw(9, 22, "   \" \"   ");

    mvprintw(11, 8, "Pressione qualquer tecla para iniciar.");
   
    refresh();
    getch();
    endwin();
}
int main(void)
{
    initscr();
    noecho();
    curs_set(0);

 menuInicial();


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


    return 0;

}
