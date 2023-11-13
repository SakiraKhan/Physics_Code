//Sakira

#include <stdio.h>
#include <math.h>
int main() {
    int m,pattern;
    double theta, d,wl,thetaRad,wl_nm;
    printf("Enter pattern = 1 for maxima & pattern = 0 for minima\n");
    printf("Pattern: ");
    scanf("%d", &pattern);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of theta (0-90) degrees: ");
    scanf("%lf", &theta);
    printf("Enter the value of d (in micrometer): ");
    scanf("%lf", &d);

    thetaRad = theta * M_PI / 180.0;
    d /= 1e6;

    if(pattern==1){
       wl = (d * sin(thetaRad)) / m;
    }else{
     wl = (d * sin(thetaRad)) / (m+0.5);
    }

    wl_nm = wl * 1e9;

    printf("The numeric value of the wavelength: %.2f nm\n", wl_nm);

    if (wl_nm >= 380 && wl_nm < 450) {
        printf("The color of the light: violet\n");
    } else if (wl_nm >= 450 && wl_nm < 485) {
        printf("The color of the light: blue\n");
    } else if (wl_nm >= 485 && wl_nm < 500) {
        printf("The color of the light: cyan\n");
    } else if (wl_nm >= 500 && wl_nm < 565) {
        printf("The color of the light: green\n");
    } else if (wl_nm >= 565 && wl_nm < 590) {
        printf("The color of the light: yellow\n");
    } else if (wl_nm >= 590 && wl_nm < 625) {
        printf("The color of the light: orange\n");
    } else if (wl_nm >= 625 && wl_nm <= 750) {
        printf("The color of the light: red\n");
    } else {
        printf("The color of the light: Unknown\n");
    }

    return 0;
}

