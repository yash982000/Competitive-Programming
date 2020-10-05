import java.util.Scanner;
/**
 * proxy
 */
public class proxy {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        for(int i=0;i<t;i++){
            int l=scan.nextInt();
            String s=scan.next();
            int counta=0,countp=0;
            for(int j=0;j<s.length();j++){
                if(s.charAt(j)=='A'){
                    counta++;
                }else{
                    countp++;
                }
            } 
            int r= (int) Math.ceil(0.75 * l);
            //System.out.println(counta+" "+countp+" "+r);
           int pro=0;
            for(int k=2;k<s.length()-2;k++){
                if((((s.charAt(k-2))=='P')||((s.charAt(k-1))=='P'))&&(((s.charAt(k+2))=='P')||((s.charAt(k+1))=='P'))){
                    pro= r-countp;
                }else{
                    pro = -1;
                }
            }
            System.out.println(pro);
        }
        scan.close();
    }
}