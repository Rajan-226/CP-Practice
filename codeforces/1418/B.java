
import java.util.*;
//import java.lang.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0) {
			int n=sc.nextInt();
			int[] a=new int[n];
			int[] fix=new int[n];
			
			ArrayList<Integer> arr=new ArrayList<Integer>();
			
			for(int i=0;i<n;i++)	a[i]=sc.nextInt();
			for(int i=0;i<n;i++) {
				fix[i]=sc.nextInt();
				if(fix[i]==0) {
					arr.add(a[i]);
				}
			}
			Collections.sort(arr,Collections.reverseOrder());
			int ind=0;
			for(int i=0;i<n;i++) {
				if(fix[i]==0) {
					System.out.print(arr.get(ind++)+" ");
				}
				else {
					System.out.print(a[i]+" ");
				}
			}
			System.out.println();
			
			
			
		}
	}

}
