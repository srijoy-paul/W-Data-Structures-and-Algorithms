public class Hello {
    public static void main(String[] args) {
        System.out.print("Hello");
        // array declaration
        int[] arr = { 1, 2, 4, 7 };
        int[][] matrix = { { 1, 2 }, { 3, 43 }, { 4, 6 } };

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {

            }
            System.out.print(arr[i]);
            if (i != arr.length - 1)
                System.out.print(",");
        }
    }
}