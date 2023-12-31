#ifdef MAIN_H
#define MAIN_H
/**
 * Author: Mamah Tobechukwu Paschal
 * file: main.h
 * description: A header file for all the function used in this project
*/
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
int _putchar(char);
#endif
