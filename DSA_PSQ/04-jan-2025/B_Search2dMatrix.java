public class B_Search2dMatrix {
    public static void main(String[] args) {
        int arr[][]={{10,11,12,13},{14,15,16,17},{90,91,92,93},{94,95,96,97}};
        int row_s = arr.length,col_s = arr[0].length;
        int search_que = 902;

        int left=0;
        int right = row_s*col_s - 1;

        while(left <= right){
            int mid = left + (right - left) /2;

            // getting row and column to access the element
            int f_row = mid/col_s; // gives row index
            int f_col = mid%col_s; // gives column index

            if(arr[f_row][f_col] == search_que){
                String s = String.format("Found at { %d, %d }",f_row,f_col);
                System.out.println(s);
            }

            if(search_que > arr[f_row][f_col]){
                left = mid+1;
            }else{
                right = mid - 1;
            }
        }
    }
}
