#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>


char* my_strstr(char* p1, char* p2)
{
	assert(p1);
	assert(p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == "\0")
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1  && *s2  && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
		{
			return cur;
		}
		else if (!*s1)
		{
			return NULL;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abc";
	char* p2 = "abcdef";
	char* ret  = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("×Ó´®²»´æÔÚ");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}
