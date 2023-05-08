/**
 * Copyright 2023 <john.anvik@uleth.ca>
 */
#include <math.h>
#include <cfloat>
#include "Pyramid.h"
#include "Exceptions.h"

Pyramid::Pyramid(double s, double h) {
  if (s <= 0 || h <= 0) {
    throw invalid_parameter_error(
        "ERROR: Height or side can't be less then or equal to 0");
  } else if (s == __builtin_inff() || h == __builtin_inff()) {
    throw invalid_parameter_error(
        "ERROR:Height or side can't be equal to infinity");
  } else if (isnan(s) || isnan(h)) {
    throw invalid_parameter_error(
        "ERROR: Height or side can't be equal to NaN");
  }
  side = s;
  height = h;
}

double Pyramid::area() const {
  if (side == DBL_MAX || height == DBL_MAX) {
    throw calculation_error("ERROR: Area Overflow");
  }

  return pow(side, 2) + 2 * side * sqrt(pow(side, 2) / 4 + pow(height, 2));
}

double Pyramid::volume() const {
  if (side == DBL_MAX || height == DBL_MAX) {
    throw calculation_error("ERROR: Area Overflow");
  }
  return pow(side, 2) * (height / 3);
}

double Pyramid::getHeight() const {
  return height;
}

double Pyramid::getSide() const {
  return side;
}

