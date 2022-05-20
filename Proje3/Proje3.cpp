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
			bool durum = DFS(agac1.kok, deger);//DFS ile arama yap�l�yor
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
			bool durum = BFS(agac1.kok, deger);//BFS ile arama yap�l�yor
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
			agac2.agacKur(&dizi2[i]);//�kinci dizimiz agac2 oluyor
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
			bool durum = DFS(agac2.kok, deger);//DFS ile arama yap�l�yor
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
			bool durum = BFS(agac2.kok, deger);//BFS ile arama yap�l�yor
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
			agac3.agacKur(&dizi3[i]);//���nc� dizimiz agac2 oluyor
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
			bool durum = DFS(agac3.kok, deger);//DFS ile arama yap�l�yor
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
			bool durum = BFS(agac3.kok, deger);//BFS ile arama yap�l�yor.
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
	Dugum* node = new Dugum(); //Gelen int veriyi yeni d���m olu�turarak al�yoruz.
	node->veri = *x;
	if (kok == NULL) 
	{
		kok = node;//kok bo� ise ilk verimiz olacak olan de�eri kok e at�yoruz.
		return;
	}
	queue<Dugum*> q;
	q.push(kok); //Kuyruk listesi olu�turarak mevcut kok u i�ine at�yoruz.

	while (!q.empty())
	{
		Dugum* temp = q.front();//Kuyru�un ilk eleman�n� ge�ici d���me at�yoruz.
		q.pop();//�lk eleman� kuyruktan ��kar�yoruz.
		if (temp->sol == NULL)
		{
			temp->sol = node;//D���m�n sol �ocu�u bo� ise atama buraya oluyor.
			return;
		}
		else if (temp->sag == NULL)
		{
			temp->sag = node;//D���m�n sa� �ocu�u bo� ise atama buraya oluyor.
			return;
		}
		else
		{
			//�ki �ocuk da(sol ve sag) dolu ise d���m� kuyru�a geri ekliyoruz.
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
	s.push(node);//Olu�turulan y���n listemize mevcut a�ac� ekliyoruz.
	while (s.empty() == false)
	{
		Dugum* temp = s.top();//Ge�ici d���m y���n�n �st verisi oluyor.
		if (temp->veri == x)
		{
			durum = true;//Arad���m�z veri bu ise arama duruyor.
			return durum;
		}//Algoritmaya g�re �ncelik parent d���mlerde
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
	q.push(node);//Olu�an kuyruk listemize a�ac� ekliyoruz.
	while (!q.empty())
	{
		Dugum* temp = q.front();//Kuyru�un ilk eleman� ge�ici d���m oluyor.
		q.pop();
		//cout << temp->veri << " ";
		if (temp->veri == x)
		{
			durum = true;//Aranan de�er bu d���m ise arama duruyor.
			return durum;
		}
		//Algoritmaya g�re �ncelik ebeveyn d���mlerde
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
	if (kok == nullptr) {//Gelen kok bo� ise geri d�n�l�yor.
		return;
	}
	//Koke ba�l� �ocuklar yinelemeli olarak tekrar g�nderilerek silinmesi sa�lan�yor.
	agacBosalt(kok->sol);
	agacBosalt(kok->sag);
	delete kok;//En son kokun kendisi siliniyor.

	kok = nullptr;
	return;
}

