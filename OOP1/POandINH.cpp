#include<iostream>
using namespace std;
class Enemy {
public:
	int m_Damage;
	Enemy();
	void Attack() const;



};
Enemy::Enemy() :
	m_Damage(10)

{}
void Enemy::Attack() const {
	cout << "Attack inflicts " << m_Damage << " damage points! " << endl;
}

class Boss : public Enemy {
public: 
	int m_DamageMultiplier;
	Boss();
	void SpecialAttack() const;

};

Boss::Boss() :
	m_DamageMultiplier(3)
{}


void Boss::SpecialAttack() const {
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points! " << endl;
}

int main() {
	cout << "Creating an enemy " << endl;
	Enemy enemy1;
	enemy1.Attack();
	cout << "Creating a boss " << endl;
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();

	return 0;
}




/*#include<iostream>
using namespace std;
class Enemy {
public:
	Enemy();
	void Attack() const;
protected:
	int m_Damage;


};
Enemy::Enemy() :
	m_Damage(10)

{}

void Enemy::Attack() const {
	cout << m_Damage << endl;


}
class Boss : public Enemy {
public:
	Boss();
	void SpecialAttack() const;
private: 
	int m_DamageMultiplier;
	
};
Boss::Boss() :
	m_DamageMultiplier(3)
{}
void Boss :: SpecialAttack() const {
	cout << (m_DamageMultiplier * m_Damage);
	cout << " damage points " << endl;
}





int main() {

	cout << "Creating an enemy " << endl;
	Enemy enemy1;
	enemy1.Attack();
	cout << "Creating a boss " << endl;
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();

}*/




/*#include<iostream>
using namespace std;
class Enemy {
public:
	Enemy(int damage = 10);
	void virtual Taunt() const;
	void virtual Attack() const;
private:
	int m_Damage;

};


Enemy::Enemy(int damage) :
	m_Damage(damage)
{}
void Enemy::Taunt() const {
	cout << "The enemy says he will fight you " << endl;
}


void Enemy::Attack() const {

	cout << "Atack! Inflicts " << m_Damage << " damage points! " << endl;

}



class Boss : public Enemy {
public:
	Boss(int damage = 30);
	void virtual Taunt() const;
     void virtual Attack() const;


};



Boss::Boss(int damage):
	Enemy(damage)
{}

void Boss::Taunt() const {
	cout << "The boss says he will end your pitiful existance " << endl;
}

void Boss::Attack() const {
	Enemy::Attack();
	cout << " And laughs heartily at you " << endl;
}

int main() {
	cout << "Enemy object " << endl;
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();
	cout << "Boss object " << endl;
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();
	return 0;

}*/



/*#include<iostream>
using namespace std;
class Enemy {
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;
protected:
	int* m_pDamage;
};

Enemy::Enemy(int damage) {
	m_pDamage = new int(damage);
}
Enemy::~Enemy() {
	cout << "In Enemy destructor, deleting m_pDamage" << endl;
	delete m_pDamage;
	m_pDamage = 0;
}
void Enemy::Attack() const {

	cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points " << endl;

}
class Boss : public Enemy {
public:
	Boss(int multiplier = 3);
	virtual ~Boss();
	void virtual Attack() const;
protected:
	int* m_pMultiplier;

};

Boss::Boss(int multiplier) {
	m_pMultiplier = new int(multiplier);

}
Boss::~Boss() {
	cout << "In Boss destructor, deletig m_pMultiplier " << endl;
	delete m_pMultiplier;
	m_pMultiplier = 0;
}

void Boss::Attack() const{
	cout << " a boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier)
		<< " damage points! " << endl;
}


int main() {
	cout << " Calling Attack() on Boss object throgh pointer to Enemy: " << endl;
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();
	cout << "\n\nDeleting pointer to Enemy\n";
	delete pBadGuy;
	pBadGuy = 0;
	return 0;



}*/




/*#include<iostream>
using namespace std;
class Creature {
public:
	Creature(int health = 100);
	virtual void Greet() const = 0;
	virtual void DisplayHealth() const;
protected:
	int m_Health;


};
Creature::Creature(int health):
	m_Health(health)
{}
void Creature::DisplayHealth() const {
	cout << "Health: " << m_Health << endl;
}


class Orc : public Creature {
public:
	Orc(int health = 120);
	virtual void Greet() const;

};
Orc::Orc(int health) :
	Creature(health)
{}
void Orc::Greet() const {
	cout << "The orc grunts hello\n";
}




int main() {

	Creature* pCreature = new Orc();
	pCreature->Greet();
	pCreature->DisplayHealth();
	return 0;


}*/








