#include <Age.h>

//new movie
New::New() {
}
New::~New() {
}
double New::UpdatePrice(double price) {
  return price;
}

//four month old movie
FourMonths::FourMonths() {
}
FourMonths::~FourMonths() {
}
double FourMonths::UpdatePrice(double price) {
  return price * 0.75;
}

//Six Months old movie
SixMonths::SixMonths() {
}
SixMonths::~SixMonths() {
}
double SixMonths::UpdatePrice(double price) {
  return price * 0.5;
}

//Year old movie
OneYear::OneYear() {
}
OneYear::~OneYear() {
}
double OneYear::UpdatePrice(double price) {
  return price * 0.25;
}
