
#include "helpers.hpp"

bool	strIsEmpty(char *str)
{
	int i;
	for (i = 0; i < (int)strlen(str) && isspace(str[i]); i++);
	if (str[i])
		return (0);
	return (1);
}