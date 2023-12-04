#include "littlememory.h"

void reallocate(void* restrict ptr, const unsigned long long size) {
	chunk_t* chunk = (chunk_t*) (ptr - sizeof(chunk_t));

	if (chunk->next == 0) return;
	chunk->size = size;
}
