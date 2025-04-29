#ifndef VLUAVG_H
#define VLUAVG_H

#include <Arduino.h>

class VLUAVG {
public:
    // Constructor
    VLUAVG();

    // Lưu trữ nhiệt độ và độ ẩm vào mảng
    void storeValues(float temperature, float humidity);

    // Tính trung bình nhiệt độ và độ ẩm
    float getAverageTemperature();
    float getAverageHumidity();

private:
    float temperatureValues[10];
    float humidityValues[10];
    int index;
};

#endif
