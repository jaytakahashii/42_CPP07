#pragma once

#include <stdexcept>

template <typename T>
class Array {
 private:
  T* _array;
  unsigned int _size;

 public:
  Array();                               // デフォルトコンストラクタ
  Array(unsigned int n);                 // サイズ指定コンストラクタ
  Array(const Array& other);             // コピーコンストラクタ
  Array& operator=(const Array& other);  // 代入演算子
  ~Array();                              // デストラクタ

  T& operator[](unsigned int index);              // 添字演算子（読み書き）
  const T& operator[](unsigned int index) const;  // 添字演算子（const）

  unsigned int size() const;  // 要素数取得
};
