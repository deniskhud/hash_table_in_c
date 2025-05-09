//key - value pairs
typedef struct {
	char* key;
	char* value;
} ht_item;

//hash table
typedef struct {
	int size;
	int count;
	int base_size;
	ht_item** items;
} ht_hash_table;

void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);
ht_hash_table* ht_new_sized(const int base_size);