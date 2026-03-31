#include "Library.hpp"
#include "removeElement.hpp"
#include <iostream>

using namespace std;

Library::Library() {
    totalBorrowedBooks = 0;
    reservedCount = 0;
}

void Library::listBooks() {
    cout << "Books that you will find in the library: " << endl;
    for (auto book : bookList) {
        cout << book << endl;
    }
}

void Library::addBook(string title, double bookCost) {
    if (bookList.size() < 100) {
        bookList.push_back(title);
        LibraryBudget -= bookCost;
    } else {
        cout << "Library is full!" << endl;
    }
}

bool Library::borrowBook(string title) {
    for (auto book : bookList) {
        if (book == title) {
            removeElement(bookList, title);
            totalBorrowedBooks++;
            cout << "You just borrowed: " << title << endl;
            return true;
        }
    }
    cout << "Book not found!" << endl;
    return false;
}

int Library::getTotalBorrowedBooks() {
    return totalBorrowedBooks;
}

void Library::reserveBook(string title) const {
    bool validBook = false;
    for (auto book : bookList) {
        if (book == title) {
            validBook = true;
            break;
        }
    }

    if (!validBook) {
        cout << "The book you are trying to reserve is not in library catalog."<< endl;
        return; 
    }

    for (auto reservedBook : reservedBooks) {
        if (reservedBook == title) {
            cout << "Book already reserved!" << endl;
            return;
        }
    }

    reservedBooks.push_back(title);
    reservedCount++;
    cout << "Book reserved: " << title << endl;
    cout << "Reserved book count: " << reservedCount << endl;
}