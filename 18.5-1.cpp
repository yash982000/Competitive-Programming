//#include<iostream>
//#include<bits/stdc++.h>
//#include<algorithm>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int main(){
//	long long int N;
//	cin >> N;
//	for(int i=1;i<=N;i++){
//		if(i%3==0 && i%5==0){
//			cout << "FizzBuzz" << endl;
//		}
//		else if(i%3==0){
//			cout << "Fizz" << endl;
//		}
//		else if(i%5==0){
//			cout << "Buzz" << endl;
//		}
//		else if(i%3!=0 && i%5!=0){
//			cout << i << endl;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    long long int n,arr[100],k;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    cin >> k;
    int i;
     for(int i=1;i<=n;i++){
        if(arr[i]==k){
            cout << "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }
        break;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		
	}
	return 0;
}
