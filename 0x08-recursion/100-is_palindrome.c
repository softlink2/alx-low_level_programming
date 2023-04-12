#include "main.h"

int
_strlen_recursion(char *s)
{
	int n = 1;

	if (!*s)
		return (0);
	n = n + _strlen_recursion(s + n);

	return (n);
}

int
is_palindrome(char *s)
{
	return (_tail_palindrome(s, 0, _strlen_recursion(s)));
}

int
_tail_palindrome(char *s, int idx, int len)
{
	if (idx == len || idx > len)
		return (1);
	else if (s[idx] != s[len - 1])
		return (0);

	return (_tail_palindrome(s, idx + 1, len - 1));
}
