#include <iostream>
#include <stdio.h>

using namespace std;

int my_plus(int a, int b) {
    int c = a + b;

    printf("a + b = %d", c);

    return c;
}

int main() {
    int sum = my_plus(10, 20);
    cout << sum;
    int a, b, c;
    
    printf("Please input some numbers:\n");
    // cin >> a >> b >> c;

    cout << "your input is:";
    cout << a << b << c;

    printf("Please input some numbers:\n");
    printf("Please input some numbers:\n");
    printf("Please input some numbers:\n");
    return 0;
}
