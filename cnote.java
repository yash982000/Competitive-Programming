import java.util.Scanner;

class cnote {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i = 0; i < t; i++) {
            int x = scan.nextInt();
            int y = scan.nextInt();
            int k = scan.nextInt();
            int n = scan.nextInt();
            boolean flag = false;
            for (int j = 0; j < n; j++) {
                int page = scan.nextInt();
                int price = scan.nextInt();
                if (page >= x-y) {
                    if( price <= k){
                        flag = true;
                    }
                }// else {
                //     // flag=false;
                //     continue;
                // }
            }
            //System.out.println(flag);
            if (flag == true) {
                System.out.println("LuckyChef");
            } else {
                System.out.println("UnluckyChef");
            }
        }
    }
}