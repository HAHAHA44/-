//WTF£¡£¡ 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Node{
	int name;
	Node(int v){
		name = v;
	}
};

struct bridge{
	Node *left;
	Node *right;
	bridge(Node *a,Node *b){
		left = a;
		right = b;
	}
};

int dfs(vector<bridge*> v){
	
}

void Tree(){
	int n;
	vector<int> act;
	cin >> n;
	vector<bridge*> v; 
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		Node *t1 = new Node(a);
		Node *t2 = new Node(b);
		bridge *t = new bridge(a,b);
		v.push_back(t);
		if(act.find(a) != vector::npos)
			act.push_back(a); 
		if(act.find(b) != vector::npos)
			act.push_back(b);
	}
	sort(act.begin(),act.end());
	for(int i = 0;i < act.size();i++){
		
	}
}



int main(){
	int c;
	cin >> c;
	for(int i = 0;i < c;i++){
		Tree();
		cout << "---" << endl;
	}
}
