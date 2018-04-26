#define IO_COUNT 8

const int outs[IO_COUNT] = {21,20,16,12,25,24,23,18};
const int ins[IO_COUNT] = {17,27,22,5,6,13,19,26};

void setup(void)
{
    for (int i=0; i<IO_COUNT; i++) {
	    pinMode(outs[i], OUTPUT);
	    pinMode(ins[i], INPUT);
    }
}

void loop(void)
{
    for (int i=0; i<IO_COUNT; i++) {
#if 0
	digitalWrite(outs[i], !digitalRead(ins[i]));
        delay(10);
#else
        if (!digitalRead(ins[i])) {
            digitalWrite(outs[i], HIGH);
        } else {
            digitalWrite(outs[i], HIGH);
    	    delay(100);
    	    digitalWrite(outs[i], LOW);
    	    delay(100);
        }
#endif
    }
}
