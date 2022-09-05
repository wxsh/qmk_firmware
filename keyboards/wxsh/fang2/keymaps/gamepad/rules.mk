# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

EXTRAFLAGS += -flto
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic LiteSS
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable 	keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = no
ENCODER_ENABLE = yes
OLED_ENABLE = no
WPM_ENABLE = no
TAP_DANCE_ENABLE = no
STENO_ENABLE = no
TERMINAL_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = yes
SPACE_CADET_ENABLE = no
KEY_LOCK_ENABLE = no
CONSOLE_ENABLE = no
VELOCIKEY_ENABLE = no
MIDI_ENABLE = no
UNICODE_ENABLE = no
COMBO_ENABLE = no
