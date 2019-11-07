#pragma once

#include <iostream>

template <typename T> class Complex {
private:
  T real, imaginary;

  static Complex max;

  void setMax();

public:
  // complex 0
  Complex();

  // initialize complex from given real and imaginary parts
  Complex(T re, T im);

  // initialize complex from a different complex
  Complex(const Complex &other);

  // get the components
  T getReal() const;
  T getImaginary() const;

  // set the components
  void setReal(T re);
  void setImaginary(T im);

  // distance from origin
  T magnitude() const;

  // set magnitude to 1 if number is non-zero
  void normalize();

  // arithmetic
  Complex operator-();
  Complex operator+(const Complex &other);
  Complex operator-(const Complex &other);
  Complex operator*(const Complex &other);

  // comparison
  bool operator==(const Complex &other) const;
  bool operator!=(const Complex &other) const;

  // static
  static void printMaxComplex();
  static Complex fromMax();

	void print();
};
