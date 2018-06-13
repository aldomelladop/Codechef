#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T,Tc=0,j,k,i;
    float c1=0,c2=0;
    vector <int> n;
    cin>>T;

    while(Tc<T)
    {
        int A,B;
        float N;

        cin>>N;
        cin>>A;
        cin>>B;

        for(i=0;i<N;i++)
    	{
            cin >> j;
    		n.push_back(j);
    	}

    	for(k=0;k<N;k++)
    	{
    		if(A==n[k])
    		{
    			c2++;
    		}
    		if(B==n[k])
    		{
    			c1++;
    		}
    	}

        float p1 = c1/N;
        float p2 = c2/N;
        float result = p1*p2;
    Tc++;
    }
    return 0;
}
