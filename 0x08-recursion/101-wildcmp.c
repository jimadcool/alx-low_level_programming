#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
* strlen_no_wilds - Returns the length of a string,
*                   ignoring wildcard characters.
* @str: The string to be measured.
*
* Return: The length.
*/
int strlen_no_wilds(char *str)
{
