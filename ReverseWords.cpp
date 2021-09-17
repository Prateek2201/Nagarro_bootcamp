#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void rev(char &input1,int n1,int n2){
// 	while(n1<n2){
// 		swap(input1[n1++],input1[n2--]);
// 	}
// }

char* reverseWords(char *input1){
	int len;
	for(len=0;input1[len]!='\0';len++){}
	char tmp[100];
	string s = "";
	int k = 0;
	for(int i=len-1;i>=0;i--){
		if(input1[i]==' ' || i==0){
			if(i==0){s+=input1[0];}
			reverse(s.begin(),s.end());
			int j=0;
			while(s[j]!='\0'){
				tmp[k++] = s[j++];
			}
			tmp[k++] = ' ';
			s="";
		}
		else{
			s+=input1[i];
		}
	}
	tmp[len] = '\0';
	strcpy(input1, tmp);
	return input1;
}

int main(){
	char a[] = "My name is khan";
	cout<<reverseWords(a)<<endl;;
	
	return 0;
}