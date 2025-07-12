#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_limes = c * d;
    int total_salt = p;

    int toasts_by_drink = total_drink / nl;
    int toasts_by_limes = total_limes;
    int toasts_by_salt = total_salt / np;

    int total_toasts = min(toasts_by_drink, min(toasts_by_limes, toasts_by_salt));

    cout << total_toasts / n << endl;
    return 0;
}
