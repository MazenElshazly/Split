#include <iostream>
using namespace std;
#include <vector>
#include <string>
void split(string target, string delimitter){
   vector <string> answer;
    int n =0;

    string temp;
    for (int i = 0; i < target.size(); ++i) {
        if(target[i] != delimitter[0]){
             temp = target[i];
            if (i==0 or target[i-1]==delimitter[0] ){
                answer.push_back(temp);
            }else{
                answer[n] += temp;
            }
        }
        else{
            n +=1;
        }
    }
    for (int i = 0; i < size(answer); ++i) {
        cout<<answer[i]<<endl;
    }
}

int  main(){
    split("10,20,30", ",");
}