/*#include<iostream>
using namespace std;
class TestClass {
public:
	int& operator[](int index) {
		return arr[index];
	}

private:
	int arr[5] = { 5,44,4,987,69 };

};


int main() {
	TestClass a;
	cout << a[0] << endl;
	a[0] = 100;
	cout << a[0] << endl;
}*/


//friend

/*#include<iostream>
using namespace std;
class Test;
class Point {

private:
	int x;
	int y;
public:

	Point() {
		x = 0;
		y = 0;
		cout << this << "constructor " << endl;
	}
	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
	}

	void Print() const {
		cout << x << " " << y << endl;
	}
	friend void ChangeX(Point& value, Test &testValue);

};

class Test {
private:
	int Data = 0;

	friend void ChangeX(Point& value, Test& testValue);
	
};

void ChangeX(Point& value, Test& testValue) {
	value.x = -1;
	testValue.Data = -1;
}

int main() {
	Test test;
	Point a(5, 12);
	a.Print();
	ChangeX(a, test);
	a.Print();
}*/





/*#include<iostream>
using namespace std;
class Apple;
class Human;

class Human {
public:
	void TakeApple(Apple& apple);
	void EatApple(Apple& apple);

};

class Apple {
public:
	Apple(int weight, string color){
		this->weight = weight;
		this->color = color;
	}

private:
	int weight;
	string color;

	friend void Human::TakeApple(Apple& apple);
	friend void Human::EatApple(Apple& apple);
};

int main() {
	Apple apple(150, "Red");
	Human human;
	human.TakeApple(apple);
	human.EatApple(apple);

}

void Human::TakeApple(Apple& apple)
{
 cout << "TakeApple " << apple.weight << " " << apple.color << endl;

}

void Human::EatApple(Apple& apple) {
	cout << apple.weight << " was eaten " << endl;
}*/





/*#include<iostream>
using namespace std;
//class Apple;
//class Human;



class Apple {
	friend class  Human;


public:
	Apple(int weight, string color) {
		this->weight = weight;
		this->color = color;
	}

private:
	int weight;
	string color;

};


class Human {
public:
	void TakeApple(Apple& apple);
	void EatApple(Apple& apple);

};

int main() {
	Apple apple(150, "Red");
	Human human;
	human.TakeApple(apple);
	human.EatApple(apple);

}

void Human::TakeApple(Apple& apple)
{	cout << "TakeApple " << apple.weight << " " << apple.color << endl;

}

void Human::EatApple(Apple& apple) {
	cout << apple.weight << " was eaten " << endl;
}*/


/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> aa = { 1,8,4,6,5 };
	for (auto it = aa.begin(); it != aa.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	for (auto it = aa.rbegin(); it != aa.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;


}	*/



/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> aa = { 1,8,4,6,5 };
	auto it = aa.begin();
	cout << *it << endl;
	for (const auto& i : aa) {
		cout << i << " ";
	}
	cout << endl;
	for (auto it = aa.begin(); it != aa.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;



}*/




/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> bb = { 1,8,3,7,9};
	list<int> ::iterator it1 = bb.begin();
	cout << *(++(++it1)) << endl;
	(*it1)++;
	cout << *it1 << endl;
	list<int>::const_iterator it2 = bb.begin();
	cout << *(++(++it2)) << endl;


}*/





/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> aa = { 1,8,4,6,5 };
	cout << *(++(++(aa.begin()))) << endl;
	cout << *next(next(aa.begin())) << endl;

	cout << *(--(--(aa.end()))) << endl;
	cout << *prev(prev(aa.end())) << endl;

}*/


/*#include<iostream>
#include<deque>
using namespace std;
int main() {
	deque<int> aa = { 8,4,6};
	for (int i = 0; i << aa.size(); i++) {
		cout << aa[i] << " ";
	}
	cout << endl;
	aa.push_back(1);
	aa.push_back(5);
	for (int i = 0; i < aa.size(); i++) {
		cout << aa[i] << " ";

	}
	cout << endl;

}*/



/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> aa = { 12,8, 5,14,7,3 };
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	int n = 14;
	auto it = find(aa.begin(), aa.end(), n);
	if (it == aa.end()) {
		cout << "not found: " << n << endl;
	}
	else {
		cout << "found " << *it << endl;
	}
	n = 15;
	it = find(aa.begin(), aa.end(), n);
	if (it == aa.end()) {
		cout << "not found " << n << endl;
	}
	else {
		cout << "found " << *it << endl;
	}





}*/



