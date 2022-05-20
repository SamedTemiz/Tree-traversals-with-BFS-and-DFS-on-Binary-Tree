#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <chrono>
#include "veri.h"
using namespace std;

void agacBosalt(Dugum*);

void yazdirIN(Dugum*);
void yazdirPRE(Dugum* node);
void yazdirPOST(Dugum* node);

void yazdirLevel(Dugum* node);
void yazdirCurrent(Dugum* node, int level);
void DFS(Dugum* node);

int main()
{
	int pick, deger;
	cout << "Arama yapacaginiz agaci seciniz (1, 2, 3) :" << endl;
	scanf("%d", &pick);
	switch (pick)
	{
	case 1:
		IkiliSiralamaAgaci agac1;
		agac1.kok = NULL;
		for (int i = 0; i < UZUNLUK; i++)
		{
			agac1.agacKur(&dizi1[i]);//Birinci dizimiz agac1 oluyor
		}
		cout << endl;
		//yazdirPRE(agac1.kok);
		//yazdirPOST(agac1.kok);
		//yazdirLevel(agac1.kok);
		//DFS(agac1.kok);
		cout << "Agac 1 icin arama yontemini seciniz (DFS:1, BFS:2) :" << endl;
		scanf("%d", &pick);
		if (pick == 1)
		{
			cout << endl;
			cout << "Agac 1 uzerinde DFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case1_dfs_s = std::chrono::high_resolution_clock::now();
			bool durum = DFS(agac1.kok, deger);//DFS ile arama yapýlýyor
			auto case1_dfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case1_dfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case1_dfs_e - case1_dfs_s);
				cout << "GECEN SURE => " << case1_dfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		else if (pick == 2)
		{
			cout << endl;
			cout << "Agac 1 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case1_bfs_s = std::chrono::high_resolution_clock::now();
			bool durum = BFS(agac1.kok, deger);//BFS ile arama yapýlýyor
			auto case1_bfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case1_bfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case1_bfs_e - case1_bfs_s);
				cout << "GECEN SURE => " << case1_bfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		agac1.agacKapat();
		break;
		//-------------------------------------------------------------------------
	case 2:
		IkiliSiralamaAgaci agac2;
		agac2.kok = NULL;
		for (int i = 0; i < UZUNLUK; i++)
		{
			agac2.agacKur(&dizi2[i]);//Ýkinci dizimiz agac2 oluyor
		}
		cout << endl;
		cout << "Agac 2 icin arama yontemini seciniz (DFS:1, BFS:2) :" << endl;
		scanf("%d", &pick);
		if (pick == 1)
		{
			cout << endl;
			cout << "Agac 2 uzerinde DFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case2_dfs_s = std::chrono::high_resolution_clock::now();
			bool durum = DFS(agac2.kok, deger);//DFS ile arama yapýlýyor
			auto case2_dfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case2_dfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case2_dfs_e - case2_dfs_s);
				cout << "GECEN SURE => " << case2_dfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		else if (pick == 2)
		{
			cout << endl;
			cout << "Agac 2 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case2_bfs_s = std::chrono::high_resolution_clock::now();
			bool durum = BFS(agac2.kok, deger);//BFS ile arama yapýlýyor
			auto case2_bfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case2_bfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case2_bfs_e - case2_bfs_s);
				cout << "GECEN SURE => " << case2_bfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		agac2.agacKapat();
		break;
		//-------------------------------------------------------------------------
	case 3:
		IkiliSiralamaAgaci agac3;
		agac3.kok = NULL;
		for (int i = 0; i < UZUNLUK; i++)
		{
			agac3.agacKur(&dizi3[i]);//Üçüncü dizimiz agac2 oluyor
		}
		cout << endl;
		cout << "Agac 3 icin arama yontemini seciniz (DFS:1, BFS:2) :" << endl;
		scanf("%d", &pick);
		if (pick == 1)
		{
			cout << endl;
			cout << "Agac 3 uzerinde DFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case3_dfs_s = std::chrono::high_resolution_clock::now();
			bool durum = DFS(agac3.kok, deger);//DFS ile arama yapýlýyor
			auto case3_dfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case3_dfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case3_dfs_e - case3_dfs_s);
				cout << "GECEN SURE => " << case3_dfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		else if (pick == 2)
		{
			cout << endl;
			cout << "Agac 3 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			scanf("%d", &deger);
			auto case3_bfs_s = std::chrono::high_resolution_clock::now();
			bool durum = BFS(agac3.kok, deger);//BFS ile arama yapýlýyor.
			auto case3_bfs_e = std::chrono::high_resolution_clock::now();
			if (durum)
			{
				cout << endl;
				cout << "SONUC => VERI BULUNDU" << endl;
				auto case3_bfs_r = std::chrono::duration_cast<std::chrono::microseconds>(case3_bfs_e - case3_bfs_s);
				cout << "GECEN SURE => " << case3_bfs_r.count() << " mikro-saniye" << endl;
			}
			else
				cout << "hata";
		}
		agac3.agacKapat();
		break;
		//-------------------------------------------------------------------------
	default:
		break;
	}
}

