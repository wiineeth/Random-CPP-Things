
#include <bits/stdc++.h>

int main() {

  size_t limit = 0;

  std::cout << "Upper limit:";

  std::cin >> limit;

  size_t sum = 0;

  for (size_t i = 3; i < limit; ++i) {

    if (i % 3 == 0 || i % 5 == 0) {

      sum += i;

    }

  }

  std::cout << "sum=" << sum << std::endl;

}