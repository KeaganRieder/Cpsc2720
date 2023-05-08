/*
 * StationFactory.h
 *
 *  Created on: Mar. 15, 2023
 *      Author: Keagan Rieder
 */

#ifndef STATIONFACTORYS_H_
#define STATIONFACTORYS_H_

#include "Enums.h"
#include "Station.h"

/**
 * @class StationFactory StationFactory.h "StationFactory.h"
 * @brief a station factory
 */
class StationFactory {
 public:
  /**
   * @brief Default constructor
   */
  StationFactory() {
  }
  /**
   * @brief Default destructor
   */
  virtual ~StationFactory() {
  }

  /*
   * @breif tunes into a a station
   * @param[in] c The city.
   * @para[in] g The genre of music.
   * @return A pointer to a station that plays that type of music.
   */
  virtual Station* GetStation(Genre genre) = 0;
};
/**
 * @class LethbridgeStationFactory StationFactory.h "StationFactory.h"
 * @brief a a factory to create Lethbridge stations
 */
class LethbridgeStationFactory : public StationFactory {
 public:
  /**
   * @brief Default constructor
   */
  LethbridgeStationFactory();
  /**
   * @brief Default destructor
   */
  virtual ~LethbridgeStationFactory();
  /*
   * @breif tunes into a a station
   * @param[in] c The city.
   * @para[in] g The genre of music.
   * @return A pointer to a station that plays that type of music.
   */
  Station* GetStation(Genre genre);
};
/**
 * @class CalgaryStationFactory StationFactory.h "StationFactory.h"
 * @brief a a factory to create Calgary stations
 */
class CalgaryStationFactory : public StationFactory {
 public:
  /**
   * @brief Default constructor
   */
  CalgaryStationFactory();
  /**
   * @brief Default destructor
   */
  virtual ~CalgaryStationFactory();
  /*
   * @breif tunes into a a station
   * @param[in] c The city.
   * @para[in] g The genre of music.
   * @return A pointer to a station that plays that type of music.
   */
  Station* GetStation(Genre genre);
};
/**
 * @class MedicineHatStationFactory StationFactory.h "StationFactory.h"
 * @brief a a factory to create Medicine hat stations
 */
class MedicineHatStationFactory : public StationFactory {
 public:
  /**
   * @brief Default constructor
   */
  MedicineHatStationFactory();
  /**
   * @brief Default destructor
   */
  virtual ~MedicineHatStationFactory();
  /*
   * @breif tunes into a a station
   * @param[in] c The city.
   * @para[in] g The genre of music.
   * @return A pointer to a station that plays that type of music.
   */
  Station* GetStation(Genre genre);
};

#endif /* STATIONFACTORYS_H_ */
