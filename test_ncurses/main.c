#include <ncurses.h>
#include <wchar.h>
#include <locale.h>


int main(int argc, char** argv) {

    setlocale(LC_ALL, ""); // mettre la console en compatibilité d'affichage unicode sous linux
    initscr(); // Initialise la structure WINDOW et autres paramètres 
  

    mvprintw(1, 1,"une flamme %lc", 0x1F525);  // on affiche l'element en x,y dans la boite

    getch();
    endwin();   // remettre le terminal dans son état initial
    
    return (0);
}
