#include "port/paths.h"

#include <SDL3/SDL.h>

const char* Paths_GetBasePath() {
    return SDL_GetBasePath();
}
