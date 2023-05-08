// Minimal source file that allows the pipeline to pass.

#include <iostream>
#include <iomanip>
#include "Movie.h"

int main() {
    const int TIME_SPAN = 14; // Number of months
    Movie* topGun = new Movie("Top Gun:Maverick", 24.95);

    for (int month = 0; month < TIME_SPAN; ++month) {
      std::cout << std::fixed << std::setprecision(2)
          << topGun->name << ": " << topGun->getPrice() << std::endl;
      topGun->addMonth();
    }
}
