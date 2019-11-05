#ifndef PIEZO_H
#define PIEZO_H

class Piezo {

    public:
        Piezo();
        ~Piezo();

        void init();
        void changeNote(uint8_t freq);
        void stop();
    
    private:

        uint8_t freq[]= { 
                            110, 116, 123, 130, 138, 146, 155, 164, 174, 184, 195, 207, 220, 233, 246, 261, 277, 293, 311, 
                            329, 349, 369, 391, 415, 440, 466, 493, 523, 554, 587, 622, 659, 698, 739, 783, 830, 880 
                        };
}