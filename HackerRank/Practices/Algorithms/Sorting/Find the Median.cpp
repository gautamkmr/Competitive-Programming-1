// https://www.hackerrank.com/challenges/find-the-median#include <cmath>#include <cstdio>#include <vector>#include <iostream>#include <algorithm>using namespace std;int main() {        int n ;    cin >> n;    int arr[n];        for(int i = 0; i < n; ++i){        cin >> arr[i];    }    int mid = ((n+1)/2)-1;    int pivot = n-1,low = 0,high = n-1;    while(true){        if (low < high) {            int wall = low;            for(int i = wall; i < high; ++i){                if(arr[i] < arr[high]){                    swap(arr[i], arr[wall]);                    wall++;                }            }            swap(arr[wall], arr[high]);            if(wall > mid)                high = wall - 1;            else if(wall < mid)                low = wall + 1;            else if(wall == mid)                break;        }        else break;    }        cout << arr[mid] << endl;        return 0;}