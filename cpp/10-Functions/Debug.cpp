// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width ;cin>> height;
// 	int area = width * height;
// 	cout << area << endl;
// 	return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;

    while(n!=0){
        int digit = n%10;
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;
    }
    cout<<sum;
    return 0;
}