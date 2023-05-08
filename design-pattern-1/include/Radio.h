/*
 * Radio.h
 *
 *  Created on: Mar. 9, 2023
 *      Author: john.anvik
 *  Modifed on : Mar. 15, 2023
 *      Author: Keagan Rieder
 */

#ifndef RADIO_H_
#define RADIO_H_

#include "Enums.h"
#include "Station.h"
#include "StationFactory.h"

/**
 * @class Radio Radio.h "Radio.h"
 * @brief A representation of a car radio.
 */
class Radio {
 public:
  /**
   * @brief Default constructor
   */
  Radio();

  /**
   * @brief Default destructor
   */
  virtual ~Radio();

  /**
   * @brief Sets the city the vehicle is in.
   * @param[in] c The city.
   */
  void setLocation(Cities cities);

  /**
   * @brief Tune the radio to a particular music genre.
   * @para[in] g The genre of music.
   * @return A pointer to a station that plays that type of music.
   */
  Station* tune(Genre genre);

 private:
  StationFactory *stationFact;
};

#endif /* RADIO_H_ */
