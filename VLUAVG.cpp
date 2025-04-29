#include "VLUAVG.h"

// Constructor khởi tạo mảng và biến chỉ mục
VLUAVG::VLUAVG() {
    index = 0;
    for (int i = 0; i < 10; i++) {
        temperatureValues[i] = 0.0;
        humidityValues[i] = 0.0;
    }
}

// Lưu trữ giá trị nhiệt độ và độ ẩm
void VLUAVG::storeValues(float temperature, float humidity) {
    temperatureValues[index] = temperature;
    humidityValues[index] = humidity;

    // Cập nhật chỉ mục (lặp lại khi tới 10)
    index = (index + 1) % 10;
}

// Tính trung bình nhiệt độ
float VLUAVG::getAverageTemperature() {
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += temperatureValues[i];
    }
    return sum / 10.0;
}

// Tính trung bình độ ẩm
float VLUAVG::getAverageHumidity() {
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += humidityValues[i];
    }
    return sum / 10.0;
}
