#include "stdafx.h"
#include "strtrim.h"
#include <cctype>
#include <cstddef>
#include <cstring>

char* strtrim(char str[])
{
	const char* begin = str;
	while (isspace(*begin))
	{
		++begin;
	}
	const auto len = strlen(begin);
	memmove(str, begin, len + 1);

	
	return;
}