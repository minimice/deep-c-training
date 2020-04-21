#include "phone_book.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h> 

#define MAX_PHONE_NUMBER_LEN 15
#define MAX_PHONE_NAME_LEN 64

typedef struct 
{
    char number[MAX_PHONE_NUMBER_LEN+1];
    char name[MAX_PHONE_NAME_LEN+1];
} phone_book_entry;

struct phone_book
{
    phone_book_entry * entries;
    size_t max_size;
    size_t n_elements;
};

phone_book * phone_book_create(size_t max_size)
{
    phone_book * pb = malloc(sizeof(phone_book));
    pb->entries = malloc(sizeof(phone_book_entry) * max_size);
    pb->max_size = max_size;
    pb->n_elements = 0;
    return pb;
}

size_t phone_book_get_insert_position(const phone_book * pb)
{
	const phone_book_entry * pbe = NULL;
	for (size_t at = 0; at < pb->n_elements; at++) {
        pbe = &pb->entries[at];
		if (strlen(pbe->name) == 0)
			return at;
	}
}

void phone_book_destroy(phone_book ** pbTwo)
{
	phone_book * pb = *pbTwo;
    free(pb->entries);
    free(pb);
	*pbTwo = NULL;
}

size_t phone_book_size(const phone_book * pb)
{
    return pb->n_elements;
}

bool phone_book_add(phone_book * pb, const char * name, const char * number)
{
    if (pb->n_elements >= pb->max_size) 
        return false;
	
	if (phone_book_contains(pb, name))
		return false;

	size_t insertion_position = phone_book_get_insert_position(pb);
    phone_book_entry * pbe = &pb->entries[insertion_position];
    strncpy(pbe->name, name, MAX_PHONE_NAME_LEN);
    pbe->name[MAX_PHONE_NAME_LEN] = '\0';
    strncpy(pbe->number, number, MAX_PHONE_NUMBER_LEN);
    pbe->name[MAX_PHONE_NUMBER_LEN] = '\0';
    pb->n_elements++;
    return true;
}

bool phone_book_contains(const phone_book * pb, const char * name)
{
	for (size_t at = 0; at < pb->n_elements; at++) {
        const phone_book_entry * pbe = &pb->entries[at];
		if (strcmp(pbe->name, name) == 0)
			return true;
	}
	return false;
}

bool phone_book_remove(phone_book * pb, const char * name)
{
	if (!phone_book_contains(pb, name))
		return false;
	
	phone_book_entry * pbe = NULL;
	for (size_t at = 0; at < pb->n_elements; at++) {
        pbe = &pb->entries[at];
		if (strcmp(pbe->name, name) == 0) {
			memset( pbe->name, '\0', sizeof pbe->name );
			memset( pbe->number, '\0', sizeof pbe->number ); 
			pb->n_elements--;
			return true;
		}
	}
}

void phone_book_print_all(const phone_book * pb)
{
    // TODO: remove dependency to stdio, can we pass in a printer function?
    printf("Phone book\n");
    printf("==========\n");
    for (size_t at = 0; at < pb->max_size; at++) {
        const phone_book_entry * pbe = &pb->entries[at];
		if (strlen(pbe->name))
			printf("%-20s %-18s\n", pbe->name, pbe->number);
    }
}
