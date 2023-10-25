#include "main.h"

/**
 * move_past_star - function that iterate the past
 * @s2: the second string
 * Return: Nothing
 */
char *move_past_star(char *s2)
{
	if (*s == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - function that makes amagic a reality
 * @s1: the first string
 * @s2: the second string
 * Return: Nothing
 */
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}
/**
 * wildcmp - function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0
 * @s1: the first string
 * @s2: the second string
 * Retrun: Nothing
 */
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_start(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));

	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 11);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
