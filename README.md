# Little Memory
### A minimal way to handle memory in C.

### Sometimes it can be painful to handle memory in C, and in special without the standard library. LittleMemory can be static compiled alone and does not depend on any other library.

# Getting Started

### Allocating memory

```c
#include "littlememory.h"

...
    void* str = allocate(1024);
...
```

### Reallocating memory

```c
#include "littlememory.h"

...
    void* str = allocate(1024);
    str = reallocate(str, 2048);
...
```

### Deallocating memory

```c
#include "littlememory.h"

...
    void* str = allocate(1024);
    free(str);
...
```

### Set value to memory

```c
#include "littlememory.h"

...
    void* str = allocate(1024);
    set(str, 0, 1024);
...
```

#### The methods above are respectively equivalent to: `malloc`, `realloc`, `free` and `memset`.


## License
[GNU Affero General Public License v3.0](https://github.com/Dviih/LittleMemory/blob/master/LICENSE)

---
[Dviih](@Dviih) © 2023
