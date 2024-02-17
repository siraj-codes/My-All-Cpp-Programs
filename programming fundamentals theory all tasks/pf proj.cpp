#include<iostream>
#include<string>
using namespace std;

// Define structures for Category, Book, and Library
struct BookCategory {
    string language;
    string genre;
};

struct BookInfo {
    int bookId;
    string bookName;
    string author;
    int pages;
    int price;
    BookCategory bookCategories[2];
};

struct LibraryInfo {
    int libraryId;
    string libraryName;
    string libraryAddress;
    int openingTime;
    int closingTime;
    BookInfo* books; 
    int totalBooks;
};

// Function prototypes
void addBookToLibrary(LibraryInfo&);
void deleteBookFromLibrary(LibraryInfo&, int); 
void updateBookInLibrary(LibraryInfo&, int); 

int main() {
    // Create an array of libraries
    LibraryInfo libraries[2];

    // Input information for each library and its books
    for (int i = 0; i < 2; i++) {
        cout<<"\nEnter Library ID : ";
        cin>>libraries[i].libraryId;
        cout<<"\nEnter Library Name : ";
        cin>>libraries[i].libraryName;
		cout<<"\nEnter Library Address : ";
        cin>>libraries[i].libraryAddress;
        cout<<"\nEnter Library Opening Time : ";
        cin>>libraries[i].openingTime;
        cout<<"\nEnter Library Closing Time : ";
        cin>>libraries[i].closingTime;
        cout<<"\nEnter the number of books: ";
        cin>>libraries[i].totalBooks;

        // Allocate memory for books in the library
        libraries[i].books = new BookInfo[libraries[i].totalBooks]; 

        // Input information for each book in the library
        for (int j = 0; j < libraries[i].totalBooks; j++) {
            cout<<"\nEnter Book ID: ";
            cin>>libraries[i].books[j].bookId;
            cout<<"\nEnter Book Name: ";
            cin>>libraries[i].books[j].bookName;
            cout<<"\nEnter Book Author: ";
            cin>>libraries[i].books[j].author;
            cout<<"\nEnter Book Pages: ";
            cin>>libraries[i].books[j].pages;
            cout<<"\nEnter Book Price: ";
            cin>>libraries[i].books[j].price;

            // Input information for book categories
            for (int k = 0; k < 1; k++) {
                cout<<"\nEnter Book Category Language: ";
                cin>>libraries[i].books[j].bookCategories[k].language;
                cout<<"\nEnter Book Category Genre: ";
                cin>>libraries[i].books[j].bookCategories[k].genre;
            }
        }
    }

    char userChoice;
    do {
        // Menu for searching and modifying books
        int option, searchBookId, searchPages;
        string searchAuthor, searchBookName;
        bool found = false;

        cout<<"\nEnter 1 to search by ID : ";
        cout<<"\nEnter 2 to search by Name : ";
        cout<<"\nEnter 3 to search by Pages : ";
        cout<<"\nEnter 4 to search by Author Name : ";
        cout<<"\nEnter 5 to add, delete, and update books : ";
        cin>>option;

        switch (option) {
            case 1:
                // Search by Book ID
                cout << "\nEnter Book ID : ";
                cin >> searchBookId;
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < libraries[i].totalBooks; j++) {
                        if (searchBookId == libraries[i].books[j].bookId) {
                            // Display library and book information
                            cout<<"\nLibrary ID : " << libraries[i].libraryId;
                            cout<<"\nLibrary Name : " << libraries[i].libraryName;	
                            cout<<"\nLibrary Address : " << libraries[i].libraryAddress;
                            cout<<"\nBook ID : " << libraries[i].books[j].bookId;
                            cout<<"\nBook Name:  " << libraries[i].books[j].bookName;
                            cout<<"\nBook Author : " << libraries[i].books[j].author;
                            cout<<"\nBook Pages : " << libraries[i].books[j].pages;
                            cout<<"\nBook Price : " << libraries[i].books[j].price;
                            found = true;
                        }
                    }
                }
                if(!found)
                    cout<<"\nBook Not Found";
                break;
            case 2:
                // Search by Book Name
                cout << "\nEnter Book Name : ";
                cin >> searchBookName;
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < libraries[i].totalBooks; j++) {
                        if (searchBookName == libraries[i].books[j].bookName) {
                            // Display library and book information
                            cout<<"\nLibrary ID : " << libraries[i].libraryId;
                            cout<<"\nLibrary Name : " << libraries[i].libraryName;	
                            cout<<"\nLibrary Address : " << libraries[i].libraryAddress;
                            cout<<"\nBook ID : " << libraries[i].books[j].bookId;
                            cout<<"\nBook Name:  " << libraries[i].books[j].bookName;
                            cout<<"\nBook Author : " << libraries[i].books[j].author;
                            cout<<"\nBook Pages : " << libraries[i].books[j].pages;
                            cout<<"\nBook Price : " << libraries[i].books[j].price;
                            found = true;
                        }
                    }
                }
                if(!found)
                    cout<<"\nBook Not Found";
                break;
            case 3:
                // Search by Book Pages
                cout << "\nEnter Book Pages : ";
                cin >> searchPages;
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < libraries[i].totalBooks; j++) {
                        if (searchPages == libraries[i].books[j].pages) {
                            // Display library and book information
                            cout<<"\nLibrary ID : " << libraries[i].libraryId;
                            cout<<"\nLibrary Name : " << libraries[i].libraryName;	
                            cout<<"\nLibrary Address : " << libraries[i].libraryAddress;
                            cout<<"\nBook ID : " << libraries[i].books[j].bookId;
                            cout<<"\nBook Name:  " << libraries[i].books[j].bookName;
                            cout<<"\nBook Author : " << libraries[i].books[j].author;
                            cout<<"\nBook Pages : " << libraries[i].books[j].pages;
                            cout<<"\nBook Price : " << libraries[i].books[j].price;
                            found = true;
                        }
                    }
                }
                if(!found)
                    cout<<"\nBook Not Found";
                break;
            case 4:
                // Search by Author Name
                cout << "\nEnter Author Name : ";
                cin.ignore();
                getline(cin, searchAuthor);
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < libraries[i].totalBooks; j++) {
                        if (searchAuthor == libraries[i].books[j].author) {
                            // Display library and book information
                            cout<<"\nLibrary ID : " << libraries[i].libraryId;
                            cout<<"\nLibrary Name : " << libraries[i].libraryName;	
                            cout<<"\nLibrary Address : " << libraries[i].libraryAddress;
                            cout<<"\nBook ID : " << libraries[i].books[j].bookId;
                            cout<<"\nBook Name:  " << libraries[i].books[j].bookName;
                            cout<<"\nBook Author : " << libraries[i].books[j].author;
                            cout<<"\nBook Pages : " << libraries[i].books[j].pages;
                            cout<<"\nBook Price : " << libraries[i].books[j].price;
                            found = true;
                        }
                    }
                }
                if(!found)
                    cout<<"\nBook Not Found";
                break;
            case 5:
                // Add, delete, or update books in the library
                int userInput;               
                cout<<"\nPress 1 to add book : ";
                cout<<"\nPress 2 to delete book : ";
                cout<<"\nPress 3 to update book : ";
                cin>>userInput;
                
                switch(userInput) {
                    case 1:
                        // Add a book to the library
                        int addOption;
                        cout<<"\nEnter 1 to add a book: ";
                        cin>>addOption;
                
                        if (addOption == 1) {
                            int libraryIndex;
                            cout<<"\nEnter Library index to add a book: ";
                            cin>>libraryIndex;
                            addBookToLibrary(libraries[libraryIndex]);
                        }
                        break;
                    case 2:
                        // Delete a book from the library
                        int deleteOption, deleteBookId;
                        cout<<"\nEnter 1 to delete a book: ";
                        cin>>deleteOption;
                
                        if (deleteOption == 1) {
                            int libraryIndex;
                            cout<<"\nEnter Library index to delete a book: ";
                            cin>>libraryIndex;
                            cout<<"\nEnter Book ID to delete: ";
                            cin>>deleteBookId;
                            deleteBookFromLibrary(libraries[libraryIndex], deleteBookId);
                        }
                        break;
                    case 3:
                        // Update a book in the library
                        int updateOption, updateBookId;
                        cout<<"\nEnter 1 to update a book: ";
                        cin>>updateOption;
                
                        if (updateOption == 1) {
                            int libraryIndex;
                            cout<<"\nEnter Library index to update a book: ";
                            cin>>libraryIndex;
                            cout<<"\nEnter Book ID to update: ";
                            cin>>updateBookId;
                            updateBookInLibrary(libraries[libraryIndex], updateBookId);
                        }
                        break;
                }	    
                break;
            default:
                break;
        }

        cout<<"\nDo you want to continue? (Y/N): ";
        cin>>userChoice;
     } while (userChoice == 'Y' || userChoice == 'y');

    // Deallocate memory for books in each library
    for (int i = 0; i < 2; ++i) {
        delete[] libraries[i].books;
    }

    return 0;
}

