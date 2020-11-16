#include<cstdlib>
#include <iostream>
#include<string.h>
using namespace std;
#include "CString.h"
int EditString::IsSubString(int start, const char *str) {
	int len = strlen(mystr);
	int i, j;
	for (i = start; i<len; i++)
	{
		int k = i;
		for (j = 0; str[j] != '\0'; j++, k++)
		{
			if (str[j] != mystr[k])
				break;
		}
		if (str[j] == '\0') 
			return i;
	}
	return -1;
}

void EditString::EditChar(char s, char d) {
	for (int i = 0; mystr[i] != NULL; i++)
	{
		if (mystr[i] == s)
			mystr[i] = d;
	}

}


void EditString::EditSub(char * subs,char *subd)
{
    int start=0;
    char *temp = new char[len+1];
    while(start<len)
    {
        start=IsSubString(start,subs);
        if(start!=-1){
            strncpy(temp,mystr,start);
            temp[start] = '\0';
            strcat(strcat(temp,subd),&mystr[start+strlen(subs)]);
            strcpy(mystr,temp);
            len = strlen(mystr);
        }
        else{
            break;
        }
    }
    delete []temp;
}

void EditString::DeleteChar(char ch) {
	int k = 0, len = strlen(mystr);
	char s[1000];
	for (int i = 0; i < len; ++i) {
		if (mystr[i] == ch)continue;
		s[k++] = mystr[i];
	}
	for (int i = 0; i <= k; ++i)
		mystr[i] = s[i];
}

void EditString::DeleteSub(char *sub) {
	int ss = 0;
	char s[1000];
	int start = 0, lens = strlen(sub), len = strlen(mystr);
	while (1) {
		if (start >= len) 
			break;
		int k = IsSubString(start, sub);
		if (k == -1)
			break;
		for (int i = start; i < k; ++i)
			s[ss++] = mystr[i];
		start = k + lens;
	}
	for (int i = start; i < len; ++i)
		s[ss++] = mystr[i];
	for (int i = 0; i <= strlen(s); ++i)
		mystr[i] = s[i];
}

