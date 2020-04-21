#include "phone_book.h"

#include <assert.h>
#include <stdlib.h>

/*int main(void)
{
    phone_book * pb = phone_book_create(9);
    assert( pb );
    assert( phone_book_size(pb) == 0 );
	assert( phone_book_get_insert_position(pb) == 0 );
    assert( phone_book_add(pb, "Olve", "90093309") );
    assert( phone_book_size(pb) == 1 );
    phone_book_add(pb, "Jon", "547967444782");
	assert( !phone_book_add(pb, "Jon", "547967441182") );
    assert( phone_book_size(pb) == 2 );
	assert( phone_book_contains(pb, "Jon") );
	assert( !phone_book_contains(pb, "John") );
	assert( !phone_book_contains(pb, "Jonny") );
    assert( phone_book_remove(pb, "Jon") );
	assert( phone_book_size(pb) == 1 );
	assert( !phone_book_remove(pb, "Jon") );
	assert( phone_book_get_insert_position(pb) == 1 );
	phone_book_add(pb, "Jon", "547967444782");
	assert( phone_book_contains(pb, "Jon") );
	assert( phone_book_get_insert_position(pb) == 2 );
	phone_book_add(pb, "Joe", "547967444782");
	assert( phone_book_get_insert_position(pb) == 3 );
	phone_book_add(pb, "Jack", "54796744478112");
	assert( phone_book_remove(pb, "Joe") );
	assert( !phone_book_contains(pb, "Joe") );
	assert( phone_book_get_insert_position(pb) == 2 );
	assert( phone_book_size(pb) == 3 );
	phone_book_destroy(&pb);
	assert( pb == NULL );
	exit(0);
}*/
