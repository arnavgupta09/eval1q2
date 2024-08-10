#include <iostream>
using namespace std;

int main() {

  int i, n,x;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> x;
    for (int n=0;n<x;n++){
        bool is_prime = true;
        if (n == 0 || n == 1) {
            is_prime = false;
        }

      for (i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
          is_prime = false;
          break;
        }
      }

      if (is_prime)
        cout << n << " is a prime number"<<endl;
    }

  return 0;
}
