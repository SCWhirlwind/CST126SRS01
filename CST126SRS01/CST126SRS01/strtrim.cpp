#include "stdafx.h"
#include "stdafx.h"
#include <cctype>
#include <cstddef>
#include <cstring>

char* strtrim(char str[])
{
	if (str != nullptr)
	{
		const char* begin = str;
		while (isspace(*begin))
		{
			++begin;
		}
		auto const len = strlen(begin);
		memmove(str, begin, len + 1);

		int end = strlen(str);
		if (isspace(str[end]));
		{
			--end;
		}
		str[end+1] = 0;
	}
	return str;
}
