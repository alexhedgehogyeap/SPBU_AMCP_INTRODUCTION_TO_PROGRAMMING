
// #include "stdafx.h"
#include <iostream>
#include <string>

int main() {
    char name[256];
    printf("Type your name please.\n");
    scanf_s("%s", &name);
    printf("Hello, %s", name);
}