void IkiliSiralamaAgaci::agacKur(int* x)
{
	Dugum* node = new Dugum(); //Gelen int veriyi yeni düðüm oluþturarak alýyoruz.
	node->veri = *x;
	if (kok == NULL) 
	{
		kok = node;//kok boþ ise ilk verimiz olacak olan deðeri kok e atýyoruz.
		return;
	}
	queue<Dugum*> q;
	q.push(kok); //Kuyruk listesi oluþturarak mevcut kok u içine atýyoruz.

	while (!q.empty())
	{
		Dugum* temp = q.front();//Kuyruðun ilk elemanýný geçici düðüme atýyoruz.
		q.pop();//Ýlk elemaný kuyruktan çýkarýyoruz.
		if (temp->sol == NULL)
		{
			temp->sol = node;//Düðümün sol çocuðu boþ ise atama buraya oluyor.
			return;
		}
		else if (temp->sag == NULL)
		{
			temp->sag = node;//Düðümün sað çocuðu boþ ise atama buraya oluyor.
			return;
		}
		else
		{
			//Ýki çocuk da(sol ve sag) dolu ise düðümü kuyruða geri ekliyoruz.
			q.push(temp->sol);
			q.push(temp->sag);
		}
	}
}

//Depth First Traversals
void yazdirIN(Dugum* node)//SOL - KOK - SAG
{
	if (node == NULL)
	{
		return;
	}
	yazdirIN(node->sol);
	cout << node->veri << " ";
	yazdirIN(node->sag);
}
void yazdirPRE(Dugum* node)//KOK - SOL - SAG
{
	if (node == NULL)
	{
		return;
	}
	cout << node->veri << " ";
	yazdirPRE(node->sol);
	yazdirPRE(node->sag);
}
void yazdirPOST(Dugum* node)//SOL - SAG - KOK
{
	if (node == NULL)
	{
		return;
	}
	yazdirPOST(node->sol);
	yazdirPOST(node->sag);
	cout << node->veri << " ";
}
void DFS(Dugum* node)//PreOrder Traversal KOK - SOL - SAG
{
	stack<Dugum*> s;
	s.push(node);
	while (s.empty() == false)
	{
		Dugum* temp = s.top();
		s.pop();
		if (temp->sag != NULL)
			s.push(temp->sag);
		if (temp->sol != NULL)
			s.push(temp->sol);
		cout << temp->veri << " ";
	}
}
//-------------------------------------------------

//Breadth-First or Level Order Traversal
int height(Dugum* node)
{
	if (node == NULL)
		return 0;
	else {
		int sol_height = height(node->sol);
		int sag_height = height(node->sag);

		if (sol_height > sag_height)
		{
			return (sol_height + 1);
		}
		else
		{
			return (sag_height + 1);
		}
	}
}
void yazdirLevel(Dugum* node)
{
	int h = height(node);
	int i;
	for (i = 1; i <= h; i++)
	{
		yazdirCurrent(node, i);
	}
}
void yazdirCurrent(Dugum* node, int level)
{
	if (node == NULL)
		return;
	if (level == 1)
		cout << node->veri << " ";
	else if (level > 1)
	{
		yazdirCurrent(node->sol, level - 1);
		yazdirCurrent(node->sag, level - 1);
	}
}
//-------------------------------------------------

bool DFS(Dugum* node, int x)
{
	bool durum = false;
	stack<Dugum*> s;
	s.push(node);//Oluþturulan yýðýn listemize mevcut aðacý ekliyoruz.
	while (s.empty() == false)
	{
		Dugum* temp = s.top();//Geçici düðüm yýðýnýn üst verisi oluyor.
		if (temp->veri == x)
		{
			durum = true;//Aradýðýmýz veri bu ise arama duruyor.
			return durum;
		}//Algoritmaya göre öncelik parent düðümlerde
		s.pop();
		if (temp->sag != NULL)
			s.push(temp->sag);
		if (temp->sol != NULL)
			s.push(temp->sol);
	}
	return durum;
}
bool BFS(Dugum* node, int x)
{
	bool durum = false;
	queue<Dugum*> q;
	q.push(node);//Oluþan kuyruk listemize aðacý ekliyoruz.
	while (!q.empty())
	{
		Dugum* temp = q.front();//Kuyruðun ilk elemaný geçici düðüm oluyor.
		q.pop();
		//cout << temp->veri << " ";
		if (temp->veri == x)
		{
			durum = true;//Aranan deðer bu düðüm ise arama duruyor.
			return durum;
		}
		//Algoritmaya göre öncelik ebeveyn düðümlerde
		if (temp->sol != NULL)
			q.push(temp->sol);
		if (temp->sag != NULL)
			q.push(temp->sag);
	}
	return durum;
}

void IkiliSiralamaAgaci::agacKapat()
{
	agacBosalt(kok);//Mevcut kok agacBosalt metoduna gidiyor.
	cout << "Bosaltildi!";
}
void agacBosalt(Dugum* kok)
{
	if (kok == nullptr) {//Gelen kok boþ ise geri dönülüyor.
		return;
	}
	//Koke baðlý çocuklar yinelemeli olarak tekrar gönderilerek silinmesi saðlanýyor.
	agacBosalt(kok->sol);
	agacBosalt(kok->sag);
	delete kok;//En son kokun kendisi siliniyor.

	kok = nullptr;
	return;
}

