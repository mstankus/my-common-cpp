#include <assert.h>
#include <climits>

int main() {
  std::size_t minus_one = 0;
  minus_one =  ~minus_one;
  auto k = sizeof(std::size_t)*CHAR_BIT;
  assert((minus_one>>k)==minus_one);
  return 0;
}
