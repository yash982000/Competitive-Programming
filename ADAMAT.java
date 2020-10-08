
import java.util.*;

 class Codechef {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int q = 0; q < t; q++) {
            int n = sc.nextInt();
            int mat[][] = new int[n][n];
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    mat[i][j] = sc.nextInt();
                }
            } 
            int count=0;
            int res=0;
            for(int i=1; i<=n; i++){
                if(mat[0][i-1]==i){
                    if(count>0){
                        if(i-count==2){
                            res++;
                        }
                        else{
                            res=res+2;
                        }
                    }
                    count=0;
                }
                else{
                    count++;
                }
            }
            if(count>0 && count==n-1){
                res++;
            }
            if(count>0 && count!=n-1){
                res=res+2;
            }
            System.out.println(res);
        }
    }
}
