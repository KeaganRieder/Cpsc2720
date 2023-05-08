/*
 * Age.h
 *
 *  Created on: Mar. 23, 2023
 *      Author: keagan rieder
 */

#ifndef INCLUDE_AGE_H_
#define INCLUDE_AGE_H_

class Age {
 public:
  virtual double UpdatePrice(double price) = 0;
};

class New : public Age {
 public:
  New();
  virtual ~New();
  double UpdatePrice(double price);
};

class FourMonths : public Age {
 public:
  FourMonths();
  virtual ~FourMonths();
  double UpdatePrice(double price);
};

class SixMonths : public Age {
 public:
  SixMonths();
  virtual ~SixMonths();
  double UpdatePrice(double price);
};

class OneYear : public Age {
 public:
  OneYear();
  virtual ~OneYear();
  double UpdatePrice(double price);
};
#endif //INCLUDE_AGE_H_
