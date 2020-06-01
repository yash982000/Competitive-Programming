////#include<iostream>
////#include<bits/stdc++.h>
////
////using namespace std;
////
////int main(){
////	int N;
////	cin >> N;
////	int arr[N];
////		for(int i=1;i<=N;i++){
////			cin >> arr[i];
////			
////		}
////	}
//    #include <iostream>
//    #include <iterator>
//    
//    using namespace std; 
//    int main() {
//      long long int t, n, k;
//      cin >> t;
//      for (int i = 1; i <= t; ++i) {
//        cin >> n >> k;
//        int arr[n];
//        for(int i = 1;i <= n; ++i){
//        	int x = k;
//        //
//			bool exists = std::find(std::begin(arr), std::end(arr),x)!=std::end(arr);
//            cin >> arr[i];
//        }
//      //  cout << "Case #" << i << ": " << (n + k) << " " << (n * k) << endl;
//       }	
//      return 0;
//    }
//    
//     
//string search(int arr[], int n, int x) 
//{ 
//	// 1st comparison 
//	if (arr[n - 1] == x) 
//		return "Found"; 
//
//	int backup = arr[n - 1]; 
//	arr[n - 1] = x; 
//
//	// no termination condition and thus 
//	// no comparison 
//	for (int i = 0;; i++) { 
//		// this would be executed at-most n times 
//		// and therefore at-most n comparisons 
//		if (arr[i] == x) { 
//			// replace arr[n-1] with its actual element 
//			// as in original 'arr[]' 
//			arr[n - 1] = backup; 
//
//	x`		// if 'x' is found before the '(n-1)th' 
//			// index, then it is present in the array 
//			// final comparison 
//			if (i < n - 1) 
//				return "Found"; 
//
//			// else not present in the array 
//			return "Not Found"; 
//		} 
//	} 
//} 
//
//// Driver program to test above 
//int main() 
//{ 
//	int arr[] = { 4, 6, 1, 5, 8 }; 
//	int n = sizeof(arr) / sizeof(arr[0]); 
//	int x = 1; 
//	cout << search(arr, n, x); 
//	return 0; 
//} 
      import java.util.*;
    import java.io.*;
    public class Solution {
       public static List find(int[] a, int target,int testcases)
{
    List<Integer> al=new ArrayList<Integer>();  
    int count=0;
	for (int j = 0; j < a.length; j++)
		if (a[j] == target){
			al.add(j);
                }
	return al;
}
       public static boolean checker(int[] a,int index,int number){
           int temp=number;
           int temp2=index;
           int count=0;
           while(temp!=1){
               if(temp2<a.length-1){
               if(a[temp2]-a[temp2+1]==1){
                   count++;
                  }
               }
               temp2++;
               temp--;
           }
           if(count==number-1){
           return true;
           }else{
               return false;
           }
       }
      public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int t = in.nextInt(); 
        for (int j = 1; j <= t; ++j) {
          int n = in.nextInt();
          int k = in.nextInt();
          int arr[]=new int[n];
            for (int i = 0; i < n; i++) {
                arr[i]=in.nextInt();
            }
            List target=find(arr,k,n);
            int count=0;
            if(target.isEmpty()){
                count=0;
            }
            else{
                for (int i = 0; i < target.size(); i++) {
                    boolean check=checker(arr,Integer.parseInt(target.get(i).toString()),k);
                    if(check==true){
                        count++;
                    }
                }
            }
          System.out.println("Case #" + j + ": " +count);
        }
      }
    }
