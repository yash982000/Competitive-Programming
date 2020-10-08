
import java.util.*;

 class Codechef {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int q = 0; q < t; q++) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0; i<n; i++){
                arr[i] = sc.nextInt();
            }
            if(n==1){
                if(arr[0]>=0){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            else if(n==2){
                if(arr[0]>=0 && arr[1]>=0){
                    System.out.println("YES");
                }
                else if(arr[0]>=0 && arr[1]<0){
                    if(arr[0]>=Math.abs(arr[1])){
                        System.out.println("YES");
                    }
                    else{
                        System.out.println("NO");
                    }
                }
                else if(arr[1]>=0 && arr[0]<0){
                    if(arr[1]>=Math.abs(arr[0])){
                        System.out.println("YES");
                    }
                    else{
                        System.out.println("NO");
                    }
                }
                else if(arr[1]<0 && arr[0]<0){
                    System.out.println("NO");
                }
            }
            else{
                int sn=0, sp=0;
                for(int x : arr){
                    if(x<0){
                        sn=sn+Math.abs(x);
                    }
                    else{
                        sp=sp+x;
                    }
                }
                if(sp>=sn){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
        }
    }
}
