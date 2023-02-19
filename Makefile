all: reminder.o functions.o
	gcc -Wall -Werror -Wextra functions.o reminder.o -o main.out

reminder.o: reminder.c
	gcc -Wall -Werror -Wextra reminder.c -o reminder.o

functions.o: functions.c
	gcc -Wall -Werror -Wextra functions.c -o functions.o
