#ifndef CONSOLE_H
#define CONSOLE_H

void write_console(char *str, ...); // color set magenta

void throw_error(char *str, ...); // color set red

void callout(char *str, ...); // color set yellow

void clear_screen(); // clears the screen on terminal

#endif