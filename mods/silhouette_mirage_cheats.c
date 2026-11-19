#include "mod_plugins.h"

static void cheat_infinite_credits(void) {
    psx_mod_write_byte(0x0001006F, 0x09);
}

static void cheat_all_options(void) {
    psx_mod_write_byte(0x00010073, 0xFF);
}

static void cheat_secret_mode(void) {
    psx_mod_write_half(0x0001002A, 0xFFFF);
}

PSX_MOD_CONSTRUCTOR(register_silhouette_mirage_cheats) {
    psx_mod_register_vblank_plugin(
        "game.silhouette-mirage-cheats.infinite-credits",
        cheat_infinite_credits);
    psx_mod_register_vblank_plugin(
        "game.silhouette-mirage-cheats.all-options",
        cheat_all_options);
    psx_mod_register_vblank_plugin(
        "game.silhouette-mirage-cheats.secret-mode",
        cheat_secret_mode);
}
