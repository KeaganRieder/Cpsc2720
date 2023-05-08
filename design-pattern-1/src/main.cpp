/*
 * main.cpp
 *
 *  Created on: Mar. 9, 2023
 *      Author: john.anvik
 */

#include "Enums.h"
#include "Radio.h"
#include <iostream>

int main(int argc, char **argv) {
  Radio *radio = new Radio();

  Cities locations[] = { Lethbridge, Calgary, MedicineHat };

  for (Cities c : locations) {
    radio->setLocation(c);
    Station *s;
    s = radio->tune(Rock);
    std::cout << s->getSignal() << std::endl;
    delete s;

    s = radio->tune(Jazz);
    std::cout << s->getSignal() << std::endl;
    delete s;

    s = radio->tune(Country);
    std::cout << s->getSignal() << std::endl;
    delete s;

    s = radio->tune(Classical);
    std::cout << s->getSignal() << std::endl;
    delete s;

    std::cout << std::endl;

    delete radio;
  }
}
