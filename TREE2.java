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
            Set<Integer> s = new HashSet<>();
            for(int x : arr){
                if(x==0){
                    continue;
                }
                s.add(x);
            }
            System.out.println(s.size());
        }
    }
}
