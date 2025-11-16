// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.
#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days late");
    scanf("%d", &days);
    if ( days!= 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (days <= 0) {
        printf("No fine\n");
        return 0;
    }

    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }

    long long fine = 0;

    int d = days;

    int take = d > 5 ? 5 : d;
    fine += 2LL * take;
    d -= take;

    if (d > 0) {
        take = d > 5 ? 5 : d;
        fine += 4LL * take;
        d -= take;
    }


    if (d > 0) {
        take = d > 20 ? 20 : d;
        fine += 6LL * take;
        d -= take;
    }

    printf("Fine: ₹%lld\n", fine);
    return 0;
}