// Function to add a book to the library
void addBookToLibrary(LibraryInfo& library) {
    library.totalBooks++;
    BookInfo* newBooks = new BookInfo[library.totalBooks]; 
    
    for (int i = 0; i < library.totalBooks - 1; ++i) {
        newBooks[i] = library.books[i]; 
    }

    delete[] library.books;

    cout<<"\nEnter Book ID: ";
    cin>>newBooks[library.totalBooks - 1].bookId;
    cout<<"\nEnter Book Name: ";
    cin>>newBooks[library.totalBooks - 1].bookName;
    cout<<"\nEnter Book Author: ";
    cin>>newBooks[library.totalBooks - 1].author;
    cout<<"\nEnter Book Pages: ";
    cin>>newBooks[library.totalBooks - 1].pages;
    cout<<"\nEnter Book Price: ";
    cin>>newBooks[library.totalBooks - 1].price;

    for (int k = 0; k < 1; k++) {
        cout<<"\nEnter Book Category Language: ";
        cin>>newBooks[library.totalBooks - 1].bookCategories[k].language;
        cout<<"\nEnter Book Category Genre: ";
        cin>>newBooks[library.totalBooks - 1].bookCategories[k].genre;
    }

    library.books = newBooks;
}

// Function to delete a book from the library
void deleteBookFromLibrary(LibraryInfo& library, int bookId) {
    bool found = false;
    for (int i = 0; i < library.totalBooks; ++i) {
        if (library.books[i].bookId == bookId) {
            found = true;
            for (int j = i; j < library.totalBooks - 1; ++j) {
                library.books[j] = library.books[j + 1];
            }
            break;
        }
    }
    if (found) {
        library.totalBooks--;
        BookInfo* newBooks = new BookInfo[library.totalBooks];
        for (int i = 0; i < library.totalBooks; ++i) {
            newBooks[i] = library.books[i];
        }
        delete[] library.books;
        library.books = newBooks;
        cout<<"\nBook with ID "<<bookId<<" deleted.";
    } else {
        cout<<"\nBook with ID "<<bookId<<" not found.";
    }
}

// Function to update a book in the library
void updateBookInLibrary(LibraryInfo& library, int bookId) {
    for (int i = 0; i < library.totalBooks; ++i) {
        if (library.books[i].bookId == bookId) {
            cout<<"\nEnter Book ID : ";
            cin>>library.books[i].bookId;
            cout<<"\nEnter Book Name : ";
            cin>>library.books[i].bookName;
            cout<<"\nEnter Book Author : ";
            cin>>library.books[i].author;
            cout<<"\nEnter Book Pages : ";
            cin>>library.books[i].pages;
            cout<<"\nEnter Book Price : ";
            cin>>library.books[i].price;

            for (int k = 0; k < 1; k++) {
                cout<<"\nEnter Book Category Language: ";
                cin>>library.books[i].bookCategories[k].language;
                cout<<"\nEnter Book Category Genre: ";
                cin>>library.books[i].bookCategories[k].genre;
            }
            break;
        }
    }
}

