#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char J_Cole[90];
    gets(J_Cole);
    int len = strlen(J_Cole);
    for(int i = 0;i < len;i++)
    {
        if(J_Cole[i] != ' ')
            cout<<J_Cole[i]<<" ";
        else
        {
            cout<<"."<<" ";
        }
    }
//for(int i = 0,j = 1;j < len+2;i+=2,j+=2)
//{
//    if (J_Cole[i] != ' ')
//    {
//        printf("%c%c%s",J_Cole[i],J_Cole[j]," ");
//    }
//    else if(J_Cole[i] == ' ')
//    {
//        continue;
//    }
//}
    cout<<endl;
    return 0;
}
