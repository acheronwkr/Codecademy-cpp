#include "Library.hpp"
#include <iostream>

using namespace std;

double LibraryBudget = 5000;

int main() {

  cout << "Current library budget is : " << LibraryBudget << endl;

  Library myLibrary;

  // All steps print outs are for debug purposes.
  // cout << "Step 1" << endl; 

  myLibrary.addBook("The Great Gatsby", 300);
  myLibrary.addBook("1984", 400);
  myLibrary.addBook("To Kill a Mockingbird", 350);

  // cout << "Step 2" << endl; 
  
  myLibrary.listBooks();

  // cout << "Step 3" << endl; 
  
  myLibrary.reserveBook("1984");

  // cout << "Step 4" << endl; 
  
  myLibrary.borrowBook("To Kill a Mockingbird");

  // cout << "Step 5" << endl; 

  cout << "The total number of borrowed books is: " << myLibrary.getTotalBorrowedBooks() << endl;
}
