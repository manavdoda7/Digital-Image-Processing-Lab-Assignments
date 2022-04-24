#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main() {

    for(int i=1;i<=11;i++) {
        if(i == 7) continue;
        string command = "jupyter nbconvert --to pdf \\dip_lab_manav\\Digital-Image-Processing-Lab-Assignments\\Lab" + to_string(i) + "\\Lab" + to_string(i) +".ipynb";
        char *command1 = &command[0];
        // cout<<command<<endl;
        system(command1);
    }
}