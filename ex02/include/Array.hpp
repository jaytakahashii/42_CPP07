#pragma once

template <typename T>
class Array {
 private:
  T* _array;
  unsigned int _size;

 public:
  // === OCF ===
  Array();
  Array(const Array& other);
  Array& operator=(const Array& other);
  ~Array();

  // === Constructors ===
  Array(unsigned int n);

  // === Operators ===
  T& operator[](unsigned int index);
  const T& operator[](unsigned int index) const;

  // === Methods ===
  unsigned int size() const;
};

#include "Array.tpp"  // Include the implementation file (.tpp)
