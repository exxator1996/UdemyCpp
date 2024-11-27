#include "exercise.h"

#include <cstdint>
#include <iostream>

// Exercise 1
void push_back(std::int32_t *&input_array, const std::size_t size,
               const std::int32_t value) {
  int *new_array = new int[size + 1];

  for (std::uint32_t i = 0; i < size; i++) {
    new_array[i] = input_array[i];
  }

  new_array[size] = value;

  delete[] input_array;
  input_array = new_array;
}

// Exercise 2
void pop_back(std::int32_t *&input_array, const std::size_t size) {
  int *new_array = new int[size - 1];

  for (std::uint32_t i = 0; i < size - 1; i++) {
    new_array[i] = input_array[i];
  }

  delete[] input_array;
  input_array = new_array;
}
