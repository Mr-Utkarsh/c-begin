#include <iostream>
using namespace std;
// int a = 900; //global variable

int main() {
    // int a,b;
    // int c = a-b;
    // cout<<"enter a : ";
    // cin>>a;
    // cout<<"enter b : ";
    // cin>>b;
    
    // (c>0)?cout<<(c):cout<<(b-a);


    //     int a,b,c;
    //     cout<<"enter 1 no\n";
    //     cin>>a;
    //     cout<<"enter 2 no\n";
    //     cin>>b;
    //     c = (a>b)?a-b:b-a;
    //     cout<<c;

    // int pass1 ;
    // cin>>pass1;
    // int pass2;
    // cin>>pass2;
    // (pass1==pass2)?cout<<("valid"):cout<<"invalid";    

    //even odd program
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // (num % 2 == 0) ? cout << "Even" : cout << "Odd";

    //program of finding larger number
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // (num1 > num2) ? cout << num1 : cout << num2;

    //scope resolution operator
    //:- it is used to access the global variable

    // {
    //     int a = 100; //local variable
    //     cout << a << endl;
    //     cout << ::a << endl;// scope resolution operator
    // }

    //referrence variable example
//     int a = 10;//a is a normal variable
//     int &b = a;//b is a referrence variable
//     cout << "a = " <<a << endl; //value of a
//     cout << "b = " <<b << endl;//value of b
//     cout<<"address of a = "<<&a<<endl;//address of a
//     cout<<"address of b = "<<&b<<endl;//address of b
//     b = 90;
//     cout << "a = " <<a << endl;
//     cout << "b = " <<b << endl;

    //pointer variable example
//   int a = 300;
//   int b = 900;
//   int *p;// * is pointer
//   p=&a;//reference (& is address/reference)
//   cout<< "address of a = "<<&a<<endl;
//   cout<<*p;//dereference

   //Q1 write a program to print,subtract,multiply,modulus% & division/ of two numbers;
//    int a,b;
//    cout<<"enter 1 no = " <<endl;
//    cin>>a;
//     cout<<"enter 2 no = "<<endl;
//     cin>>b;
//     cout<<"the ans of a+b is = "<<a+b<<endl;
//     cout<<"the ans of a-b is = "<<a-b<<endl;
//     cout<<"the ans of a*b is = "<<a*b<<endl;
//     cout<<"the ans of a/b is = "<<a/b<<endl;
//     cout<<"the ans of a%b is = "<<a%b<<endl;


   //Q2 write a program to find area of circle;
    //  int r;
    //     cout<<"enter the radius of circle = "<<endl;
    //     cin>>r;
    //     cout<<"the area of circle is = "<<3.14*r*r<<endl;


   //Q3 write a program to find simple interest;
    // int p,t,r;
    // cout<<"enter the principle amount = "<<endl;
    // cin>>p;
    // cout<<"enter the time = "<<endl;
    // cin>>t;
    // cout<<"enter the rate = "<<endl;
    // cin>>r;
    // cout<<"the simple interest is = "<<(p*t*r)/100<<endl;


   //Q4 write a program to convert celsius to fahrenheit;
    // float c;
    // cout<<"enter the celsius = "<<endl;
    // cin>>c;
    // cout<<"the fahrenheit is = "<<(c*9/5)+32<<endl;


   //Q5 write a program to find square root of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the square root of a number is = "<<a*a<<endl;


   //Q6 write a program to find cube of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the cube of a number is = "<<a*a*a<<endl;

    //Control flow statement:- it includes 3 types of statements:-
    //1 conditional statement-- there are 4 types:- single,BI,Ladder,nested
    //2 transfer statement--there are 3 types:- Break,continue,switch
    //3 looping statement-there are 3 types:- do while,while,for

    //1 conditional statement :-
    //1 single conditional statement :- singal candition will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // int age;
    // cout<<"enter the age = "<<endl;
    // cin>>age;
    // if(age>=18)
    // {
    //     cout<<"you are eligible for voting"<<endl;
    // }


    //condition with expression example
    // int a = 1;
    // if (a,a--,a++)
    // {
    //     cout<<"true"<<endl;
    // }

    //2 BI conditional statement:- two conditions will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // else
    // {
    // statement
    // }

    //Q7 write a program to find out the given no is even or odd;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // if(a%2==0)
    // {
    //     cout<<"the given no is even"<<endl;
    // }
    // else
    // {
    //     cout<<"the given no is odd"<<endl;
    // }    

    //Q8 write a program to find out the large no between 2 integers;
    // int a,b;
    // cout<<"enter 1 no = "<<endl;
    // cin>>a;
    // cout<<"enter 2 no = "<<endl;
    // cin>>b;
    // if(a>b)
    // {
    //     cout<<"the large no is = "<<a<<endl;
    // }
    // else
    // {
    //     cout<<"the large no is = "<<b<<endl;
    // }

    //Q9 write a program to find out the given character is vowel or consonant;
    // char ch;
    // cout<<"enter the character = "<<endl;
    // cin>>ch;
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
    // {
    //     cout<<"the given character is vowel"<<endl;
    // }
    // else
    // {
    //     cout<<"the given character is consonant"<<endl;
    // }

   //3 nested example //Q10   4 digit password program 
//     int pw,otp;
//     int opw = 2025;
//     int ootp = 1000;
//    cout<<"create password = ";
//    cin>>pw;
   
//     if (pw>=1000 && pw<=9999)
//     {
       
//       if (pw==opw)
//         {
//             cout<<"enter the otp = ";
//             cin>>otp;
//             if (otp==ootp)
//             {
//                cout<<"welcome";
//             }
//             else
//             {
//                 cout<<"invalid otp";
//             }
            
//         }
//         else
//         {
//             cout<<"wrong password";
//         }  
//     }
//     else
//     {
//         cout<<"invalid";
//     }
    
    //ladder conditional 
    // syntax:-
    // if (condition)
    // {
    //     /* code */
    // }
    // else if (condition)
    // {
    //     /* code */
    // }
    // else
    // {
    //     /* code */
    // }
    
    //Q check btwn 3 numbers either one is larger or all are same?
    
    // int a,b,c;
    // cout<<"enter the value of a = ";
    // cin>>a;
    // cout<<"enter the value of b = ";
    // cin>>b;
    // cout<<"enter the value of c = ";
    // cin>>c;
    // if (a==b && b==c)
    // {
    //     cout<<"all are same";
    // }
    // else if (a>b && a>c)
    // {
    //     cout<<"a is larger";
    // }
    // else if (b>a && b>c)
    // {
    //     cout<<"b is larger";
    // }
    // else if (a == b && a > c)
    // {
    //     cout<<"a and b are larger";
    // }
    // else if (a == c && a > b)
    // {
    //     cout<<"a and c are larger";
    // }
    // else if (b == c && b > a)
    // {
    //     cout<<"b and c are larger";
    // }
    // else
    // {
    //     cout<<"c is larger";
    // }

    //Q11 write a program to find out the percentage between 3 subjects and total marks is 300 and give the grades according to the percentage for 1st division 60% and above,2nd division 50% to 59% ,3rd division 35% and above and fail below 33%.;

    // int Physics,Chemistry,Maths;
    // cout<<"enter the marks of Physics = ";
    // cin>>Physics;
    // cout<<"enter the marks of Chemistry = ";
    // cin>>Chemistry;
    // cout<<"enter the marks of Maths = ";
    // cin>>Maths;
    // float total = Physics + Chemistry + Maths;
    // float percentage = (total / 3;
    // cout<<"the percentage is = "<<percentage<<endl;
    // if (percentage>=60 && percentage<=100)
    // {
    //     cout<<"1st division";
    // }
    // else if (percentage>=50 && percentage<=59)
    // {
    //     cout<<"2nd division";
    // }
    // else if (percentage>=35 && percentage<=49)
    // {
    //     cout<<"3rd division";
    // }
    // else
    // {
    //     cout<<"fail";
    // }

    // int a,b,c;
    // cout<<"Enter a : ";
    // cin>>a;
    // cout<<"Enter b : ";
    // cin>>b;
    // cout<<"Enter c : ";
    // cin>>c;

    
    

}
