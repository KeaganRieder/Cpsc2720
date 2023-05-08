/**
 * Copyright 2023 <john.anvik@uleth.ca>
 */
#define _USE_MATH_DEFINES
#include <math.h>
#include <cfloat>
#include "Torus.h"
#include "Exceptions.h"

Torus::Torus(double r, double tr) {
  if (r <= 0 || tr <= 0) {
    throw invalid_parameter_error(
        "ERROR: radius or tube radius can't be less then or equal to 0");
  } else if (r == __builtin_inff() || tr == __builtin_inff()) {
    throw invalid_parameter_error(
        "ERROR:radius or tube radiuscan't be equal to infinity");
  } else if (isnan(r) || isnan(tr)) {
    throw invalid_parameter_error(
        "ERROR: radius or tube radius can't be equal to NaN");
  } else if (r < tr) {
    throw invalid_parameter_error(
        "ERROR: Radius can't be less then tube radius");
  }

  radius = r;
  tube = tr;
}

double Torus::area() const {
  if (radius == DBL_MAX || tube == DBL_MAX) {
    throw calculation_error("ERROR: Area Overflow");
  }
  return (2 * M_PI * tube) * (2 * M_PI * radius);
}

double Torus::volume() const {
  if (radius == DBL_MAX || tube == DBL_MAX) {
    throw calculation_error("ERROR: Area Overflow");
  }
  return (M_PI * pow(tube, 2)) * (2 * M_PI * radius);
}

double Torus::getTubeRadius() const {
  return tube;
}

double Torus::getRadius() const {
  return radius;
}

