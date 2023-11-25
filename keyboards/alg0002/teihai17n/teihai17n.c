#include "quantum/led.h"
#include "quantum/rgblight/rgblight.h"

void set_indicator_led_color(led_t led_state);

void keyboard_post_init_user(void) {
    rgblight_disable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        set_indicator_led_color(led_state);
    }
    return res;
}

void set_indicator_led_color(led_t led_state) {
    if (led_state.num_lock) {
        rgblight_enable_noeeprom();
    } else {
        rgblight_disable_noeeprom();
    }
    rgblight_set();
}
