public class TowerOfHanoi {
    public static void towerOfHanoi(int top, char start, char via, char end) {
        if (top == 1)
            System.out.println(start + " --> " + end);    // If one disk is left, move it to last rod
        else {
            towerOfHanoi(top - 1, start, end, via);        // Shifting n - 1 disks from A to B with the help of C
            System.out.println(start + " --> " + end);    // Shifting last disk from A to C
            towerOfHanoi(top - 1, via, start, end);        // Shifting n - 1 disks from B to C with the help of A
        }
    }

    public static void main(String[] args) {
        int blocks = 5;                            // Number of blocks in the tower
        towerOfHanoi(blocks, 'A', 'B', 'C');    // Moving all blocks from A to C
    }
}
