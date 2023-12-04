#include "littlememory.h"

void* set(void* restrict ptr, const unsigned char value, const unsigned long long size) {
	unsigned int i = 0;

	unsigned char* p = (unsigned char*) ptr;

	while (i < size) {
		*p = value;
		p++;
		i++;
	}

	return ptr;
}
