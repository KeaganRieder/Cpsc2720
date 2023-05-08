//make testshape-Libray
#include <cfloat>
#include "Annulus.h"
#include "Exceptions.h"
#include "gtest/gtest.h"

TEST(TestAnnulus, TestAnnulusBounds) {
  EXPECT_THROW(Annulus(NULL, NULL), invalid_parameter_error);
  Circle* c1 = new Circle(1);
  EXPECT_THROW(Annulus(NULL, c1), invalid_parameter_error);
  delete c1;
  c1 = new Circle(.999999);
  Circle* c2 = new Circle(2);
  EXPECT_NO_THROW(Annulus(c2, c1));
  delete c1;
  delete c2;
  c1 = new Circle(DBL_MAX);
  c2 = new Circle(.9999999);
  EXPECT_NO_THROW(Annulus(c2, c1));
  delete c1;
  delete c2;
}
TEST(TestAnnulus, TestAnnulusAreaCalc) {
  Circle* c1 = new Circle(10);
  Circle* c2 = new Circle(5);
  Annulus a1(c1, c2);
  EXPECT_NEAR(a1.area(), 235.62, 5);
  delete c1;
  delete c2;
}
TEST(TestAnnulus, TestAnnulusParimiterCalc) {
  Circle* c1 = new Circle(10);
  Circle* c2 = new Circle(5);
  Annulus a1(c1, c2);
  EXPECT_NEAR(a1.perimeter(), 94.247, 5);
  delete c1;
  delete c2;
}
TEST(TestAnnulus, TestAnnulusThicknessCalc) {
  Circle* c1 = new Circle(10);
  Circle* c2 = new Circle(5);
  Annulus a1(c1, c2);
  EXPECT_NEAR(a1.getThickness(), 10, 5);
  delete c1;
  delete c2;
}
