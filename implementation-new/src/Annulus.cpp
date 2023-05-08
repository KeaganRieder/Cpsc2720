/**
 * Copyright 2023 <john.anvik@uleth.ca>
 */

#define _USE_MATH_DEFINES
//#include <math.h>
#include <cmath>
#include <cfloat>
#include "Annulus.h"
#include "Exceptions.h"

Annulus::Annulus(Circle *f, Circle *s) {
  if (f == nullptr || s == nullptr) {
    throw invalid_parameter_error("ERROR: circle's can't be Equal to nullptr");
  }
  inner = f;
  outer = s;
}

double Annulus::area() const {
  return M_PI * (pow(inner->getRadius(), 2) - pow(outer->getRadius(), 2));
}

double Annulus::perimeter() const {
  return 2 * M_PI * (outer->getRadius() + inner->getRadius());
}

double Annulus::getThickness() const {
  return outer->getRadius();
}
