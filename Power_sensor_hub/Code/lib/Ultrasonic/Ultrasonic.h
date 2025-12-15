#pragma once
#include <stdint.h>

class Ultrasonic {
    private:
        const uint8_t TRIG_PIN;
        const uint8_t ECHO_PIN; 

    public :
        Ultrasonic(uint8_t trigPin,   uint8_t echoPin) :
                  TRIG_PIN(trigPin), ECHO_PIN(echoPin) {}

        void init() {
            pinMode(TRIG_PIN, OUTPUT);
            pinMode(ECHO_PIN, INPUT);

            vTaskDelay(pdMS_TO_TICKS(100));
        };

        void task() {
            init();

            for(;;) {
                digitalWrite     (TRIG_PIN, 0);

                digitalWrite     (TRIG_PIN, 1);
                delayMicroseconds(10);

                digitalWrite     (TRIG_PIN, 0);
            }
        }
};