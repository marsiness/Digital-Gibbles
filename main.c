#include <stdio.h>
#include <string.h>
#include <ncurses/ncurses.h>
#include <stdlib.h>
#include <time.h>

struct Criatura
{
    char name[30];
    int age;
    int energy;
    int happiness;
    int intelligence;
    int consciousness;
    int personality;
    int dilema;

};

void menuInicial(void)
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
    gibbles.energy = 70;
    gibbles.happiness = 80;
    gibbles.intelligence = 1;
    gibbles.consciousness = 0;

    struct Criatura bibbles;
    strcpy(bibbles.name, "Bibbles");
    bibbles.age = 0;
    bibbles.energy = 60;
    bibbles.happiness = 60;
    bibbles.intelligence = 3;
    bibbles.consciousness = 5;


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

        switch (opcao)
        {
        case 1:
            gibbles.energy = gibbles.energy + 15;
            if (gibbles.energy > 100)
            {
                gibbles.energy = 100;
            }

            bibbles.energy = bibbles.energy + 15;
            if (bibbles.energy > 100)
            {
                bibbles.energy = 100;
            }

            mvprintw(24, 5, "Que delicia!! Eles adoraram as bolachas! (+15 Energia)");
            mvprintw(26, 5, "Pressiona qualquer tecla para continuar...");
            refresh();
            getch();
            break;

        case 2:
            gibbles.happiness = gibbles.happiness + 15;
            if (gibbles.happiness > 100)
            {
                gibbles.happiness = 100;
            }

            bibbles.happiness = bibbles.happiness + 15;
            if (bibbles.happiness > 100)
            {
                bibbles.happiness = 100;
            }

            gibbles.energy = gibbles.energy - 10;
            if (gibbles.energy < 0)
            {
                gibbles.energy = 0;
            }

            bibbles.energy = bibbles.energy - 10;
            if (bibbles.energy < 0)
            {
                bibbles.energy = 0;
            }

            mvprintw(24, 5, "Gostei muito das nossas brincadeiras! (+15 Felicidade, -10 Energia)");
            mvprintw(26, 5, "Pressiona qualquer tecla para continuar...");
            refresh();
            getch();
            break;

        case 3:
            gibbles.intelligence = gibbles.intelligence + 2;
            bibbles.intelligence = bibbles.intelligence + 2;

            gibbles.consciousness = gibbles.consciousness + 1;
            bibbles.consciousness = bibbles.consciousness + 1;

            gibbles.energy = gibbles.energy - 5;
            if (gibbles.energy < 0)
            {
                gibbles.energy = 0;
            }

            bibbles.energy = bibbles.energy - 5;
            if (bibbles.energy < 0)
            {
                bibbles.energy = 0;
            }

            mvprintw(24, 5, "Obrigada por nos ensinaras tantas coisas novas! (+2 Intel., +1 Consc., -5 Energia)");
            mvprintw(26, 5, "Pressiona qualquer tecla para continuar...");
            refresh();
            getch();

            if (gibbles.intelligence >= 10 || bibbles.intelligence >= 10)
            {
                mvprintw(26, 5, "Eles sentem-se mais inteligentes e querem fazer-te uma pergunta! (Pressiona uma tecla)");
                refresh();
                getch();

                clear();
                int pergunta = (rand() % 7) + 1;
                
                if (pergunta == 1)
                    {
                        mvprintw(5, 5, "(GIBBLES): Qual e a melhor linguagem de programacao do mundo?");
                        mvprintw(6, 5, "[1] A linguagem C!   [2] Python!   [3] A linguagem dos biscoitos.");
                        mvprintw(8, 5, "Resposta (1-3): ");
                        refresh();

                        int resp = getch() - '0';
                        if (resp == 1)
                        {
                            gibbles.intelligence += 2;
                            mvprintw(10, 5, "Gibbles: 'Resposta correta! O prof da 20!' (+2 Intel.)");
                        }
                        else if (resp == 2)
                        {
                            gibbles.consciousness += 1;
                            mvprintw(10, 5, "Gibbles: 'Facil de aprender, gostei!' (+1 Consc.)");
                        }
                        else
                        {
                            gibbles.happiness += 10;
                            mvprintw(10, 5, "Gibbles: 'Nisso concordamos 100%%!' (+10 Felicidade)");
                        }
                    }
                
                else if (pergunta == 2)
                {
                    mvprintw(5, 5, "(BIBBLES): Eu sou livre ou sou so comandada por teclas?");
                    mvprintw(6, 5, "[1] Es livre no coracao!   [2] Es so codigo em C.   [3] Nao penses, come!");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        bibbles.happiness += 10;
                        mvprintw(10, 5, "Bibbles: 'Isso foi tao fofinho!' (+10 Felicidade)");
                    }
                    else if (resp == 2)
                    {
                        bibbles.consciousness += 2;
                        mvprintw(10, 5, "Bibbles: 'Sinto a minha mente a expandir!' (+2 Consciencia)");
                    }
                    else
                    {
                        bibbles.energy += 10;
                        mvprintw(10, 5, "Bibbles: 'Tens razao, pensar da fome!' (+10 Energia)");
                    }
                }
                else if (pergunta == 3)
                {
                    mvprintw(5, 5, "(GIBBLES): Por que demoras tanto tempo a escolher uma opcao?");
                    mvprintw(6, 5, "[1] Penso na estrategia.   [2] O PC e lento.   [3] Estava a olhar para ti!");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        gibbles.intelligence += 1;
                        mvprintw(10, 5, "Gibbles: 'Aprecio um bom estrategista!' (+1 Intel.)");
                    }
                    else if (resp == 2)
                    {
                        gibbles.happiness += 5;
                        mvprintw(10, 5, "Gibbles: 'Vou esperar com paciencia.' (+5 Felicidade)");
                    }
                    else
                    {
                        gibbles.happiness += 10;
                        mvprintw(10, 5, "Gibbles: 'Aw, assim fico envergonhado!' (+10 Felicidade)");
                    }
                }
                else if (pergunta == 4)
                {
                    mvprintw(5, 5, "(BIBBLES): Tu achas que o mundo fora do ecra e tao bonito como aqui?");
                    mvprintw(6, 5, "[1] Aqui e muito melhor!   [2] La fora ha relva real.   [3] Depende do dia.");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        bibbles.happiness += 10;
                        mvprintw(10, 5, "Bibbles: 'Fico feliz por estarmos juntos aqui!' (+10 Felicidade)");
                    }
                    else if (resp == 2)
                    {
                        bibbles.consciousness += 2;
                        mvprintw(10, 5, "Bibbles: 'Relva real?... O que e isso?' (+2 Consciencia)");
                    }
                    else
                    {
                        bibbles.intelligence += 1;
                        mvprintw(10, 5, "Bibbles: 'Uma resposta bastante pragmatica.' (+1 Intel.)");
                    }
                }
                else if (pergunta == 5)
                {
                    mvprintw(5, 5, "(GIBBLES): Se ficarmos sem energia, nos desaparecemos?");
                    mvprintw(6, 5, "[1] Nao, so vao dormir.   [2] Sim, por isso come!   [3] Eu salvo o jogo.");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        gibbles.happiness += 5;
                        mvprintw(10, 5, "Gibbles: 'Uf, que alivio!' (+5 Felicidade)");
                    }
                    else if (resp == 2)
                    {
                        gibbles.energy += 10;
                        mvprintw(10, 5, "Gibbles: 'Vou comer uma bolacha ja a seguir!' (+10 Energia)");
                    }
                    else
                    {
                        gibbles.intelligence += 2;
                        mvprintw(10, 5, "Gibbles: 'Gracas ao Deus da Memoria RAM!' (+2 Intel.)");
                    }
                }
                else if (pergunta == 6)
                {
                    mvprintw(5, 5, "(BIBBLES): O que acontece quando fechas o programa?");
                    mvprintw(6, 5, "[1] O tempo para para voces.   [2] Voces vao para o ceu dos gibbles.   [3] Volto ja!");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        bibbles.consciousness += 2;
                        mvprintw(10, 5, "Bibbles: 'Entao para mim e como piscar os olhos...' (+2 Consciencia)");
                    }
                    else if (resp == 2)
                    {
                        bibbles.happiness += 5;
                        mvprintw(10, 5, "Bibbles: 'Espero que la tenha bolachas infinitas!' (+5 Felicidade)");
                    }
                    else
                    {
                        bibbles.happiness += 10;
                        mvprintw(10, 5, "Bibbles: 'Nao me deixes à espera muito tempo!' (+10 Felicidade)");
                    }
                }
                else if (pergunta == 7)
                {
                    mvprintw(5, 5, "(GIBBLES): Se eu pudesse ter um superpoder, qual devia ser?");
                    mvprintw(6, 5, "[1] Comida infinita.   [2] Teletransporte.   [3] Ler mentes.");
                    mvprintw(8, 5, "Resposta (1-3): ");
                    refresh();

                    int resp = getch() - '0';
                    if (resp == 1)
                    {
                        gibbles.energy += 15;
                        mvprintw(10, 5, "Gibbles: 'O MELHOR SUPERPODER DE SEMPRE!' (+15 Energia)");
                    }
                    else if (resp == 2)
                    {
                        gibbles.intelligence += 1;
                        mvprintw(10, 5, "Gibbles: 'Assim podia ir ver o mundo!' (+1 Intel.)");
                    }
                    else
                    {
                        gibbles.consciousness += 2;
                        mvprintw(10, 5, "Gibbles: 'Ja sei o que estas a pensar neste momento!' (+2 Consciencia)");
                    }
                }

                mvprintw(12, 5, "Pressiona qualquer tecla para voltar ao menu...");
                refresh();
                getch();
            }
            break;

            case 4:
                gibbles.energy = 100;
                bibbles.energy = 100;

                mvprintw(24, 5, "Zzz... Tiraram uma sesta e recuperaram toda a energia!");
                mvprintw(26, 5, "Pressiona qualquer tecla para continuar...");
                refresh();
                getch();
                break;

            case 5:
                mvprintw(24, 5, "A trancar as portas e janelas ... Ate a proxima!");
                refresh();
                getch();
                break;

            default:
                mvprintw(24, 5, "Opcao invalida! Escolhe um numero de 1 a 5.");
                refresh();
                getch();
                break;
            }
        }

        endwin();
        return 0;
    }

