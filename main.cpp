#include <string>
#include <vector>

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

extern "C" int verdant_compass();
extern "C" void silver_quartz();
extern "C" void silver_orbit();

int main() {
    count_down();
    product_range();
    silver_quartz();
    silver_orbit();
    return verdant_compass();
}
