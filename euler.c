#include <stdio.h>

int p1() {
    int sum = 0;
    int i;
    for (i = 0; i < 1000; i++) 
        if (i % 3 == 0 || i % 5  == 0) sum += i;
    return sum;
}

int p2() {
    int a = 1;
    int b = 2;
    int sum = 0; 
    while (1) {
        if (a % 2 == 0) { 
            if (a < 4000000) 
                sum += a;
            else break;
        }
        int tmp = b;
        b += a;
        a = tmp;
    }
    return sum;
}


int p5() {
    int min, cont;
    min = cont = 1;
    while (cont == 1) {
        cont = 0;
        min++; 
        int i;
        for (i = 2; i <= 20; i++) { 
            if (min % i != 0) {
                cont = 1;
                break;
            }
        }
    }
    return min;
}

int p6() {
    int sqOfsm = 50*101*50*101;
    int smOfsq = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        smOfsq += i*i;
    } 
    return (sqOfsm - smOfsq);
}


