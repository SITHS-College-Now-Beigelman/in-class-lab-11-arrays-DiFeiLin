/*Lin Di Fei 
homework 4 
11/12/24
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	const int ARRAY_SIZE = 50;//number of terms in array
   	double alpha[ARRAY_SIZE];//array 
    int forLoop = 0;//for loop for the output statements 
    int number = 0;//number as the variable that facilitates variable change 
    int sum = 0;//sum
    int hundreds = 0;//number of hundreds

    for (int index = 0; index < 26; index++){//for loop that runs for the first 25 terms 
        alpha[index] = index;//substitude number so the value can be changed 
        number = pow(rand() % 100 + 1,2);//random number and squared 
        alpha[index] = number;//the value is placed into the list 
    }

    for (int index = 26; index < 50; index++){//for loop that runs for the last 25 terms 
        alpha[index] = index;//substitude number so the value can be changed 
        number = 3*(rand() % 100 + 1);//random number times 3 
        alpha[index] = number;//the value is placed into the list
    }

    for (int index = 0; index <5; index++){//five rows 
        for(int index = 0; index<10; index++){//ten terms in a row 
            cout<<alpha[forLoop]<<" ";//each individual number 
            forLoop = forLoop+1;//adds one to maintain the loop
            sum = alpha[forLoop]+sum;//adds to a sum
            if (alpha[forLoop] == 100){//if value is 100 add an indicator 
                hundreds = hundreds +1;
            }
        }
        cout<<endl;//skip line 
    }
    cout<<sum/50<<endl;//output the average 
    cout<<"there are "<<hundreds<<" 100s";//number of 100s 
    return 0;
}