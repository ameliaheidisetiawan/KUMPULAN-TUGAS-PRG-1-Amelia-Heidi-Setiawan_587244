#include <iostream>
using namespace std;

//menentukan rumus:
// f(5) = 5*(4/2)*3*(2/2)*1
// f(7) = 7*(6/2)*5*(4/2)*3*(2/2)*1 --> 7*(6/2)* f(5)
// f(5) = 5*(4/2)*3*(2/2)*1 --> 5*(4/2)* f(3)
// f(n) = n*((n-1)/2)* f(n-2)
// maka basis: f(n) = { 1 , n = 1
//					  { n*((n-1)/2)* f(n-2),  n > 1


//Penjelasan kode: 
// membuat fungsi yang dinamakan fungsi dengan parameter (int n)
// karena berhenti memanggil dirinya sendiri saat n = 1 maka jika n == 1, nilai 1 akan dikembalikan
// jika n selain 1 maka nilai yang dikembalikan hasil dari perhitungan rumus.
int fungsi(int n){
	if (n == 1) {
		return 1;
	}
	else {
		return n * ((n - 1) / 2) * fungsi (n - 2);
	}
}

int main (){
	cout << "f(5) = " << fungsi(5) << endl;
	cout << "f(7) = " << fungsi(7) << endl;
	
	return 0;
}

