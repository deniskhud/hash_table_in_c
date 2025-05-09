# Hash Table in C

supports:

- Insertion of key-value pairs
- Searching by key
- Deletion by key
- Dynamic resizing (grows and shrinks based on load factor)
- Open addressing with double hashing for collision resolution


## Structure

- `hash_table.c` – main implementation with small test
- `hash_table.h` – header file
- `prime.c` / `prime.h` – utility for finding the next prime number

## Build

To compile:

```bash
gcc hash_table.c prime.c -o hash_table