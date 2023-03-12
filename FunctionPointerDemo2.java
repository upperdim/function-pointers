import java.util.function.Function;

public class FunctionPointerDemo2 {
    static Integer increment(Integer n) {
        return n + 1;
    }

    static void myObjective(Integer[] arr, Function<Integer, Integer> f) {
        for (int i = 0; i < arr.length; ++i) {
            arr[i] = f.apply(arr[i]);
        }
    }

    public static void main(String[] args) {
        Integer[] arr = {0, 1, 2, 3, 4};
        myObjective(arr,  FunctionPointerDemo2::increment);

        for (Integer elem : arr) {
            System.out.print(elem + " ");
        }
    }
}