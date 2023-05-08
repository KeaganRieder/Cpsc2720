/*
 * Station.h
 *
 *  Created on: Mar. 9, 2023
 *      Author: john.anvik
 * Changed on : Mar. 15, 2023
 *      Author: Keagan Rieder
 */

#ifndef INCLUDE_STATION_H_
#define INCLUDE_STATION_H_

#include <string>
/**
 * @class Station Station.h "Station.h"
 * @brief A representation of a radio station.
 *
 */
class Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  Station(std::string n)
      :
      name(n) {
  }

  /**
   * @brief The signal from the radio station.
   * @return A string representing the signal from the radio station.
   */
  std::string getSignal() {
    return "This is " + name + "!";
  }

 private:
  std::string name;
};

//LETHBRIDGE STATIONS
/**
 * @class LethbridgeRock Station.h "Station.h"
 * @brief A representation of a LethbridgeRock station.
 *
 */
class LethbridgeRock : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  LethbridgeRock()
      :
      Station("Rock 106.7") {
  }
};
/**
 * @class LethbridgeJazz Station.h "Station.h"
 * @brief A representation of a LethbridgeJazz station.
 *
 */
class LethbridgeJazz : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  LethbridgeJazz()
      :
      Station("Smooth Jazz 104.3") {
  }
};
/**
 * @class LethbridgeCountry Station.h "Station.h"
 * @brief A representation of a LethbridgeCountry station.
 *
 */
class LethbridgeCountry : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  LethbridgeCountry()
      :
      Station("Country 95.5") {
  }
};
/**
 * @class LethbridgeClassical Station.h "Station.h"
 * @brief A representation of a LethbridgeClassical station.
 *
 */
class LethbridgeClassical : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  LethbridgeClassical()
      :
      Station("Classical 98.1") {
  }
};
//CALGARY STATIONS
/**
 * @class CalgaryRock Station.h "Station.h"
 * @brief A representation of a CalgaryRock station.
 *
 */
class CalgaryRock : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  CalgaryRock()
      :
      Station("Virgin Radio 98.5") {
  }
};
/**
 * @class CalgaryJazz Station.h "Station.h"
 * @brief A representation of a CalgaryJazz station.
 *
 */
class CalgaryJazz : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  CalgaryJazz()
      :
      Station("CBC Music 102.1") {
  }
};
/**
 * @class CalgaryCountry Station.h "Station.h"
 * @brief A representation of a CalgaryCountry station.
 *
 */
class CalgaryCountry : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  CalgaryCountry()
      :
      Station("Country 105.1") {
  }
};
/**
 * @class CalgaryClassical Station.h "Station.h"
 * @brief A representation of a CalgaryClassical station.
 *
 */
class CalgaryClassical : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  CalgaryClassical()
      :
      Station("CBC Music 102.1") {
  }
};

//MEDICINE HAT STATIONS
/**
 * @class MedicineHatRock Station.h "Station.h"
 * @brief A representation of a MedicineHatRock station.
 *
 */
class MedicineHatRock : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  MedicineHatRock()
      :
      Station("Rock 105.3") {
  }
};
/**
 * @class CalgaryJazz Station.h "Station.h"
 * @brief A representation of a MedicineHatJazz station.
 *
 */
class MedicineHatJazz : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  MedicineHatJazz()
      :
      Station("Jazz Café 93.7") {
  }
};
/**
 * @class MedicineHatCountry Station.h "Station.h"
 * @brief A representation of a MedicineHatCountry station.
 *
 */
class MedicineHatCountry : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  MedicineHatCountry()
      :
      Station("Chat 94.5") {
  }
};
/**
 * @class MedicineHatClassical Station.h "Station.h"
 * @brief A representation of a MedicineHatClassical station.
 *
 */
class MedicineHatClassical : public Station {
 public:
  /**
   * @brief Constructor
   * @param[in] n The name of the radio station.
   */
  MedicineHatClassical()
      :
      Station("CBC Music 102.1") {
  }
};
#endif /* INCLUDE_STATION_H_ */
