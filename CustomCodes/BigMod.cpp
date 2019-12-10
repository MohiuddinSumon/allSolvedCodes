//(a^b)%m

#define i64 long long
i64 M;
i64 F(i64 N,i64 P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		i64 ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;

}

// 100!%97
int fact=1;
	for(int i=1;i<=100;i++)
	{
		fact=((fact%97)*(i%97))%97;

	}
	printf("%d\n",fact);
