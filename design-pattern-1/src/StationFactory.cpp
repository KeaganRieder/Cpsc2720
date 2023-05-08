#include "StationFactory.h"
LethbridgeStationFactory::LethbridgeStationFactory() {
}
LethbridgeStationFactory::~LethbridgeStationFactory() {
}

Station* LethbridgeStationFactory::GetStation(Genre genre) {
  switch (genre) {
    case Genre::Rock:
      return new LethbridgeRock();
      break;
    case Genre::Jazz:
      return new LethbridgeJazz();
      break;
    case Genre::Country:
      return new LethbridgeCountry();
      break;
    case Genre::Classical:
      return new LethbridgeClassical();
      break;
  }
  return nullptr;
}
CalgaryStationFactory::CalgaryStationFactory() {
}
CalgaryStationFactory::~CalgaryStationFactory() {
}
Station* CalgaryStationFactory::GetStation(Genre genre) {
  switch (genre) {
    case Genre::Rock:
      return new CalgaryRock();
      break;
    case Genre::Jazz:
      return new CalgaryJazz();
      break;
    case Genre::Country:
      return new CalgaryCountry();
      break;
    case Genre::Classical:
      return new CalgaryClassical();
      break;
  }
  return nullptr;
}
MedicineHatStationFactory::MedicineHatStationFactory() {
}
MedicineHatStationFactory::~MedicineHatStationFactory() {
}
Station* MedicineHatStationFactory::GetStation(Genre genre) {
  switch (genre) {
    case Genre::Rock:
      return new MedicineHatRock();
      break;
    case Genre::Jazz:
      return new MedicineHatJazz();
      break;
    case Genre::Country:
      return new MedicineHatCountry();
      break;
    case Genre::Classical:
      return new MedicineHatClassical();
      break;
  }
  return nullptr;
}
