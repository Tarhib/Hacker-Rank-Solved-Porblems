#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    string s1,s2;
    int cal1,cal2;
    s1="YES";
    s2="NO";
    if(x2>x1&&v2>=v1)
    {
        return s2;
    }

    else
    {
        cal1=x1;
        cal2=x2;
        while(1)
        {
            cal1=cal1+v1;
            cal2=cal2+v2;
            if(cal1==cal2)
            {
                break;
            }
            if(cal1>cal2)
            {
                return s2;
            }
        }
        return s1;

    }
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
