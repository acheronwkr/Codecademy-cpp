#include "Bank.hpp"
#include <iostream>

using namespace std;

void Bank::createAccount(string aNumber, double aBalance){
    BankAccount newAccount(aNumber, aBalance);
    bankAccounts.push_back(newAccount);
}

BankAccount* Bank::findAccount(string aNumber){
  for (auto& account : bankAccounts) {
    if (account.getAccountNumber() == aNumber) {
      return &account;
    }
  } 
  return nullptr;
}

int Bank::transferMoney(string fromAccount, string toAccount, double amount){
  BankAccount* source = findAccount(fromAccount);
  BankAccount* target = findAccount(toAccount);
  if (source == nullptr || target == nullptr) {
    return 2;
  } else if (source->getBalance() < amount) {
    return 3;
  } else {
    BankAccount::Transaction temp;
    temp.withdraw(*source, amount);
    temp.deposit(*target, amount);
    return 1;
  }
}