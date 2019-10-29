#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, k;
        vector<int> ar;
        int bptr = 1, cptr = 1, aptr = 1;
        int temp[3];

        cin >> a >> b >> c >> k;

        temp[0] = a;
        temp[1] = b;
        temp[2] = c;
        sort(temp, temp + 3);
        a = temp[0];
        b = temp[1];
        c = temp[2];
        
        for (int i = 0; i < k; i++) {
            if(a * aptr <= b * bptr && a * aptr <= c * cptr) {
                ar.push_back(a * aptr);
                aptr++;
            } else if(a * aptr > c * cptr && b * bptr > c * cptr) {
                ar.push_back(c * cptr);
                cptr++;
            } else if(a * aptr > b * bptr && b * bptr < c * cptr) {
                ar.push_back(b * bptr);
                bptr++;
            }
            if(a * aptr == c * cptr) cptr++;
            if(a * aptr == b * bptr) bptr++;
        }
        
        cout << ar[k - 1] << endl;
    }
}
