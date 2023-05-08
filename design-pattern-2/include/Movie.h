/*
 * Movie.h
 *
 *  Created on: Mar. 16, 2023
 *      Author: john.anvik
 */

#ifndef INCLUDE_MOVIE_H_
#define INCLUDE_MOVIE_H_

#include <PriceModifer.h>
#include <string>

class Movie {
 public:
  /**
   * @brief Name of the movie.
   */
  const std::string name;

  /**
   * @brief The original price for the movie.
   */
  const double boughtFor;

  /**
   * @param n The name of the movie.
   * @param p The price of the movie at the time of release to video.
   */
  Movie(const std::string n, const double p)
      :
      name(n),
      boughtFor(p),
      months(0) {
    modifer = new PriceModifer();
  }

  ~Movie() {
    delete modifer;
  }

  /**
   * @brief Increase the number of months since release by 1.
   */
  void addMonth() {
    months++;
  }

  /**
   * @brief Get price.
   * @return The current price of the movie.
   */
  double getPrice() {
    return modifer->Price(boughtFor, months);
  }

 private:
  /**
   * @brief Number of months since the movie was released.
   */
  int months;
  PriceModifer *modifer;
};

#endif /* INCLUDE_MOVIE_H_ */
