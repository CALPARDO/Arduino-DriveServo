#include <Servo.h>

int deg = 0;
int step = 0;
int del = 0;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup()
{
    servo1.attach(13);
    servo2.attach(12);
    servo3.attach(11);
    servo4.attach(10);
}

void loop()
{
    driveservo(3, 90, 1, 15);
    delay(1000);
    driveservo(3, 20, 1, 15);
    delay(1000);
}

/* FUNCTIONS */

// stop servos
int s_stop()
{
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
}

// drive servos
int driveservo(int s_id, int deg, int step, int del)
{
    int pos1 = 0;
    int pos2 = 0;
    int pos3 = 0;
    int pos4 = 0;
    // servo1 case
    if (s_id == 1)
    {
        if (deg > pos1)
        {
            while (pos1 == deg)
            {
                pos1 += step;
                servo1.write(pos1);
                delay(del);
            }
        }
        else if (deg < pos1)
        {
            while (pos1 == deg)
            {
                pos1 -= step;
                servo1.write(pos1);
            }
        }
        else
        {
            s_stop();
        }
    }

    // servo2 case
    else if (s_id == 2)
    {
        if (deg > pos2)
        {
            while (pos2 == deg)
            {
                pos2 += step;
                servo2.write(pos2);
                delay(del);
            }
        }
        else if (deg < pos2)
        {
            while (pos2 == deg)
            {
                pos2 -= step;
                servo2.write(pos2);
                delay(del);
            }
        }
        else
        {
            s_stop();
        }
    }

    // servo3 case
    else if (s_id == 3)
    {
        if (deg > pos3)
        {
            while (pos3 == deg)
            {
                pos3 += step;
                servo3.write(pos3);
                delay(del);
            }
        }
        else if (deg < pos3)
        {
            while (pos3 == deg)
            {
                pos3 -= step;
                servo3.write(pos3);
                delay(del);
            }
        }
        else
        {
            s_stop();
        }
    }

    // servo4 case
    else if (s_id == 4)
    {
        if (deg > pos4)
        {
            while (pos4 == deg)
            {
                pos4 += step;
                servo4.write(pos4);
                delay(del);
            }
        }
        else if (deg < pos4)
        {
            while (pos4 == deg)
            {
                pos4 -= step;
                servo4.write(pos4);
                delay(del);
            }
        }
        else
        {
            s_stop();
        }
    }
}
