#include "VLUIoT.h"

// Constructor nhận vào số chân LED
VLUIoT::VLUIoT(int pin) {
    _pin = pin;
    pinMode(_pin, OUTPUT);  // Đặt chân LED làm OUTPUT
}

// Phương thức bật/tắt LED sau một khoảng thời gian delay
void VLUIoT::controlLED(unsigned long delayTime) {
    digitalWrite(_pin, HIGH);  // Bật LED
    delay(delayTime);          // Đợi thời gian đã xác định
    digitalWrite(_pin, LOW);   // Tắt LED
}
