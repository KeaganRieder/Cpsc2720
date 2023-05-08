/**
 * Copyright 2023 <john.anvik@uleth.ca>
 */
#define _USE_MATH_DEFINES
#include <math.h>
#include <cfloat>
#include "Circle.h"
#include "Exceptions.h"

Circle::Circle(double r)
    :
    radius { r } {
  if (radius <= 0) {
    throw invalid_parameter_error(
        "ERROR: circle's radius must be greater than 0");
  } else if (radius == __builtin_inff()) {
    throw invalid_parameter_error(
        "ERROR: circle's Radius can's be equal to infinity");
  } else if (isnan(radius)) {
    throw invalid_parameter_error(
        "ERROR: circle's radius can't be equal to NaN");
  }
}

double Circle::area() const {
  if (radius == DBL_MAX) {
    throw calculation_error("ERROR: Area Overflow");
  }
  return M_PI * pow(radius, 2);
}
double Circle::perimeter() const {
  if (radius == DBL_MAX) {
    throw calculation_error("ERROR: perimeter Overflow");
  }
  return 2 * M_PI * radius;
}

double Circle::getRadius() const {
  return radius;
}
