/*
 * MovieAge.h
 *
 *  Created on: Mar. 23, 2023
 *      Author: keagan rieder
 */

#ifndef INCLUDE_PRICEMODIFER_H_
#define INCLUDE_PRICEMODIFER_H_
#include <Age.h>

class PriceModifer {
 public:
  /*
   * @breif default constructor
   */
  PriceModifer();
  /*
   * @breif destuctor
   */
  virtual ~PriceModifer();
  /*
   * @breif modifes price of movie
   * @parm [in] months sense as int
   * @parm [in] original price of movie
   * @return new pirce of movie
   */
  double Price(double price, int month);
  /*
   * @breif sets the movies age modifier
   * @parm [in] months sense  as int
   */
  void SetAge(int month);

 private:
  Age *age;
};
#endif //INCLUDE_PRICEMODIFER_H_
