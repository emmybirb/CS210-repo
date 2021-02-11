/*
 * Fibonacci through recursion
 * 
 * Ref: https://en.cppreference.com/w/cpp/chrono
 */

#include <iostream>
#include <chrono> // C++11

int fibonacci(int n) {
  if (n<=1)
    return n;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  auto std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
  std::cout << "f(42) = " << fibonacci(42) << '\n';
  auto std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
  return 0;
}
