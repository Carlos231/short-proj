#include "driver.cpp"

#ifndef CAR_H
#define CAR_H

class car{
  protected:
    string make;
    string model;
    string type;
    int year;
    int vin;
    int price;

  public:
    car();
    get_info();

};

#endif
