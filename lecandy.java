import java.util.Scanner;
class lecandy{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        for(int i=0;i<t;i++){
            int num,can,need=0;
            num=scan.nextInt();
            can=scan.nextInt();
            for(int j=0;j<num;j++){
                int each=scan.nextInt();
                need +=each;
            }
            if(need<=can){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
    }
}