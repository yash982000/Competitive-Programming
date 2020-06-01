//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n,counter=0,counter2=0;
//	cin>>n;
//	int arr[n],arr2[n],arr3[n];
//	for(int i=0;i<n;i++){
//		int x,y;
//		cin>>x>>y;
//		cin.ignore();
//		arr[i]=x;
//		arr2[i]=y;
//		arr3[i]=y;
//	}
//
//	for(int i=0;i<n;i++){
//		if(arr[i]==arr2[i])
//			++counter;
//	}
//
//	sort(arr2,arr2+n);
//	for(int i=n-1,j=0;i>=0;i--,j++)
//	{
//		if(arr2[i]==arr3[j])
//		 ++counter2;
//
//	}
//	if(counter!=n)
//		cout<<"rated";
//	else if(counter==n&&counter2==n)
//	{
//        cout<<"maybe";
//	}
//	else{
//cout<<"unrated";
//
//	}
//
// 	return 0;
//}
#include<iostream>

int main(int argc, const char *argv[]){
	int a[]={1,2,3,4,5,6};
	std::cout << (1+3)[a] - a[0] + (a+1)[2];
}
