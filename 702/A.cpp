#include <iostream>
#include <algorithm>

using namespace std;

int t, n;
int a[51];

int main() {
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        
        for (int j = 0; j < n - 1; j++)
        {
            int temp = 0;
            if (temp == 0 && max(a[j], a[j + 1]) > min(a[j], a[j + 1]) * 2)
            {
                num++;
                if (a[j] < a[j + 1])
                {
                    temp = a[j] * 2;
                } else if (a[j] % 2 == 0){
                        temp = a[j] / 2;
                    } else {
                        temp = a[j] / 2 + 1;
                    }           
            } 

            if (temp > 0) {
                while (max(temp, a[j + 1]) > min(temp, a[j + 1]) * 2)
                {
                    num++;
                    if (temp < a[j + 1])
                    {
                        temp = temp * 2;
                    } else if(temp % 2 == 0){
                        temp = temp / 2;
                    } else {
                        temp = temp / 2 + 1;
                    }    
                }
                
            } 
        }
        cout << num << "\n";
    }

    return 0;
}