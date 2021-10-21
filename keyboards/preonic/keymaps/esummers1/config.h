#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////
// Mod-tap configuration
//
// The following examples assume that you are using a CAGS/SGAC home row.
////////////////////////////////////////////////////////////////////////////////////////////////////

// This defines the period in milliseconds that a mod-tap key must be held before it will be
// registered as a hold. Note that the other controls affect the actual behaviour, and it is
// possible to trigger hold behaviour in less than this time under certain conditions.
//
// Too large a number means it takes too long to register a hold, and the keyboard is sluggish to
// use.
//
// Too small a number means that if you roll between keys or strike keys very close together, you
// will sometimes get mods fired instead of letters.
#define TAPPING_TERM 600

// If you want to type J followed by a capital letter from the left hand, you will want to hold J to
// chord with the left-hand letter.
//
// Without this setting, this will fire another lowercase J followed by the lowercase target letter.
// So e.g. "TajCabal" becomes "Tajjcabal".
#define TAPPING_FORCE_HOLD

// This setting causes the keyboard to fire the mod behaviour of a mod-tap key if another key is
// pressed and released while it remains held, regardless of the TAPPING_TERM.
#define PERMISSIVE_HOLD

// This is closely related to PERMISSIVE_HOLD, and allows rolling presses of keys that are acting as
// mod-taps. In essence, if two mod-tap keys are pressed in sequence, and the latter is pressed
// before the former is released, this allows the keyboard to recognize that as two letters, not as
// a shortcut. This allows you to roll your fingers over "jkl;" without typing "KL:" instead.
#define IGNORE_MOD_TAP_INTERRUPT
