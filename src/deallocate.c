#include "littlememory.h"

void deallocate(void* restrict ptr) {
	chunk_t* chunk = (chunk_t*) (ptr - sizeof(chunk_t));

	if (chunk->next == 0 || chunk->prev) return;
	chunk->prev->next = chunk->next;
	chunk->next->prev = chunk->prev;
}
