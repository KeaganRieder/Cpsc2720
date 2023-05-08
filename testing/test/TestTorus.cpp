//make testshape-Libray
#include <cfloat>
#include "Torus.h"
#include "Exceptions.h"
#include "gtest/gtest.h"

TEST(TestTorus, TestTorusBounds) {
  EXPECT_THROW(Torus(-1, -1), invalid_parameter_error);
  EXPECT_THROW(Torus(-1, 0), invalid_parameter_error);
  EXPECT_THROW(Torus(0, -1), invalid_parameter_error);
  EXPECT_THROW(Torus(0, 0), invalid_parameter_error);
  EXPECT_THROW(Torus(.9999999999, DBL_MAX), invalid_parameter_error);
  EXPECT_NO_THROW(Torus(DBL_MAX, .9999999999));
  EXPECT_NO_THROW(Torus(DBL_MAX, DBL_MAX));
}
TEST(TestTorus, TestTorusVolume) {
  Torus* t1 = new Torus(1, .999999);
  EXPECT_NEAR(t1->volume(), 19.74, .999999);
  delete t1;
  t1 = new Torus(10, 5);
  EXPECT_NEAR(t1->volume(), 4934.8, 10);
  delete t1;
}
TEST(TestTorus, TestTorusArea) {
  Torus* t1 = new Torus(1, .999999);
  EXPECT_NEAR(t1->area(), 39.48, .999999);
  delete t1;
  t1 = new Torus(10, 5);
  EXPECT_NEAR(t1->area(), 1973.92, 10);
  delete t1;
}
TEST(TestTorus, TestTorusGetTRadius) {
  Torus* t1 = new Torus(1, .999999);
  EXPECT_NEAR(t1->getTubeRadius(), 0.0000005, .999999);
  delete t1;
  t1 = new Torus(10, 5);
  EXPECT_NEAR(t1->getTubeRadius(), 2.5, 10);
  delete t1;
}
TEST(TestTorus, TestGetTorusRadius) {
  Torus* t1 = new Torus(1, .999999);
  EXPECT_NEAR(t1->getRadius(), 1, .999999);
  delete t1;
  t1 = new Torus(10, 5);
  EXPECT_NEAR(t1->getRadius(), 7.5, 10);
  delete t1;
}
