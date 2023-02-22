#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // как не странно библеотека для работы со временем ))
#include <unistd.h> // работа со "сном"
#include <ncurses.h> // http://alexber220.narod.ru/ncurses/print.htm#description сделаем терминал через эту библиотеку


int input_remind(char *name);
int current_time();


#endif
