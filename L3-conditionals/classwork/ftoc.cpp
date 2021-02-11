/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
*/
//SOL
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  	int S,E,W;
    cin>>S>>E>>W;
    
    int c;
    int i = S;
    while(S<=E)
    {
        c = (5.0/9)*(S-32);
        cout<<S<<"\t"<<c;
        cout<<endl;
        S= S+W;
    }
}


