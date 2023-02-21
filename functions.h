#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // как не странно библеотека для работы со временем ))
#include <unistd.h> // работа со "сном"
#include <ncurses.h> // http://alexber220.narod.ru/ncurses/print.htm#description сделаем терминал через эту библиотеку


void input_remind();
int input_time();
int current_time();


#endif