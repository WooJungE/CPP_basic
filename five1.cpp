//가장 넓은 직사각형
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class P11 {
	//private 
protected: //상속 받아야 함
	vector< vector<int> > table;
	int width, height;
	int getArea(int top, int left); //오버라이트 후 정사각형 대신 사각형으로
	bool isSquare(int top, int left, int bottom, int right);
public:
	P11(vector< vector<int>> table);
	int solution(); //최대 면적 구하기
};

class P112 : public P11 { //상속 받기
	int getArea(int top, int left); //앞에 있던 virtual 없앰
	bool isRect(int top, int left, int bottom, int right);
public :
	P112(vector < vector <int> > table);
	int solution();
};

P11::P11(vector< vector<int> > table) {
	this->table = table;
	width = table[0].size();
	height = table.size();
}

int P11::solution() {
	int maxarea = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			int area = getArea(i, j);
			if (area > maxarea) maxarea = area;
		}
	}
	return maxarea;
}

int P11::getArea(int top, int left) {
	int maxarea = 0;
	for (int j = left; j < width; j++) {
		for (int i = top; i < height; i++) {
			if (isSquare(top, left, i, j)) {
				int area = (i - top + 1) * (j - left + 1);
				if (area > maxarea) maxarea = area;
			}
		}
	}
	return maxarea;
}

P112::P112(vector<vector<int>> table) :P11(table) {;}

int P112::getArea(int top, int left) {
	int maxarea = 0;
	for (int j = left; j < width; j++) {
		for (int i = top; i < height; i++) {
			if (isRect(top, left, i, j)) {
				int area = (i - top + 1) * (j - left + 1);
				if (area > maxarea) maxarea = area;
			}
		}
	}
	return maxarea;
}

bool P11::isSquare(int top, int left, int bottom, int right) {
	if ((bottom - top) != (right - left)) return false;
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			if (table[i][j] != 1) return false;
	return true;
}

bool P112::isRect(int top, int left, int bottom, int right) {
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			if (table[i][j] != 1) return false;
	return true;
}

int P112::solution() {
	int maxarea = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			int area = getArea(i, j);
			if (area > maxarea) maxarea = area;
		}
	}
	return maxarea;
}

int main() {
	vector<int> row;
	vector< vector<int> > table;
	row.push_back(0);
	row.push_back(1);
	row.push_back(1);
	row.push_back(1);
	table.push_back(row);
	row.clear();
	row.push_back(0);
	row.push_back(1);
	row.push_back(1);
	row.push_back(1);
	table.push_back(row);
	row.clear();
	row.push_back(0);
	row.push_back(1);
	row.push_back(1);
	row.push_back(1);
	table.push_back(row);
	row.clear();
	row.push_back(0);
	row.push_back(1);
	row.push_back(1);
	row.push_back(1);
	table.push_back(row);
	row.clear();
	P11 myp11(table);
	P112 myp112(table);
	cout << myp11.solution() << endl;
	cout << myp112.solution() << endl;
}
*/