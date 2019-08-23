#include <iostream>

using namespace std;

unsigned int ordenar(long int i,long int j){
 	unsigned int resultado;
	unsigned int temp1;
	unsigned int temp2;
	unsigned int max=0;
	for (unsigned int o=i;o<=j;o++){
		temp2=o;
		temp1=1;
		while (temp2!=1){
			if (temp2%2!=0){
				temp2=(3*temp2+1);
			}
			else{
				temp2=temp2/2;
			}
			temp1+=1;
		}
		if(temp1>max)
			max=temp1;
	}
	return max;
}


int main() {
	unsigned int i=0;
	unsigned int j=0;
	while (scanf("%u %u",&i, &j)==2){
		cout<<i<<" "<<j<<" ";
		if (i<j)
			i= ordenar(i,j);
		else
			i= ordenar(j,i);
		
		cout<<i<<endl;
	}
    return 0;
}
