#include <iostream>
using namespace std;

int main() {
	
	int  n
      , a
			,sum
      ;
  ;
	while(cin >> n) {
    sum = 0;
		while(n--) {
      cin >> a;
      sum += a;
    }
    cout << sum << endl;
	}
	return 0;
} 