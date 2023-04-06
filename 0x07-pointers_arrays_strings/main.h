#ifndef MAIN_H
#define MAIN_H
void simple_print_buffer(char *, unsigned int);
void print_chessboard(char (*)[]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

char *_strchr(char *, char);
char *_strstr(char *, char *);
char *_strpbrk(char *, char *);
char *_memcpy(char *, char *, unsigned int);
char *_memset(char *, char, unsigned int);

int _strncmp(char *, char *, int);
unsigned int _strspn(char *, char *);
#endif
