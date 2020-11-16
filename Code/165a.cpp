//CSDN上的（我的只有86分，没找到哪里错了）

#include <iostream>
#include "CSet.h"
using namespace std;

Set & Set:: operator +=(int e){
	int n = this -> n;bool f = 0;
	for(int i = 1; i <= n; ++i)if(this -> pS[i] == e)f = 1;
	if(!f){
		int *p = new int[n+2];
		for(int i = 1; i <= n; ++i){
			p[i] = this -> pS[i];
		}
		p[n+1] = e;
		this -> pS = p;
		this -> n++;
	}
	return *this;
}
Set & Set:: operator -=(int e){
	int n = this -> n;bool f = 0;
	for(int i = 1; i <= n; ++i)if(this -> pS[i] == e)f = 1;
	if(f){
		int k = 1;
		int *p = new int[n];
		for(int i = 1; i <= n; ++i){
			if(this -> pS[i] == e)continue;
			p[k++] = this -> pS[i];
		}
		this -> n--;
	}
	return *this;
}
bool Set::operator <=(const Set &s)const{
	if(this -> n > s.n)return 0;
	bool f = 0;
	for(int i = 1; i <= this -> n; ++i){
		f = 0;
		int v = this -> pS[i];
		for(int j = 1; j <= s.n; ++j){
			if(v == s.pS[j])f = 1;
		}
		if(!f)return 0;
	}
	return 1;
}
bool Set::operator ==(const Set &s)const{
	if(this -> n != s.n)return 0;
	bool f = 0;
	for(int i = 1; i <= this -> n; ++i){
		f = 0;
		int v = this -> pS[i];
		for(int j = 1; j <= s.n; ++j){
			if(v == s.pS[j])f = 1;
		}
		if(!f)return 0;
	}
	return 1;
}
Set Set::operator |(const Set &s)const{
	int cnt = 0;
	int *p = new int[this->n+1+s.n+1];
	for(int i = 1; i <= this -> n; ++i){
		p[++cnt] = this -> pS[i];
	}
	for(int i = 1; i <= s.n; ++i){
		int v = s.pS[i];
		bool f = 0;
		for(int j = 1; j <= this -> n; ++j){
			if(v == this -> pS[j]){
				f = 1;break;
			}
		}
		if(!f){
			p[++cnt] = v;
		}
	}
	Set s1;
	s1.n = cnt;
	s1.pS = p;
	return s1;
}
Set Set::operator &(const Set &s)const{
	int cnt = 0;
	int *p = new int[this->n+1+s.n+1];
	for(int i = 1; i <= s.n; ++i){
		int v = s.pS[i];
		for(int j = 1; j <= this -> n; ++j){
			if(v == this -> pS[j])p[++cnt] = v;
		}
	}
	Set s1;
	s1.n = cnt;
	s1.pS = p;
	return s1;
}
Set Set::operator -(const Set &s)const{
	int cnt = 0;
	int *p = new int[this->n+1+s.n+1];
	for(int i = 1; i <= this -> n; ++i){
		int v = this -> pS[i];
		bool f = 0;
		for(int j = 1; j <= s.n; ++j){
			if(v == s.pS[j])f = 1;
		}
		if(!f)p[++cnt] = v;
	}
	Set s1;
	s1.n = cnt;
	s1.pS = p;
	return s1;
}