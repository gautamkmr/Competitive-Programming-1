//https://www.hackerrank.com/challenges/chocolate-feast#include <stdio.h>#include <string.h>#include <math.h>#include <stdlib.h>int myWrappers,leftWrappers,extraChoc,newWrappers;int t, n, c, m, i;int main() {        scanf("%d", &t);        for (i=0; i<t ; i++) {        scanf("%d %d %d",&n,&c,&m);        int answer = 0;                myWrappers = n/c;        extraChoc = myWrappers/m ;        leftWrappers = myWrappers%m;        answer = myWrappers + extraChoc;        do {            newWrappers = leftWrappers + extraChoc;            extraChoc = newWrappers/m;            leftWrappers = newWrappers%m;            answer += extraChoc;        }while (leftWrappers + extraChoc>=m);                        printf("%d\n",answer);    }    return 0;}