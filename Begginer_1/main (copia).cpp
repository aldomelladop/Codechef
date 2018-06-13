#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T,Tc=0,j,k,i;
    float c1=0,c2=0;
    vector <int> n;

    cout <<" Ingrese el número de veces que quiero jugar la mierda"<<endl;
    cin>>T;

    while(Tc<T)
    {
        int A,B;
        float N;
        cout<<"ingrese el número lados"<<endl;
        cin>>N;
        cout<<"ingrese el número que desea obtener en el primer lanzamiento"<<endl;
        cin>>A;
        cout<<"ingrese el número que desea obtener en el segundo lanzamiento"<<endl;
        cin>>B;

        for(i=0;i<N;i++)
    	{
            cout<<"ingrese el valor de la cara"<<endl;
            cin >> j;
    		n.push_back(j);
    	}
        cout<<"perror  1"<<endl;
    	for(k=0;k<N;k++)//O es menor igual que N-1 o menor que N!
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
    	cout<<"perror 2"<<endl;
        float p1 = c1/N;
        float p2 = c2/N;
        float result = p1*p2;
    	cout<<"el resultado es: "<<result<<endl;
    Tc++;
    }
    return 0;
}
