using System;

class FunctionPointerDemo
{
    static int Increment(int n)
    {
        return n + 1;
    }
    
    static void MyObjective(int[] arr, Func<int, int> F)
    {
        for (int i = 0; i < arr.Length; ++i)
            arr[i] = F(arr[i]);
    }
    
    static void Main(string[] args)
    {
        int[] arr = {0, 1, 2, 3, 4};
        MyObjective(arr, Increment);
        
        for (int i = 0; i < arr.Length; ++i)
            Console.Write(arr[i] + " ");
    }
}
