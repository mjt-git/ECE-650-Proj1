#include <stddef.h>

extern struct Blocks_ini * info;
extern int enlargement;
extern struct Blocks_ini * last;
extern struct Blocks_ini * firstFree;


extern void *ff_malloc(size_t size);
extern void ff_free(void *ptr);

extern void *bf_malloc(size_t size);
extern void bf_free(void *ptr);

extern unsigned long get_data_segment_size();
extern unsigned long get_data_segment_free_space_size();  
