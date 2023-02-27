//# include <iostream>  
//using namespace std;  
//  
//int getGCD( int n1, int n2)  
//{  
//    if (n1 == 0)  
//    {  
//        return n2;        
//    }  
//  
//return getGCD(n2 % n1, n1);  
//}  
//  
//int getLCM( int n1, int n2)  
//{  
//    return (n1 / getGCD(n1, n2)) * n2;  
//}  
//  
//int main()  
//{  
//    int num1, num2;  
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout<<"Enter second number: ";
//    cin>>num2;
//    cout<<endl<< "LCM of two numbers " <<num1 <<" and " << num2 << " is: " << getLCM(num1, num2);  
//    return 0;
//}  
# include <iostream>  
using namespace std;  
  
int getHCF( int n1, int n2)  
{  
    if (n1 == 0)  
    {  
        return n2;        
    }  
  
return getHCF(n2 % n1, n1);  
}  

  
int main()  
{  
    int num1, num2;  
    cout << "Enter first number: ";
    cin >> num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<endl<< "HCF of two numbers " <<num1 <<" and " << num2 << " is: " << getHCF(num1, num2);  
    return 0;
}  

