#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char s[100000];
        int l=0,r=0,u=0,d=0;
        scanf("%s",s);
        for(int i=0;s[i]!='\0';i++){
            switch(s[i]){
                case 'L':l++;
                break;
                case 'R':r++;
                break;
                case 'U':u++;
                break;
                case 'D':d++;
                break;
            }
        }
        l = min(l, r);
		r = l;
		u = min(u, d);
		d = u;
		int sum = l + r + u + d;
		if (l && !u)
		{
			sum = 2;
			printf("%d\n", sum);
			printf("LR\n");
			continue;
		}
		if (u && !l)
		{
			sum = 2;
			printf("%d\n", sum);
			printf("UD\n");
			continue;
		}
        printf("%d\n",2*l+2*u);
        for(int i=0;i<l;i++)
            printf("L");
        for(int i=0;i<u;i++)
            printf("U");
        while(l--)
            printf("R");
        while(u--)
            printf("D");
        printf("\n");
    }
    return 0;
}