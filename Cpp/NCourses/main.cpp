#include <ncurses.h>
#include <string>

void draw_borders(WINDOW *screen)
{
	int x, y, i;
	getmaxyx(screen, y, x);
	mvwprintw(screen, 0, 0, "+");
	mvwprintw(screen, y - 1, 0, "+");
	mvwprintw(screen, 0, x - 1, "+");
	mvwprintw(screen, y - 1, x - 1, "+");
	for (i = 1; i < (y - 1); i++)
	{
		mvwprintw(screen, i, 0, "|");
		mvwprintw(screen, i, x - 1, "|");

	}
	for (i = 1; i < (x - 1); i++)
	{
		mvwprintw(screen, 0, i, "-");
		mvwprintw(screen, y - 1, i, "-");

	}
}

int main()
{
	int mw=0, ms=0;
	char str[80];
	initscr();
	getmaxyx(stdscr, mw, ms);
	WINDOW * win = newwin(10, 10, 5, 5);
	wprintw(win, "This is a new window");
	draw_borders(win);
//     wrefresh(win);

	wprintw(win, "Hello World");
// 	refresh();
// 	refresh();
// 	getstr(str);
// 	printw(" wybrano ");
// 	printw(str);
	wgetch(win);
	endwin();
	printf("rozmiar: %d %d\n", mw, ms);
	return 0;
}
