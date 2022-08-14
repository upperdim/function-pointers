interface FunctionWrapper {
	int methodSignature(int n);
}

public class FunctionPointerDemo {
	static int increment(int n) {
		return n + 1;
	}

	static void myObjective(int[] arr, FunctionWrapper f) {
		for (int i = 0; i < arr.length; ++i)
			arr[i] = f.methodSignature(arr[i]);
	}

	public static void main(String[] args) {
		int[] arr = {0, 1, 2 ,3 ,4};

		FunctionWrapper functionPointer = FunctionPointerDemo::increment;
		myObjective(arr, functionPointer);

		for (int elem : arr)
			System.out.print(elem + " ");
	}
}
