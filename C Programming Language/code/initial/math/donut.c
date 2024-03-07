#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 22

double A = 1, B = 1;

void asciiframe(char* frame) {
    char b[WIDTH * HEIGHT];
    double z[WIDTH * HEIGHT];

    A += 0.07;
    B += 0.03;

    double cA = cos(A), sA = sin(A),
           cB = cos(B), sB = sin(B);

    for (int k = 0; k < WIDTH * HEIGHT; k++) {
        b[k] = (k % WIDTH == WIDTH - 1) ? '\n' : ' ';
        z[k] = 0;
    }

    for (double j = 0; j < 6.28; j += 0.07) {
        double ct = cos(j), st = sin(j);

        for (double i = 0; i < 6.28; i += 0.02) {
            double sp = sin(i), cp = cos(i),
                   h = ct + 2,
                   D = 1 / (sp * h * sA + st * cA + 5),
                   t = sp * h * cA - st * sA;

            int x = (int)(40 + 30 * D * (cp * h * cB - t * sB)),
                y = (int)(12 + 15 * D * (cp * h * sB + t * cB)),
                o = x + WIDTH * y,
                N = (int)(8 * ((st * sA - sp * ct * cA) * cB - sp * ct * sA - st * cA - cp * ct * sB));

            if (y < HEIGHT && y >= 0 && x >= 0 && x < WIDTH && D > z[o]) {
                z[o] = D;
                b[o] = ".,-~:;=!*#$@"[(N > 0) ? N : 0];
            }
        }
    }

    sprintf(frame, "%s", b);
}

void canvasframe() {
    double R1 = 1;
    double R2 = 2;
    double K1 = 150;
    double K2 = 5;

    A += 0.07;
    B += 0.03;

    double cA = cos(A), sA = sin(A),
           cB = cos(B), sB = sin(B);

    for (double j = 0; j < 6.28; j += 0.3) {
        double ct = cos(j), st = sin(j);

        for (double i = 0; i < 6.28; i += 0.1) {
            double sp = sin(i), cp = cos(i);

            double ox = R2 + R1 * ct,
                   oy = R1 * st;

            double x = ox * (cB * cp + sA * sB * sp) - oy * cA * sB;
            double y = ox * (sB * cp - sA * cB * sp) + oy * cA * cB;
            double ooz = 1 / (K2 + cA * ox * sp + sA * oy);
            int xp = (int)(150 + K1 * ooz * x);
            int yp = (int)(120 - K1 * ooz * y);

            double L = 0.7 * (cp * ct * sB - cA * ct * sp - sA * st + cB * (cA * st - ct * sA * sp));

            if (L > 0) {
                printf("\033[48;2;255;255;255m\033[38;2;255;255;255m█\033[0m");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    char frame[WIDTH * HEIGHT];
    int iterations = 0; // initialize the number of iterations
    int max_iterations = 20; // the value to set the maximum number of iterations

    while (iterations < max_iterations) {
        asciiframe(frame);
        printf("%s", frame);
        usleep(50000); // 50 ms delay
        system("clear"); // clear the console screen
        iterations++;
    }

    return 0;
}

/*
#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 22

double A = 1, B = 1;

void asciiframe(char* frame) {
    char b[WIDTH * HEIGHT];
    double z[WIDTH * HEIGHT];

    A += 0.07;
    B += 0.03;

    double cA = cos(A), sA = sin(A),
           cB = cos(B), sB = sin(B);

    for (int k = 0; k < WIDTH * HEIGHT; k++) {
        b[k] = (k % WIDTH == WIDTH - 1) ? '\n' : ' ';
        z[k] = 0;
    }

    for (double j = 0; j < 6.28; j += 0.07) {
        double ct = cos(j), st = sin(j);

        for (double i = 0; i < 6.28; i += 0.02) {
            double sp = sin(i), cp = cos(i),
                   h = ct + 2,
                   D = 1 / (sp * h * sA + st * cA + 5),
                   t = sp * h * cA - st * sA;

            int x = (int)(40 + 30 * D * (cp * h * cB - t * sB)),
                y = (int)(12 + 15 * D * (cp * h * sB + t * cB)),
                o = x + WIDTH * y,
                N = (int)(8 * ((st * sA - sp * ct * cA) * cB - sp * ct * sA - st * cA - cp * ct * sB));

            if (y < HEIGHT && y >= 0 && x >= 0 && x < WIDTH && D > z[o]) {
                z[o] = D;
                b[o] = ".,-~:;=!*#$@"[(N > 0) ? N : 0];
            }
        }
    }

    sprintf(frame, "%s", b);
}

void canvasframe() {
    double R1 = 1;
    double R2 = 2;
    double K1 = 150;
    double K2 = 5;

    A += 0.07;
    B += 0.03;

    double cA = cos(A), sA = sin(A),
           cB = cos(B), sB = sin(B);

    for (double j = 0; j < 6.28; j += 0.3) {
        double ct = cos(j), st = sin(j);

        for (double i = 0; i < 6.28; i += 0.1) {
            double sp = sin(i), cp = cos(i);

            double ox = R2 + R1 * ct,
                   oy = R1 * st;

            double x = ox * (cB * cp + sA * sB * sp) - oy * cA * sB;
            double y = ox * (sB * cp - sA * cB * sp) + oy * cA * cB;
            double ooz = 1 / (K2 + cA * ox * sp + sA * oy);
            int xp = (int)(150 + K1 * ooz * x);
            int yp = (int)(120 - K1 * ooz * y);

            double L = 0.7 * (cp * ct * sB - cA * ct * sp - sA * st + cB * (cA * st - ct * sA * sp));

            if (L > 0) {
                printf("\033[48;2;255;255;255m\033[38;2;255;255;255m█\033[0m");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    char frame[WIDTH * HEIGHT];

    while (1) {
        asciiframe(frame);
        printf("%s", frame);
        usleep(50000); // 50 ms delay
        system("clear"); // clear the console screen
    }

    return 0;
}
*/
