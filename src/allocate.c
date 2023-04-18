#include "littlememory.h"

void* allocate(unsigned long long size) {
	chunk_t* chunk = &heap;

	while (chunk->next != 0) {
		chunk = chunk->next;
	}

	chunk->next = chunk + sizeof(chunk_t) + chunk->size;
	chunk->next->prev = chunk;
	chunk->next->size = size;
	chunk->next->next = 0;

	return chunk->next + sizeof(chunk_t);
}
