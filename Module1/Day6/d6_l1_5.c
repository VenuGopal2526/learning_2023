//Program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapPoints(Point* p1, Point* p2) {
    int temp;

    // Swap the x values
    temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap the y values
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    Point point1, point2;

    printf("Enter x and y coordinates for Point 1: ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter x and y coordinates for Point 2: ");
    scanf("%d %d", &point2.x, &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    // Swap the fields of the two structures
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}
