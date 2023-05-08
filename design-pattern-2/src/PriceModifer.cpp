#include <PriceModifer.h>

PriceModifer::PriceModifer() {
  age = new New();
}
/*
 * @breif destuctor
 */
PriceModifer::~PriceModifer() {
  delete age;
}

double PriceModifer::Price(double price, int months) {
  SetAge(months);

  return age->UpdatePrice(price);
}

void PriceModifer::SetAge(int month) {
  switch (month) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      delete age;
      age = new FourMonths;
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      delete age;
      age = new SixMonths;
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 11:
      break;
    case 12:
      break;
    case 13:
      delete age;
      age = new OneYear;
      break;
  }
}
