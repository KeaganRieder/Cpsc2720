/*
 * Torus.h
 *
 *  Created on: Jan 18, 2023
 *      Author: anvik
 */

#ifndef INCLUDE_TORUS_H_
#define INCLUDE_TORUS_H_

#include "Shape3D.h"

/**
 * Represents a ring torus.<br>
 * See https://en.wikipedia.org/wiki/Torus
 */
class Torus : public Shape3D {
 public:
  /**
   * @param r the radius of the torus.
   * @param tr the radius of the tube.
   * @throws invalid_parameter_error if r is <= 0
   * @throws invalid_parameter_error if tr is <= 0
   * @throws invalid_parameter_error if r < tr
   */
  explicit Torus(double r, double tr);
  virtual ~Torus() { }

  double area() const;
  double volume() const;

  /**
   * @return the radius of the tube
   */
  double getTubeRadius() const;

  /**
   * @return the radius of the torus
   */
  double getRadius() const;

 private:
  double radius;
  double tube;
};

#endif /* INCLUDE_TORUS_H_ */
