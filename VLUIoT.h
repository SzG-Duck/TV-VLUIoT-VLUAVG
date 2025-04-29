#ifndef VLUIoT_H
#define VLUIoT_H

#include <Arduino.h>

class VLUIoT {
public:
    // Constructor
    VLUIoT(int pin);

    // Phương thức bật/tắt LED sau khoảng thời gian delay (tính bằng mili giây)
    void controlLED(unsigned long delayTime);

private:
    int _pin;
};

#endif
