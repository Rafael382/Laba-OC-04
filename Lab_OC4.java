import java.util.Scanner;
public class Main
{
    public static void main(String[] args) 
    {
        float result, sum = 0, i, b, c;
        Scanner in = new Scanner(System.in);
        System.out.print("Введите i, b, c: \n");
        i = in.nextInt();
        System.out.printf("i: %f \n", i);
        b = in.nextInt();
        System.out.printf("b: %f \n", b);
        c = in.nextInt();
        System.out.printf("c: %f \n", c);
        double start = System.currentTimeMillis();
        for (int n1 = 1; n1 < 100000001; n1++)
        {
            sum += b * 2 + c - i;
        }
        result = i + sum;
        System.out.printf("f(i+1) %f \n", result);
        in.close();
        double end = System.currentTimeMillis();
        double elapsed = (end - start);
        System.out.println("The time:" + elapsed/1000);
	}
}