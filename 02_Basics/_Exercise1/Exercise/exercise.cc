#include "exercise.h"

#include <iostream>

bool is_even(int n) { return n % 2 == 0; }

void mod_cross_sum(int I, int J) {
  for (int iCnt = 0; iCnt < I; iCnt++) {
    for (int jCnt = 0; jCnt < J; jCnt++) {
      std::cout << "i: " << iCnt << " , "
                << "j: " << jCnt << " := ";
      if (is_even(iCnt + jCnt)) {
        std::cout << "Gerade!" << std::endl;
      } else {
        std::cout << "Ungerade!" << std::endl;
      }
    }
  }
}
