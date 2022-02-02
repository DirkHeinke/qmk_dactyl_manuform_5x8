Dactyl Manuform, 5x7 layout but wired as 5x8

In the file keyboards/handwired/dactyl_manuform/dactyl_manuform.h add:
```
#elif defined(KEYBOARD_handwired_dactyl_manuform_5x8)
    #include "5x8.h"
```