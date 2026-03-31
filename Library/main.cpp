#include "Library.hpp"
#include <iostream>

using namespace std;

double LibraryBudget = 5000;

int main() {

  cout << "Current library budget is : " << LibraryBudget << endl;

  Library myLibrary;

  myLibrary.addBook("The Great Gatsby", 300);
  myLibrary.addBook("1984", 400);
  myLibrary.addBook("To Kill a Mockingbird", 350);

  myLibrary.listBooks();

  myLibrary.reserveBook("1984");

  myLibrary.borrowBook("To Kill a Mockingbird");

  cout << "The total number of borrowed books is: " << myLibrary.getTotalBorrowedBooks() << endl;
}