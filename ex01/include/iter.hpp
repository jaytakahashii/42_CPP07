#pragma once

template <typename T, typename U>
void iter(T *array, size_t length, void (*func)(U &)) {
  if (array == NULL || func == NULL) {
    return;
  }
  for (size_t i = 0; i < length; ++i) {
    func(array[i]);
  }
}