/*#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main() {
	vector<int> aa = { 12,8,5,14,7,3 };
	for (auto i:aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin() + 1, aa.end() - 1);
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

	list<int> bb = { 1,8,4,6,5 };
	for (auto i : bb) {
		cout << i << " ";
	}
	cout << endl;
	bb.sort();

	for (auto i : bb) {
		cout << i << " ";
	}
	cout << endl;
	
}*/




/*#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
bool lesslastdigit(int i, int k) { // почему в i передаеться 5 а в k 3 если 3 это первый елемент
	cout << (i % 10 < k % 10) << endl;
	return i % 10 < k % 10;
}
bool biggerlastdigit(int i, int k) {
	return i % 10 > k % 10;
}


int main() {
	deque<int> aa = { 12,8,5,14,7,3 };
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end(), lesslastdigit);
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

	sort(aa.begin(), aa.end(), biggerlastdigit);
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;


}*/




/*#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
struct lesslastdigit {
	bool operator() (int i, int k) { // почему в i передаеться 5 а в k 3 если 3 это первый елемент
		cout << (i % 10 < k % 10) << endl;
		return i % 10 < k % 10;
	}
};
struct biggerlastdigit {
	bool operator()(int i, int k) {
		return i % 10 > k % 10;
	}
};


int main() {
	deque<int> aa = { 12,8,5,14,7,3 };
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end(), lesslastdigit());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

	sort(aa.begin(), aa.end(), biggerlastdigit());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;


}*/



/*#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main() {
	deque<int> aa = { 12,8,5,14,7, 3 };
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end());
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end(), [](int i, int k) {return i % 10 < k % 10; });
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	sort(aa.begin(), aa.end(), [](int i, int k) {return i % 10 > k % 10; });
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

}*/


/*#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
bool isOdd(int i) {
	return i % 2 != 0;
}
int main() {
	deque<int> aa = { 12,8,5,14,7,3 };
	cout << "Original sequence " << endl;
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	partition(aa.begin(), aa.end(), isOdd);
	cout << "Partitioned sequence (odds firts): " << endl;
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	deque<int> bb = { 12,8,5,14,7,3 };
	stable_partition(bb.begin(), bb.end(), [](int i) {return i % 2 != 0; });// or just isOdd
	cout << "Stable partitioned sequence: " << endl;
	for (auto i : bb) {
		cout << i << " ";
	}
	cout << endl;



}*/




/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<int> aa = { 1,5,8 };
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	vector<int> bb = { 2,3,7,9 };
	for (auto i : bb) {
		cout << i << " ";
	}
	cout << endl;
	vector<int> cc(7);
	for (auto i : cc) {
		cout << i << " ";
	}
	cout << endl;
	merge(aa.begin(), aa.end(), bb.begin(), bb.end(), cc.begin());
	for (auto i : cc) {
		cout << i << " ";
	}
	cout << endl;



}*/





#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;
class Card {
public:
	enum rank {ACE = 1, TWO, THEE, FOUR, FIVE,SIX,SEVEN,EIGHT,NINE,TEN, JACK, QUEEN,KING};
	enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
	friend ostream& operator<<(ostream&os, const Card& aCard);
	Card(rank r = ACE, suit s = SPADES, bool ifu = true);
	int GetValue() const;
	void Flip();
private:
	rank m_Rank;
	suit m_Suit;
	bool m_IsFaceUp;


};

Card::Card(rank r, suit s, bool ifu):
	m_Rank(r), m_Suit(s),m_IsFaceUp(ifu)
{}

int Card::GetValue() const {
	int value = 0;
	if (m_IsFaceUp) {
		value = m_Rank;
		if (value > 10) {
			value = 10;
		}
	}
	return value;


}

void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

class Hand {
public:
	Hand();
	virtual ~Hand();
	void Add(Card* pCard);
	void Clear();
	int GetTotal() const;
protected:
	vector<Card*> m_Cards;

};

Hand::Hand() {
	m_Cards.reserve(7);
}
Hand::~Hand() {
	Clear();
}

void Hand::Add(Card* pCard) {
	m_Cards.push_back(pCard);
}

void Hand::Clear() {
	vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
		delete* iter;
		*iter = 0;
	}
	m_Cards.clear();
}
int Hand::GetTotal() const {

	if (m_Cards.empty()) {
		return 0;
	}
	if (m_Cards[0]->GetValue() == 0) {
		return 0;
	}
	int total = 0;
	vector<Card*> ::const_iterator iter;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
		total += (*iter)->GetValue();
	}

	bool containAce = false;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
		if ((*iter)->GetValue() == Card::ACE) {
			containAce = true;
		}
	}
	if (containAce && total <= 11) {
		total += 10;
	}
	return total;

}

