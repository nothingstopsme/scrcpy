#ifndef CONVERT_H
#define CONVERT_H

#include <stdbool.h>
#include <SDL2/SDL_events.h>

#include "config.h"
#include "control_msg.h"
#include "input_manager.h"

bool
convert_keycode_action(SDL_EventType from, enum android_keyevent_action *to);

enum android_metastate
convert_meta_state(SDL_Keymod mod);

bool
convert_keycode(SDL_Keycode from, enum android_keycode *to, uint16_t mod,
                enum key_input_mode mode);

enum android_motionevent_buttons
convert_mouse_buttons(uint32_t state);

bool
convert_mouse_action(SDL_EventType from, enum android_motionevent_action *to);

bool
convert_touch_action(SDL_EventType from, enum android_motionevent_action *to);

#endif
