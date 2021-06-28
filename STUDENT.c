#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	_setcursortype(_NOCURSOR);

	gotoxy(1,1);
	textcolor(RED);
	cprintf("c");
	textcolor(YELLOW);
	cprintf("hange password");

	gotoxy(70,1);
	textcolor(RED);
	cprintf("T");
	textcolor(YELLOW);
	cprintf("erminate");

	gotoxy(26,3);
	textbackground(RED);
	textcolor(YELLOW);
	cprintf("     Student Information     ");

	gotoxy(30,6);
	textbackground(0);
	textcolor(RED);
	cprintf("A");
	textcolor(LIGHTGRAY);
	cprintf("dd A Student");

	gotoxy(30,7);
	textcolor(RED);
	cprintf("M");
	textcolor(LIGHTGRAY);
	cprintf("odify A Student");

	gotoxy(30,8);
	textcolor(RED);
	cprintf("V");
	textcolor(LIGHTGRAY);
	cprintf("iew A Student");

	gotoxy(30,9);
	textcolor(RED);
	cprintf("D");
	textcolor(LIGHTGRAY);
	cprintf("isplay All Students");

	gotoxy(30,10);
	textcolor(RED);
	cprintf("R");
	textcolor(LIGHTGRAY);
	cprintf("emove A Student");

	gotoxy(30,11);
	textcolor(LIGHTGRAY);
	cprintf("R");
	textcolor(RED);
	cprintf("e");
	textcolor(LIGHTGRAY);
	cprintf("move All Students");

	gotoxy(17,15);
	textcolor(12+128);
	cprintf("***Press Highlighted Character to operate the Menu");

	gotoxy(27,17);
	textbackground(BLUE);
	textcolor(WHITE+128);
	cprintf("      ***** Developed By      ");

	gotoxy(15,18);
	textbackground(BLACK);
	textcolor(11);
	cprintf("Department of Computer Science & Engineering, SISTec GN");

	getch();
}