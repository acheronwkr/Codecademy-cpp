#include <iostream>
#include "Restaurant.hpp"

using namespace std;
int main() {
  // Initialize Restaurant with 2 tables
  Restaurant restaurant(2);
  // Create customers and make reservations
  shared_ptr<Customer> customer1 = make_shared<Customer>("Bober");
  shared_ptr<Customer> customer2 = make_shared<Customer>("Ziomek");
  shared_ptr<Customer> customer3 = make_shared<Customer>("Ryjek");
  shared_ptr<Customer> customer4 = make_shared<Customer>("Mordeczka");

  cout << "Reserving table for " << customer1->getName() << ": " << (restaurant.reserveTable(customer1) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << customer2->getName() << ": " << (restaurant.reserveTable(customer2) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << customer3->getName() << ": " << (restaurant.reserveTable(customer3) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << customer4->getName() << ": " << (restaurant.reserveTable(customer4) ? "Success" : "Added to waitlist") << endl;
  // Release a table and demonstrate waitlist notification
  restaurant.releaseTable(1);
  restaurant.printWaitlist();

  return 0;
}
