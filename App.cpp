#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);

    time_t now = time(0);
    char* now_t = ctime(&now);
    cout << now_t << '\n';

    sleep(5);


    time_t passed = time(0);
    char* passed_t = ctime(&passed);
    cout << passed_t << '\n';
}
