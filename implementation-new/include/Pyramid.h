/*
 * Pyramid.h
 *
 *  Created on: Jan 18, 2023
 *      Author: anvik
 */

#ifndef INCLUDE_PYRAMID_H_
#define INCLUDE_PYRAMID_H_

#include "Shape3D.h"

/**
 * Represents a square pyramid.<br>
 * See https://en.wikipedia.org/wiki/Pyramid_(geometry)
 */
class Pyramid : public Shape3D {
 public:
  /**
   * @param s the side of the Pyramid.
   * @param h the height of the Pyramid.
   * @throws invalid_parameter_error if s is <= 0
   * @throws invalid_parameter_error if h is <= 0
   */
  explicit Pyramid(double s, double h);
  virtual ~Pyramid() { }

  double area() const;
  double volume() const;

  /**
   * @return the side of the pyramid
   */
  double getSide() const;

  /**
   * @return the height of the pyramid
   */
  double getHeight() const;

 private:
  double side;
  double height;
};

#endif /* INCLUDE_PYRAMID_H_ */
