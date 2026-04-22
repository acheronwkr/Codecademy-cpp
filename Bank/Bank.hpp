#include <vector>
#include <string>
#include "BankAccount.hpp"

class Bank {
private:
  std::vector<BankAccount> bankAccounts;

public:
  void createAccount(std::string aNumber, double aBalance);

  BankAccount* findAccount(std::string aNumber);

  int transferMoney(std::string fromAccount, std::string toAccount, double amount);
  
};