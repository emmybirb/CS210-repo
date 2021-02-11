/*
 * Fibonacci through iteration
 * Emmy Baker
 */

#include <iostream>
#include <chrono> // C++11

int fib(int n) {
  /* 
   * if (input <= 1)
   *   return nth term;
   * else
   *   return (find the place in the sequence
   *   for the two numbers before n and keep going until 
   *   it reaches the smallest number in the sequence)
   */

   if (n<= 1)
    return n;
  else 
    return fib(n-1) + fib(n-2);
}

int main() {
  std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
  std::cout << "f(42) = " << fib(42) << '\n';
  std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
  return 0;
}
