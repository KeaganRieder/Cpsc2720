/*
 * CPSC 2720 Spring 2019
 * Copyright 2019 Dr. Anvik <john.anvik@uleth.ca>
 */

//make testshape-Libray
#include <cfloat>
#include "Circle.h"
#include "Exceptions.h"
#include "gtest/gtest.h"

TEST(TestCircle, TestCircleBounds) {
  EXPECT_THROW(Circle(-1), invalid_parameter_error);
  EXPECT_THROW(Circle(0), invalid_parameter_error);
  EXPECT_NO_THROW(Circle(.9999999999));
  EXPECT_NO_THROW(Circle(DBL_MAX));
}
TEST(TestCircle, CheckRadiusCalc) {
  Circle c1(2.5);
  EXPECT_EQ(c1.getRadius(), 2.5);
  Circle c2(10);
  EXPECT_EQ(c2.getRadius(), 10);
}
TEST(TestCircle, CheckCirclePerimiterCalc) {
  Circle c1(10.0);
  EXPECT_NEAR(c1.perimeter(), 62.83, 10);
  Circle c2(.9999999999);
  EXPECT_NEAR(c2.perimeter(), 6.28, .9999999999);
}
TEST(TestCircle, CheckCorrectAreaCalc) {
  Circle c1(10.0);
  EXPECT_NEAR(c1.area(), 314.16, 10);
  Circle c2(.9999999999);
  EXPECT_NEAR(c2.area(), 3.14, .9999999999);
}
