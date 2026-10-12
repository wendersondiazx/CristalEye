#include <CristalEye.h>

// Após inicializar seu display Adafruit:
CristalEye<Adafruit_SSD1306> eyes(display);

void setup() {
    // Inicialize o display primeiro.
    eyes.begin(128, 64, 50);
    eyes.setAutoblinker(true, 3, 2);
    eyes.setIdleMode(true, 2, 3);
    eyes.setCuriosity(true);
    eyes.setMood(HAPPY);
}

void loop() {
    eyes.update();
}
