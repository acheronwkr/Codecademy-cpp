#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <vector>
#include <memory>
#include "Table.hpp"
#include "Customer.hpp"


class Restaurant {
private:
  std::vector<std::unique_ptr<Table>> tables;
  std::vector<std::shared_ptr<Customer>> activeCustomers;
  std::vector<std::weak_ptr<Customer>> waitlist;
  void notifyWaitlist();

public:
  Restaurant(int initialTableCount);
  bool reserveTable(const std::shared_ptr<Customer>& customer);
  void printWaitlist();
  void releaseTable(int tableNumber);
};

#endif
