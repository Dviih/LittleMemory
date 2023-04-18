#ifndef LITTLE_MEMORY_H
#define LITTLE_MEMORY_H

typedef struct chunk_t {
	unsigned int size;
	struct chunk_t* next;
	struct chunk_t* prev;
} chunk_t;

chunk_t heap;

void* allocate(unsigned long long);
void deallocate(void*);
void reallocate(void*, unsigned long long);
void* set(void*, unsigned char, unsigned long long);

#endif //LITTLE_MEMORY_H
