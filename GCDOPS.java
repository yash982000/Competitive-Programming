
import java.util.*;

 class Codechef {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int q = 0; q < t; q++) {
            int n = sc.nextInt();
            int a[] = new int[n];
            int b[] = new int[n];
            for(int i=0; i<n; i++){
                a[i] = i+1;
                b[i] = sc.nextInt();
            }
            int flag=0;
            for(int i=0; i<n; i++){
                if(a[i]!=b[i]){
                    if(a[i]%b[i]!=0){
                        System.out.println("NO");
                        flag=1;
                        break;                        
                    }
                }
            }
            if(flag==0){
                System.out.println("YES");
            }
        }
    }
}
