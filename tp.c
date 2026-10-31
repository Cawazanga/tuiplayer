#define MINIAUDIO_IMPLEMENTATION
#include <stdio.h>
#include "miniaudio-0.11.25/miniaudio.h"
int main(int argc, const char** argv) {
    struct ma_engine engine;
    if (ma_engine_init(NULL, &engine) != MA_SUCCESS) return -1;
    ma_engine_play_sound(&engine, argv[1], NULL);    
    getchar();
    ma_engine_uninit(&engine);
    return 0;
}
