//test string : aqwdqwd abwqdqwd bkjfkljrlfjlekrf cewfwef dewfwefw ewdwqd fqsqs gefewf hwefwef iewf jewf kewfwef lwded2e ba
#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
void minLengthWord(char input[], char output[]){
		
	// Write your code here
    int minlength = INT_MAX;
    int count = 1;
    int length = strlen(input);
    for (int i = 0; i<=length ; i++)
    {   

        if(input[i]!= ' ' && input[i]!='\0')
        {
            count++;
        }
        if(input[i]==' ' || input[i] == '\0')
        {
            
            if(count<minlength)
            {
                minlength = count;
                
            }
            count = 0;              

        }
    
    }
    count = 0;
    int k = 0;
    for (int j = 0;j<=length; j++)
    {
        if (input[j]!=' ' && input[j]!='\0')
        {
            count++;
            output[k] = input[j];
            k++;
        }
        if (input[j]==' ' || input[j]=='\0')
        {
            if (count == minlength)
            {
                
                output[k] = '\0';
                return;
            }
            else
            {
                k = 0;
                count = 0;
            }
        }
        
        
    }
    
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
