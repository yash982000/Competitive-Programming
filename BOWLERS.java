
import java.util.*;

 class Codechef {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int q = 0; q < t; q++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int l = sc.nextInt();
            if (n > k * l) {
                System.out.println("-1");
            } 
            else if(k==1 && n>1){
                System.out.println("-1");
            }
            else {
                int temp = n / k;
                for (int j = 0; j < temp; j++) {
                    for (int i = 1; i <= k; i++) {
                        System.out.print(i + " ");
                    }
                }
                int tt = n%k;
                for(int i=1; i<=tt; i++){
                    System.out.print(i + " ");
                }
                System.out.println();
            }
        }
    }
}
