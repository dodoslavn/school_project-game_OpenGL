#include "Minventar.h"

Minventar::Minventar()
    {
    }

int Minventar::klavesa(char key)
    {
    int ret = 0;
    switch (key)
        {
        case 27:
            std::exit(0);
            break;
        case 'x':
            ret = 2;
            break;
        default:
            break;
        }
    return ret;
    }
