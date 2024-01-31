#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void selectionSort(int a[], int n) {
    for(int i = 0; i < n; i++) {
        int j = i;
        for(int k = i + 1; k < n; k++) {
            if(a[k] < a[j]) {
                j = k; 
            }
        } 
        if(i != j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

int main() {
    vector<int> y(100), x(100);
    int z = 0;

    for(int i = 500; i <= 10000; i += 1500) {
        vector<int> a(i);
        for(int j = 0; j < i; j++) {
            a[j] = rand() % i;
        }
        clock_t start_time = clock();
        for(int l = 1; l <= 10; l++) {
            selectionSort(a.data(), i); 
        }
        clock_t end_time = clock();
        float avg_time = float(end_time - start_time) / 10;
        x[z] = i;
        y[z] = avg_time;
        cout << x[z] << " " << y[z] << endl;
        z++;
    }
    return 0;
}


