/*
 * Fibonacci through iteration
 * 
 * Complete this code (see the textbook for implementation)
 */

#include <iostream>
#include <chrono> // C++11

int fibonacci(int n) {
}

int main() {
  auto start = std::chrono::steady_clock::now();
  std::cout << "f(42) = " << fibonacci(42) << '\n';
  auto end = std::chrono::steady_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
  return 0;
}
