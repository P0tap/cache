// Copyright 2020 P0tap <nikita.potapov.1999@bk.ru>

#include <gtest/gtest.h>

#include "iostream"
#include "tester.hpp"
TEST(Example, EmptyTest) {
  tester test;
  test.setBufs();
  test.straightTest();
  std::cout << test;
  test.revertTest();
  std::cout << test;
  test.randomTest();
  std::cout << test;
}

