#include <stdio.h>
#include <string.h>
#include <ncurses/ncurses.h>

struct Criatura
{
    char name[30];
    int age;
    int energy;
    int happiness;
    int intelligence;
    int consciousness;
};



int menuInicial(void)
{
    clear();
    mvprintw(2, 5, "===========================================");
    mvprintw(3, 5, "==============DIGITAL GIBBLES==============");
    mvprintw(4, 5, "===========================================");

    mvprintw(6, 22, "  /^ ^\\  ");
    mvprintw(7, 22, " / 0 0 \\ ");
    mvprintw(8, 22, " V\\ Y /V ");

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

    struct Criatura bibbles;
    strcpy(bibbles.name, "Bibbles");
    bibbles.age = 0;
    bibbles.energy = 90;
    bibbles.happiness = 60;
    bibbles.intelligence = 3;
    bibbles.consciousness = 5;

    initscr();
    noecho();
    curs_set(0);

    int opcao = 0;
    while (opcao != 5)
    {
        clear();

        mvprintw(0, 5, " .-----------------------------------------------------. ");
        mvprintw(1, 5, "/  ___________________________________________________  \\");
        mvprintw(2, 5, "| |                                                   | |");
        mvprintw(3, 5, "| |             HAPPY HOUSE OF GIBBLES                | |");
        mvprintw(4, 5, "| |___________________________________________________| |");

        mvprintw(5, 5, "| |   (  )   .-.           *     (   )   \\|/      *   | |");
        mvprintw(6, 5, "| |  (____) (___)   *           (     )  -*-          | |");
        mvprintw(7, 5, "| |      (###)                                (###)   | |");
        mvprintw(8, 5, "| |     (#####)               *         *    (#####)  | |");
        mvprintw(9, 5, "| |       | |       *                          | |    | |");
        mvprintw(10, 5, "| |      <x>                                          | |");
        mvprintw(11, 5, "| |    /^ ^\\                       /^ ^\\              | |");
        mvprintw(12, 5, "| |   / 0 0 \\                     / 0 0 \\             | |");
        mvprintw(13, 5, "| |   V\\ Y /V                     V\\ Y /V             | |");
        mvprintw(14, 5, "| |wwWWwWWwwWWwwWWwwWWwwWWwwWWwwWWwwWWwwWWwwWWwwWWwwWW| |");

        mvprintw(16, 7, "--- %s ---", bibbles.name);
        mvprintw(17, 7, "Energia:      %d/100", bibbles.energy);
        mvprintw(18, 7, "Felicidade:   %d/100", bibbles.happiness);
        mvprintw(19, 7, "Inteligencia: %d", bibbles.intelligence);
        mvprintw(20, 7, "Consciencia:  %d", bibbles.consciousness);

        mvprintw(16, 35, "--- %s ---", gibbles.name);
        mvprintw(17, 35, "Energia:      %d/100", gibbles.energy);
        mvprintw(18, 35, "Felicidade:   %d/100", gibbles.happiness);
        mvprintw(19, 35, "Inteligencia: %d", gibbles.intelligence);
        mvprintw(20, 35, "Consciencia:  %d", gibbles.consciousness);

        mvprintw(22, 5, "ESCOLHE O QUE QUERES FAZER:");
        mvprintw(23, 5, "1. Alimentar  2. Brincar  3. Estudar  4. Dormir  5. Sair");
        mvprintw(24, 5, "Opcao: ");

        refresh();
        opcao = getch() - '0';
    }

    endwin();

    return 0;
}
