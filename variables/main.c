#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integers
    int age = 25;
    int year = 2025;
    int quantity = 10;

    printf("Age: %d\n", age);
    printf("Year: %d\n", year);
    printf("Quantity: %d\n", quantity);

    // Floating-point numbers
    float gps = 3.5;
    float temperature = 22.5;

    printf("GPS: %.1f\n", gps);
    printf("Temperature: %.1f\n", temperature);

    // Long float
    double pi = 3.141592232324892;
    printf("Pi: %.15f\n", pi);

    // Characters
    char initial = 'A';
    printf("Initial: %c\n", initial);

    // Strings
    char name[] = "Alice";
    printf("Name: %s\n", name);

    // Boolean
    bool isActive = true;
    printf("Is Active: %s\n", isActive ? "true" : "false");

    return 0;
}