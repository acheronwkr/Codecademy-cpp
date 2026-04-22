#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {

  Bank superBank;
  superBank.createAccount("1001", 5000);
  superBank.createAccount("1002", 3000);
  superBank.createAccount("1003", 2000);

  BankAccount* account1 = superBank.findAccount("1001");
  if (account1 != nullptr) {
    BankAccount::Transaction temp;
    temp.deposit(*account1, 1000);
  }

  BankAccount* account2 = superBank.findAccount("1002");
  if (account2 != nullptr) {
    BankAccount::Transaction temp;
    temp.withdraw(*account2, 500);
  }

  int result;
  result = superBank.transferMoney("1001", "1002", 1000);
  switch (result) {
    case 1:
      cout << "Money were transferred successfully.";
      break;
    case 2:
      cout << "ERROR: One or both accounts not found.";
      break;
    case 3:
      cout << "ERROR: Insufficient funds in the source account.";
      break;
  }
  return 0;
}
