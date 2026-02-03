#include <stdio.h>

int main() {
    // Q15: Next & Previous Character
    char ch, pre, next;
    printf("Enter any Character between B and Y: ");
    scanf(" %c", &ch);   // space before %c to skip newline
    pre = ch - 1;
    next = ch + 1;
    printf("\n\nThe Character before %c is %c and after %c is %c\n\n", ch, pre,ch, next);

    // Q16: Cylinder Surface Area & Volume
    float radius, height, surface_area, volume;
    float pi = 3.14;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;
    printf("\n\nSurface Area of the cylinder = %.2f\n\n", surface_area);
    printf("Volume of the cylinder = %.2f\n\n", volume);

    // Q17: Temperature Conversion
    float fahrenheit, celsius, kelvin;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5.0 / 9 * (fahrenheit - 32);
    kelvin = celsius + 273.15;
    printf("\n\nTemperature in Celsius = %.2f°C\n\n", celsius);
    printf("Temperature in Kelvin = %.2fK\n\n", kelvin);

    // Q18: Ring Perimeter & Area
    float inner_radius, outer_radius, perimeter, area;
    printf("Enter the inner radius of the ring: ");
    scanf("%f", &inner_radius);
    printf("Enter the outer radius of the ring: ");
    scanf("%f", &outer_radius);
    if (outer_radius <= inner_radius) {
        printf("\n\nError: Outer radius must be greater than inner radius.\n\n");
    } else {
        perimeter = 2 * pi * (outer_radius + inner_radius);
        area = pi * (outer_radius * outer_radius - inner_radius * inner_radius);
        printf("\n\nPerimeter of the ring = %.2f units\n\n", perimeter);
        printf("Area of the ring = %.2f square units\n\n", area);
    }

    printf("\n\n=== End of Sequential Program ===\n\n");
    return 0;
}
