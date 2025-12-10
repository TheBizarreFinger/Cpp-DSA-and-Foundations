#include <iostream>
using namespace std;

int main () {
	long long a , m, n, value1 ,value2;
	cin >> n;
	cin >> m;
	cin >> a;
	if(n == a || n < a){
		value1=1;
	}else if(n%a == 1 || n%a > 1){
		value1 = (n/a) + 1 ;
	}else{
		value1 = n/a;
	
	}
	if(m == a || m < a){
		value2=1;
	}else if(m%a == 1 || m%a > 1){
		value2 = (m/a)+ 1;
	}else{
		value2 = m/a;
	}
    cout << value1*value2;
}

