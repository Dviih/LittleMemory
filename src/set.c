#include "littlememory.h"

void* set(void* ptr, unsigned char value, unsigned long long size) {
	int i = 0;

	unsigned char* p = (unsigned char*) ptr;

	while (i < size) {
		*p = value;
		p++;
		i++;
	}

	return ptr;
}
