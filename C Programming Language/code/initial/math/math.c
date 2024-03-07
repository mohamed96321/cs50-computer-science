#include <stdio.h>
#include <math.h>

#define screen_width 80
#define screen_height 40

float zbuffer[screen_width * screen_height];
char output[screen_width * screen_height + 1];

void render_frame(float A, float B)
{
    const float theta = 0.07;
    const float phi = 0.02;
    const float R1 = 1;
    const float R2 = 2;
    const float K2 = 5;
    const float K1 = screen_width * K2 * 3 / (8 * (R1 + R2));

    for (int i = 0; i < screen_width * screen_height; i++)
    {
        zbuffer[i] = 0;
        output[i] = ' ';
    }

    for (float j = 0; 6.28 > j; j += 0.07)
    {
        for (float i = 0; 6.28 > i; i += 0.02)
        {
            // Your existing rendering logic goes here
            float cosA = cos(A), sinA = sin(A);
            float cosB = cos(B), sinB = sin(B);

            float sintheta = sin(theta);
            float sinphi = sin(phi);
            float costheta = cos(theta);
            float cosphi = cos(phi);

            // Adjusted donut shape formula
            float circlex = cos(j) * (R1 + R2 * cos(i));
            float circley = R2 * sin(i);

            float x = circlex * (cosB * cosphi + sinA * sinB * sinphi) - circley * cosA * sinB;
            float y = circlex * (sinB * cosphi - sinA * cosB * sinphi) + circley * cosA * cosB;
            float z = K2 + circlex * cosA * sinphi + circley * sinA;
            float ooz = 1.0 / z;

            int xp = screen_width / 2 + 2 * K1 * x * ooz;
            int yp = screen_height / 2;
            int index = xp + yp * screen_width;

            float L = cosphi * costheta * sinB - sinA * sintheta + cosB * (cosA * sintheta);
            int lum_index = (int)(L * 8);

            if (screen_height > yp && yp > 0 && screen_width > xp && xp > 0 && zbuffer[index] < ooz)
            {
                zbuffer[index] = ooz;
                output[index] = ".,-~:;=!*#$@"[lum_index > 0 ? lum_index : 0];
            }
        }
    }

    printf("\x1b[H");
    for (int k = 0; k < screen_width * screen_height + 1; k++)
        putchar(k % screen_width ? output[k] : 10);
}

int main()
{
    float A = 0, B = 0;
    printf("\x1b[2J");
    for (;;)
    {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}
