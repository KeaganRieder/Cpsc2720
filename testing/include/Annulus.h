/*
 * Annulus.h
 *
 *  Created on: Jan 18, 2023
 *      Author: anvik
 */

#ifndef INCLUDE_ANNULUS_H_
#define INCLUDE_ANNULUS_H_

#include "Shape2D.h"
#include "Circle.h"

/**
 * Represents an annulus.<br>
 * See https://en.wikipedia.org/wiki/Annulus_(mathematics)
 */
class Annulus : public Shape2D {
 public:
  /**
   * @param first the first circle.
   * @param second the second circle.
   * @throws invalid_parameter_error if first or second is null
   */
  explicit Annulus(Circle* first, Circle* second);
  virtual ~Annulus() { }

  double area() const;
  double perimeter() const;

  /**
   * @return The thickness of the annulus.
   */
  double getThickness() const;

 private:
  Circle* inner;
  Circle* outer;
};

#endif /* INCLUDE_ANNULUS_H_ */
