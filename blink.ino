#include "Particle.h"

const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void long_blink() {
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(100);
}

void short_blink() {
    digitalWrite(MY_LED, HIGH);
    delay(50);
    digitalWrite(MY_LED, LOW);
    delay(100);
}

void flash_char(char c) {
    switch (c) {
        case 'a':
            short_blink();
            long_blink();
            break;
        case 'b':
            long_blink();
            short_blink();
            short_blink();
            short_blink();
            break;
        case 'c':
            long_blink();
            short_blink();
            long_blink();
            short_blink();
            break;
        case 'd':
            long_blink();
            short_blink();
            short_blink();
            break;
        case 'e':
            short_blink();
            break;
        case 'f':
            short_blink();
            short_blink();
            long_blink();
            short_blink();
            break;
        case 'g':
            long_blink();
            long_blink();
            short_blink();
            break;
        case 'h':
            short_blink();
            short_blink();
            short_blink();
            short_blink();
            break;
        case 'i':
            short_blink();
            short_blink();
            break;
        case 'j':
            short_blink();
            long_blink();
            long_blink();
            long_blink();
            break;
        case 'k':
            long_blink();
            short_blink();
            long_blink();
            break;
        case 'l':
            short_blink();
            long_blink();
            short_blink();
            short_blink();
            break;
        case 'm':
            long_blink();
            long_blink();
            break;
        case 'n':
            long_blink();
            short_blink();
            break;
        case 'o':
            long_blink();
            long_blink();
            long_blink();
            break;
        case 'p':
            short_blink();
            long_blink();
            long_blink();
            short_blink();
            break;
        case 'q':
            long_blink();
            long_blink();
            short_blink();
            long_blink();
            break;
        case 'r':
            short_blink();
            long_blink();
            short_blink();
            break;
        case 's':
            short_blink();
            short_blink();
            short_blink();
            break;
        case 't':
            long_blink();
            break;
        case 'u':
            short_blink();
            short_blink();
            long_blink();
            break;
        case 'v':
            short_blink();
            short_blink();
            short_blink();
            long_blink();
            break;
        case 'w':
            short_blink();
            long_blink();
            long_blink();
            break;
        case 'x':
            long_blink();
            short_blink();
            short_blink();
            long_blink();
            break;
        case 'y':
            long_blink();
            short_blink();
            long_blink();
            long_blink();
            break;
        case 'z':
            long_blink();
            long_blink();
            short_blink();
            short_blink();
            break;
        case '0':
            long_blink();
            long_blink();
            long_blink();
            long_blink();
            long_blink();
            break;
        case '1':
            short_blink();
            long_blink();
            long_blink();
            long_blink();
            long_blink();
            break;
        case '2':
            short_blink();
            short_blink();
            long_blink();
            long_blink();
            long_blink();
            break;
        case '3':
            short_blink();
            short_blink();
            short_blink();
            long_blink();
            long_blink();
            long_blink();
            break;
        case '4':
            short_blink();
            short_blink();
            short_blink();
            short_blink();
            long_blink();
            break;
        case '5':
            short_blink();
            short_blink();
            short_blink();
            short_blink();
            short_blink();
            break;
        case '6':
            long_blink();
            short_blink();
            short_blink();
            short_blink();
            short_blink();
            break;
        case '7':
            long_blink();
            long_blink();
            short_blink();
            short_blink();
            short_blink();
            break;
        case '8':
            long_blink();
            long_blink();
            long_blink();
            short_blink();
            short_blink();
            break;
        case '9':
            long_blink();
            long_blink();
            long_blink();
            long_blink();
            short_blink();
            break;
        default:
            delay(0);
            break;
    }
    delay(1000);
}

void flash(String str) {
    char* buf = (char*) malloc(str.length() + 1 * sizeof(char));
    str.toCharArray(buf, str.length() + 1);
    for (int i = 0; i < str.length(); ) {
        Serial.println(buf[i]);
        flash_char(buf[i]);
        i++;
    }
}

void setup() {
	pinMode(MY_LED, OUTPUT);
}

void loop() {
    flash("riley");
    delay(5000);
}
