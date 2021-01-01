#include <assert.h>

int main() {
  int i = -6;
  i = i % 5;
  assert(i==-1);
  return 0;
}
