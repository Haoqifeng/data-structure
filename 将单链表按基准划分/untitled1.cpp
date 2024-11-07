#include <iostream>
#include <cstring>
using namespace std;

struct LinkNode {
	char data;      
	LinkNode* next;
	
	LinkNode(char x) : data(x), next(nullptr) {}
};
void CreateListR(LinkNode*& L, const char* arr, int n) {
	L = new LinkNode(0); 
	LinkNode* tail = L;  
	
	for (int i = 0; i < n; ++i) {
		LinkNode* newNode = new LinkNode(arr[i]);  
		tail->next = newNode; 
		tail = newNode;     
	}针
}

// 打印链表
void DispList(LinkNode* L) {
	LinkNode* p = L->next;  // 跳过头节点
	while (p != nullptr) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

// 销毁链表
void DestroyList(LinkNode* L) {
	LinkNode* p = L;
	while (p != nullptr) {
		LinkNode* temp = p;
		p = p->next;
		delete temp;  // 释放节点内存
	}
}

/
void s1(LinkNode*& L) {
	LinkNode* pre, * p, * q;
	if (L->next == nullptr || L->next->next == nullptr)
		return;
	
	int x = L->next->data;  // 获取首节点的值作为划分基准
	pre = L->next;
	p = pre->next;
	
	while (p != nullptr) {
		if (p->data < x) {
			pre->next = p->next;  // 删除节点 p
			p->next = L->next;    // 将节点 p 插入到链表前
			L->next = p;
			p = pre->next;
		}
		else {
			pre = p;
			p = pre->next;
		}
	}
}

int main() {
	LinkNode* L;
	const char* a = "daxgdchaeb";
	int n = strlen(a);
	CreateListR(L, a, n);
	
	cout << "L: ";
	DispList(L);
	cout << "以首节点值进行划分" << endl;
	s1(L);
	cout << "L: ";
	DispList(L);
	
	DestroyList(L);
	return 0;
}


