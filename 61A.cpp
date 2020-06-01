//#include<iostream>
//
//using namespace std;
//
//int main(){
//	string a,b;
//	int i;
//	cin >> a >> b;
//	for(i=0;i< a.length();i++){
//	if(a[i]==b[i])	{
//		a[i]='0';
//	}else{
//		a[i]='1';
//	}
//}
//	cout << a << endl;
//	return 0;
//}
#include<stdio.h>
main()
{ 
    int x=10, y=15; 
    x = x++; 
    y = ++y; 
    printf("%d %d",x,y);
}
