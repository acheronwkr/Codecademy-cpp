#include <iostream>

int main() {
  
  // Declaring currencies
  double pesos, reais, soles, dollars;

  // Asking first question
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
 // Asking second question
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
 // Asking third question
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Current exchange rates
  // 1 columbian pesos = 0,00027 usd
  // 1 brazilian reais = 0,19    usd
  // 1 peruvian soles  = 0,30    usd

  // Calculating total USD
  dollars = (0.00027 * pesos) + (0.19 * reais) + (0.30 * soles);
  std::cout << "US Dollars = $" << dollars << "\n";
}
