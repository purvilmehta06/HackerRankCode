#include <bits/stdc++.h>

using namespace std;

int beautifulBinaryString(string b) {
    int count = 0;
    int state = 0;
    for(int i =0; i<b.length();i++){
       // cout << "current state :" << state << endl;
        if(b[i] == '0' && state == 0){
            state = 1;
        }else if (b[i]== '0' && state == 1){
            state = 1;
        }else if (b[i]== '0' && state == 2){
            state = 3;
            count ++;
        }else if (b[i]== '0' && state == 3){
            state = 1;
        }else if (b[i]== '1' && state == 0){
            state = 0;
        }else if (b[i]== '1' && state == 1){
            state = 2;
        }else if (b[i]== '1' && state == 2){
            state = 0;
        }else if (b[i]== '1' && state == 3){
            state = 0;
        }
    }
    
    return count;
    // Complete this function

}

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    int result = beautifulBinaryString(b);
    cout << result << endl;
    return 0;
}
