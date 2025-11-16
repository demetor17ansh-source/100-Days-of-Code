// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

#include <stdio.h>

int main() {
    long long units;

    scanf("%lld", &units);

    if (units < 0) {
        printf("Error: units cannot be negative\n");
        return 1;
    }

    long long u = units;
    long long take;
    long long bill = 0;

    /* First 100 @ ₹5 */
    take = (u > 100) ? 100 : u;
    bill += take * 5;
    u -= take;

    /* Next 100 @ ₹7 (101–200) */
    if (u > 0) {
        take = (u > 100) ? 100 : u;
        bill += take * 7;
        u -= take;
    }

    /* Next 100 @ ₹10 (201–300) */
    if (u > 0) {
        take = (u > 100) ? 100 : u;
        bill += take * 10;
        u -= take;
    }

    /* Above 300 @ ₹12 */
    if (u > 0) {
        bill += u * 12;
    }

    printf("Bill: ₹%lld\n", bill);
    return 0;
}
