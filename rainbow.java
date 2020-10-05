import java.util.Arrays;
import java.util.Scanner;

class rainbow {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i = 0; i < t; i++) {
            int size = scan.nextInt();
            int array[] = new int[size];
            int array1[] = new int[size];
            boolean flag = true;
            int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0,count8 = -1;
            for (int j = 0; j < size; j++) {
                array[j] = scan.nextInt();
                array1[size - j - 1] = array[j];
            }
            for (int d = 0; d < size; d++) {
                if (array[d] > 7) {
                    flag = false;
                }
            }
                if(flag){
                for(int k=0;k<size;k++){
                if (array[k] == 1) {
                    count1++;
                } else if (array[k] == 2) {
                    count2++;
                } else if (array[k] == 3) {
                    count3++;
                } else if (array[k] == 4) {
                    count4++;
                } else if (array[k] == 5) {
                    count5++;
                } else if (array[k] == 6) {
                    count6++;
                } else if(array[k]==7){
                    count7++;
                }
            
                
            }
            }
            // System.out.println(Arrays.toString(array1));
            // System.out.println(Arrays.toString(array));
            if (count1 != 0 && count2 != 0 && count3 != 0 && count4 != 0 && count5 != 0 && count6 != 0 && count7 != 0) {
                if (Arrays.equals(array1, array)) {
                    flag = true;
                } else {
                    flag = false;
                }
            } else {
                flag = false;
            }
            if (flag == true) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }

        }

    }
}
