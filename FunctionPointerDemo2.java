import java.util.Arrays;
import java.util.function.Function;

public class FunctionPointerDemo2 {
    static int increment(int n) {
        return n + 1;
    }

    static void myObjective(int[] arr, Function<Integer, Integer> f) {
        for (int i = 0; i < arr.length; ++i) {
            arr[i] = f.apply(arr[i]);
        }
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 2, 3, 4};
        myObjective(arr, FunctionPointerDemo2::increment);

        System.out.println(Arrays.toString(arr));
    }
}
