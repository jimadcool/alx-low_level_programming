## Task

* 0.. A library is not a luxury but one of the necessities of life
Create the static library libmy.a containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

* 1.. Without libraries what have we? We have no past and no future
mandatory
Score: 100.00% (Checks completed: 100.00%)
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

## CONCEPT
ubuntu@ip-172-31-63-244:~/julien$ l
total 44
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:46 print_char.o
ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ubuntu@ip-172-31-63-244:~/julien$ l
total 68
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 1400 Mar 25 02:47 0-print_z.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 1-print_alphabet.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 2-print_tebahpla.o
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 1464 Mar 25 02:47 3-print_base16.o
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 1472 Mar 25 02:47 4-positive_or_not.o
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 2048 Mar 25 02:47 5-print_number.o
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:47 print_char.o
ubuntu@ip-172-31-63-244:~/julien$ ar -rc libschool.a *.o
ubuntu@ip-172-31-63-244:~/julien$ ar -t libschool.a
0-print_z.o
1-print_alphabet.o
2-print_tebahpla.o
3-print_base16.o
4-positive_or_not.o
5-print_number.o
print_char.o
ubuntu@ip-172-31-63-244:~/julien$ ranlib libschool.a
ubuntu@ip-172-31-63-244:~/julien$ cat main.c
void print_alphabet(void);

int main(void)
{
        print_alphabet();
        return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c
/tmp/ccQa2r6L.o: In function `main':
main.c:(.text+0x5): undefined reference to `print_alphabet'
collect2: error: ld returned 1 exit status
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c -L. -lschool -o alpha
ubuntu@ip-172-31-63-244:~/julien$ ./alpha
abcdefghijklmnopqrstuvwxyzubuntu
ubuntu@ip-172-31-63-244:~/julien$
