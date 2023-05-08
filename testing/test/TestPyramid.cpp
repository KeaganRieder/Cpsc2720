/*
 * CPSC 2720 Spring 2019
 * Copyright 2019 Dr. Anvik <john.anvik@uleth.ca>
 */

//make testshape-Libray
#include <cfloat>
#include "Pyramid.h"
#include "Exceptions.h"
#include "gtest/gtest.h"

TEST(TestPyramid, TestPyramidBounds) {
  EXPECT_THROW(Pyramid(-1, -1), invalid_parameter_error);
  EXPECT_THROW(Pyramid(0, 0), invalid_parameter_error);
  EXPECT_NO_THROW(Pyramid(.9999999999, .9999999999));
  EXPECT_NO_THROW(Pyramid(DBL_MAX, DBL_MAX));
}
TEST(TestPyramid, TestPyramidArea) {
  Pyramid* p1 = new Pyramid(.999999, .999999);
  EXPECT_NEAR(p1->area(), 2.34, .999999);
  delete p1;
  p1 = new Pyramid(10, 5);
  EXPECT_NEAR(p1->area(), 241.42, 10);
  delete p1;
  p1 = new Pyramid(5, 10);
  EXPECT_NEAR(p1->area(), 128, 10);
  delete p1;
}
TEST(TestPyramid, TestPyramidVolume) {
  Pyramid* p1 = new Pyramid(.999999, .999999);
  EXPECT_NEAR(p1->volume(), 0.33, .999999);
  delete p1;
  p1 = new Pyramid(10, 5);
  EXPECT_NEAR(p1->volume(), 166.67, 10);
  delete p1;
  p1 = new Pyramid(5, 10);
  EXPECT_NEAR(p1->volume(), 83.33, 10);
  delete p1;
}
TEST(TestPyramid, TestPyramidGetHeight) {
  Pyramid p1(10, 5);
  EXPECT_NEAR(p1.getHeight(), 5, 5);
  Pyramid p2(5, 10);
  EXPECT_NEAR(p1.getHeight(), 10, 10);
}
TEST(TestPyramid, TestGetPyramidSide) {
  Pyramid p1(10, 5);
  EXPECT_NEAR(p1.getSide(), 10, 10);
  Pyramid p2(5, 10);
  EXPECT_NEAR(p1.getSide(), 5, 5);
}
