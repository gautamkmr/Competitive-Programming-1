// https://www.hackerrank.com/challenges/runningtime#include<iostream>using namespace std;int counter = 0; // Counter addedvoid insertionSort(int N, int arr[]) {    int i,j;    int value;    for(i=1;i<N;i++)    {        value=arr[i];        j=i-1;        while(j>=0 && value<arr[j])        {            arr[j+1]=arr[j];            j=j-1;            counter++; // Incremented        }        arr[j+1]=value;    }}int main() {        int N;    scanf("%d", &N);    int arr[N], i;    for(i = 0; i < N; i++) {        scanf("%d", &arr[i]);    }        insertionSort(N, arr);        cout << counter << endl; // Printed         return 0;}