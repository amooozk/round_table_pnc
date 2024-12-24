#include <iostream>
#include <vector>

unsigned long long permute_and_calc(unsigned n) {
  unsigned long long cnt;

  //TODO: B1 _  _  _  _ ...
  //NOTE: B1 is fixed (circular permutation)
  // Even indexes for B and odd indexes for G.
  std::vector<unsigned> permutation(2 * n);
  permutation[0] = 1;

  

  return cnt;
}

int main() {
  //INFO: N boys, N Girls
  unsigned n;
  std::cin >> n;

  unsigned long long cnt = permute_and_calc(n);
  std::cout << cnt << std::endl;

  return 0;
}
