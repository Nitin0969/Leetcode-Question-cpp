class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int[]row:image){
            //reverse this array using 2 pointer approch
            for(int i=0;i<(image[0].length+1)/2;i++){
                //complemnt of temp 0 -->1 and 1 --> 0
                int temp = row[i]^1;
                row[i] = row[image[0].length-i-1]^1;
                row[image[0].length-i-1] = temp;
            }
        }
        return image;
    }
}