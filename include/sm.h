#pragma once

#include "warp.h"
#include "kernel.h"

class SM {
public:
    Warp warp;
    Kernel& kernel;

    SM(Kernel& k, int warp_size);

    void run();
};