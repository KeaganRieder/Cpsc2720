#include "Radio.h"

Radio::Radio() {
}
Radio::~Radio() {
  delete stationFact;
}
void Radio::setLocation(Cities city) {
  switch (city) {
    case Cities::Lethbridge:
      stationFact = new LethbridgeStationFactory();
      break;
    case Cities::Calgary:
      stationFact = new CalgaryStationFactory();
      break;
    case Cities::MedicineHat:
      stationFact = new MedicineHatStationFactory();
      break;
  }
}

Station* Radio::tune(Genre genre) {
  return stationFact->GetStation(genre);
}
