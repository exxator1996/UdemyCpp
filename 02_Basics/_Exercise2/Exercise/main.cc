#include <cstdint>
#include <iostream>

void super_duper_example(const int input_number) {
  static int cnt = 0;
  constexpr int reset_value = 10;

  if (input_number == reset_value) {
    cnt = 0;
  }

  if (input_number % 2 == 0) {
    ++cnt;
  }

  std::cout << "Counter: " << cnt << std::endl;
}

int main() {
  for (int i = 0; i < 19; i++) {
    super_duper_example(i);
  }
  return 0;
}
