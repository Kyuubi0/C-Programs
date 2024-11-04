#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining book structure
struct Book {
    char* title;
    char* author;
    int pageNumber;
};

// Function that creates a new book
struct Book* createNewBook(const char* title, const char* author, int pageNumber) {
    // Allocate space from memory
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));

    // If memory allocation failed
    if (newBook == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Allocate memory for title and author
    newBook->title = (char*)malloc(strlen(title) + 1); // +1: for null
    newBook->author = (char*)malloc(strlen(author) + 1); // +1: for null

    // If memory allocation failed
    if (newBook->title == NULL || newBook->author == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy the information
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    newBook->pageNumber = pageNumber;

    return newBook;
}

// Function that prints the book to the screen
void printBook(struct Book* book) {
    printf("Title of the book : %s\n", book->title);
    printf("Author : %s\n", book->author);
    printf("Page Number : %d\n", book->pageNumber);
}

int main(int argc, char const *argv[])
{
        // Create a new book
    struct Book* newBook = createNewBook("Sefiller", "Victor Hugo", 1463);

    // Print the book on screen
    printBook(newBook);

    // Release the allocated space from memory
    free(newBook->title);
    free(newBook->author);
    free(newBook);
    
    return 0;
}
