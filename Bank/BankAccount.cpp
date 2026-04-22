#include "BankAccount.hpp"

using namespace std;

void BankAccount::Transaction::deposit(BankAccount& account, double amount){
  double newBalance = account.getBalance() + amount;
  account.setBalance(newBalance);
  cout << "Deposited: $" << amount << ". New Balance: $" << account.getBalance() << endl;
}

void BankAccount::Transaction::withdraw(BankAccount& account, double amount){
  if (amount <= account.getBalance()) {
    double newBalance = account.getBalance() - amount;
    account.setBalance(newBalance);
    cout << "Withdrew: $" << amount << ". New Balance: $" << account.getBalance() << endl;
  } else {
    cout << "Insufficient funds. Current balance: $" << account.getBalance() << endl;
  }
}

string BankAccount::getAccountNumber() {
  return accountNumber;
}

double BankAccount::getBalance() {
  return balance;
}

void BankAccount::setAccountNumber(string newAccountNumber) {
  accountNumber = newAccountNumber;
}

void BankAccount::setBalance(double newBalance) {
  balance = newBalance;
}