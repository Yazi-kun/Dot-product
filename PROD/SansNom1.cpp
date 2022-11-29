
#include <iostream>

using namespace std;
	
//fct de remplissage tab1
void remplir1(int tab1[],int n){
	for(int i=0; i<n; i++){
			cin>>tab1[i];
	}
}


//fct de remplissage tab2
void remplir2(int tab2[],int n){
	for(int j=0; j<n; j++){
			cin>>tab2[j];
	}
}

//fct affichage

void affi1(int tab1[], int n){
	for(int i=0; i<n; i++){
		cout<<tab1[i]<<"\t"<<endl;
	}
}

void affi2(int tab2[], int n){
	for(int j=0; j<n; j++){
		cout<<tab2[j]<<"\t"<<endl;
	}
}

//produit des tableaux
int prod1(int tab1[],int tab2[] ,int n){
 	int prod=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			prod=prod+((tab1[i])*(tab2[j]));
			
		}
		
	}
	return prod1;
	
}

			




int main(){
	int n;
	int tab1[100];
	int tab2[100];
	cin>>n;
	remplir1(tab1, n);
	remplir2(tab2, n);
	affi1(tab1,n);
	affi2(tab,n);
	cout<<prod1(tab1, tab2,n)<<endl;
	
	     
    return 0;
}
