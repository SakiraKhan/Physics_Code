//Sakira

#include <stdio.h>
#include <math.h>

int main() {
    double wl_green = 530.0;
    int m_green = 3;
    double theta_green_deg = 65.0;

    double wl_red = 700.0;
    int m_red = 2;


    double theta_green_rad = theta_green_deg * M_PI / 180.0;
    double d = (m_green * wl_green) / (sin(theta_green_rad));
    double theta_red_rad = asin((m_red * wl_red) / d);
    double theta_red_deg = theta_red_rad * 180.0 / M_PI;


    printf("Angle for the second-order bright spot for red light:\n");
    printf("Radians: %.2f\n", theta_red_rad);
    printf("Degrees: %.2f\n", theta_red_deg);


    return 0;
}
