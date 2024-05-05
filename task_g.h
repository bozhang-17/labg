
void find_max_less_than_10(const double a[], const int n, double *max) {
    *max = -1; // Initialize max to a value that indicates an error

    for (int i = 0; i < n; i++) {
        if (a[i] < 10 && a[i] > *max) {
            *max = a[i];
        }
    }
}