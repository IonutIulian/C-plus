#include <iostream>
using namespace std;
#include <cmath>

// int main(){
// int a, b, swap;
// cin >>a >> b;
// swap = a;
// a = b ; 
// b = swap ;
// cout << "Numbers swaped : "<<a<<endl<<b;



// }


// int main ()
// {
// int x1,x2, a, b,c;
// cin >>a>>b>>c;
// int imagpart;



// if ((b*b-(4*a*c))>0){
//     x1 = (-b+sqrt(b*b-4*a*c))/(2*a);

//     x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
//     cout<< " radacinile sunt diferite si reale: "<< x1 << " "<< x2<<endl;}

//     else if (b*b-(4*a*c)<0)
//     {
//         x1= -b/(2*a);
//         x2 = -b/(2*a);
//         cout << "Radacinile sunt la fel si reale: "<<x1;

//     }
//     else
//     {
//         x1 = -b/(2*a);
//         x2 = -b/-b/(2*a);
//         imagpart = sqrt((b*b-4*a*c)/(2*a));

//         cout << "Radacinile sunt complexe si diferite : "<< x1 << " + " << imagpart<< "i"<<endl;
//         cout << "Radacinile sunt complexe si diferite : "<< x2 << " + " << imagpart<< "i"<<endl;
//     }
    
// }


// int main (){

//     char nt;
//     cin >> nt;
//     cout << "ASCII value of " << nt << " "<< int(nt);

//     return 0;

    
// }

// int main () {

//     int i , n;
//     long facto = 1.0;

//     cout << "Enter number: ";
//     cin >> n ;

//     if (n<=0){
//         cout << "N has to be positive number";
//         cin >> n ;
        
//     }
    
    
//     for(i=1; i<=n;i++){
//         facto *= i;
//     }
//     cout << "The factorial of number "<< n << " is "<< facto;
    


// }


// int main() {

// int num , pal = 0, ds, digit;

// cout << "Enter number:";
// cin >> num;
// ds = num;

// do {
//     digit = num % 10;
//     pal = (pal * 10) + digit;
//     num = num / 10;
// }while (num != 0);
//  if (pal == ds){
//     cout<<" Number is palindrome";

//  }
//  else{ cout << "Number is not palindrome "<<pal;}


// }

// bool check_prime(int);
// int main () {
//     int n;
//     cout<< "Enter positive number:";
//     cin >> n;

//     if ( check_prime(n))
    
//         cout<< "Number : "<< n << " is prime";

    
//     else
//         cout<< "Number : "<< n << " is not prime";
//     return 0;

// }

// bool check_prime(int n ){
// bool is_prime = true;
//     if (n==0 || n==1){
//     is_prime =false;
// }
//     for(int i =2;i<= n/2;i++){
//     if (n%i == 0){
//         is_prime =false;
//         break;
//     }
    
// }

// return is_prime;
// }


// #include <iostream>
// using namespace std;

// // function prototype
// void reverse(const string& a);

// int main() {
//   string str;

//   cout << " Please enter a string " << endl;
//   getline(cin, str);
    
//   // function call
//   reverse(str);

//   return 0;    
// }

// // function definition
// void reverse(const string& str) {

//   // store the size of the string
//   size_t numOfChars = str.size();

//   if(numOfChars == 1) {
//     cout << str << endl;
//   }
//   else {
//     cout << str[numOfChars - 1];

//     // function recursion
//     reverse(str.substr(0, numOfChars - 1));
//   }
// }


#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << &data[i];

   return 0;
}