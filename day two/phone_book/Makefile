CC=gcc
#CFLAGS=-std=c99 -O -Wall -Wextra -pedantic -Wstrict-prototypes -Wimplicit -Werror
CFLAGS=-std=c99 -g 
#CFLAGS=-std=c99 -O0 -fprofile-arcs -ftest-coverage 
#CFLAGS=-std=c99 -O2 -pg

all: phone_book_test phone_book_demo check

check: phone_book_test
	@./phone_book_test 
	@echo "Unit tests OK!"
	
clean:
	rm -f phone_book_test phone_book_demo  
	rm -f *.o a.out*
	rm -rf *.dSYM

phone_book_test: phone_book_test.c phone_book.c phone_book.h
	$(CC) $(CFLAGS) -o $@ $^

phone_book_demo: phone_book_demo.c phone_book.c phone_book.h
	$(CC) $(CFLAGS) -o $@ $^
