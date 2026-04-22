#include <string>
#include <iostream>

class BankAccount {
private:
  std::string accountNumber;
  double balance;

public:
  class Transaction {
  public:
    void deposit(BankAccount& account, double amount);
    void withdraw(BankAccount& account, double amount);
  };

  BankAccount(std::string aNumber, double aBalance):
  accountNumber(aNumber), balance(aBalance){}

  std::string getAccountNumber();
  double getBalance();

  void setAccountNumber(std::string newAccountNumber);
  void setBalance(double newBalance);

};