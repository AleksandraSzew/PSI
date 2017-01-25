#include <iostream>
using namespace std;
int main()
{
int x[4][3],w[3],y[4][1];
for(int i=0;i<=2;++i)
	w[i]=0;
for(int p=1;p<=4;++p)
	x[p][0]=1;
	for(int p=1;p<=4;++p) {
cout<<"Wzorzec wejœciowy "<<p<<" : "<<endl;
for(int i=1;i<=2;++i)
cin>>x[p][i];
cout<<"Wprowadz sygnal wyjsciowy "<<endl;
for(int j=1;j<=1;++j)
cin>>y[p][j];

	for(int i=0;i<=2;++i){
		for(int j=1;j<=1;++j){
			w[i]+=x[p][i]*y[p][j];
			cout<<endl;
 
		}
	}
}
cout<<"Wagi wyjsciowe = [ "<<w[0]<<" "<<w[1]<<" "<<w[2]<<" ]"<<endl;

system("PAUSE");
}