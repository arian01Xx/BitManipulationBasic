#include "solution.hpp"
#include "solutionOne.hpp"
#include "SolutionTwo.hpp"
#include "SolutionThree.hpp"

using namespace std;

class TrieNode{
public:
	TrieNode* child[26]; //26 es la cantidad del alfabeto ingles
	bool isWord;  //marca si es el final de una palabra
	TrieNode(){
		isWord=false;
		for(auto& a: child){
			a=nullptr;
		}
	}

};

class Trie{
	TrieNode* root;
public:
	Trie(){
		root=new TrieNode(); //inicializa root como un nuevo nodo
	}
	void insert(string word){
		TrieNode* p=root;
		for(auto& a: word){
			int i=a-'a';  //calcula el indice del caracter en el array de hijos
			if(!p->child[i]){
				p->child[i]=new TrieNode();
				//si el hijo no existe se crea un nuevo nodo
			}
			p=p->child[i];
		}
		p->isWord=true; //marca el final de una palabra
	}
	bool search(string word, bool prefix=false){
	//para buscar una palabra completa
		TrieNode* p=root;
		for(auto& a: word){
			int i=a-'a';
			if(!p->child[i]){
				return false;
			}
			p=p->child[i];
		}
		if(prefix==false){
			return p->isWord;
		}
		return true;
	}
	bool startsWith(string prefix){
		return search(prefix, true);
	}
};

int main(){

	Solution solution;
	int a=2; int b=6; int c=5;
	int output=solution.minFlips(a,b,c);
	cout<<"ANSWER ONE= "<<output<<endl;

	SolutionTwo solution2;
	vector<int> nums={4,1,2,1,2};
	int outputTwo=solution2.singleNumber(nums);
	cout<<"ANSWER TWO= "<<outputTwo<<endl;

	SolutionThree solution3;
	int n=15;
	vector<int> number=solution3.countBits(n);
	cout<<"ANSWER THREE= "<<endl;
	for(int i=0; i<number.size(); i++){
		cout<<number[i];
	}

	return 0;
}

/*
AQUI ESTÁ EL SECRETO PARA CREAR MI LENGUAJE DE PROGRAMACIÓN
vector<string> parseInput(const string& input) {
    vector<string> result;
    string::size_type start = input.find('[');
    string::size_type end = input.find(']');
    if (start != string::npos && end != string::npos && end > start) {
        string substr = input.substr(start + 1, end - start - 1);
        result = split(substr, ',');
        for (auto& str : result) {
            str.erase(remove(str.begin(), str.end(), '"'), str.end());
            str.erase(remove(str.begin(), str.end(), ' '), str.end());
        }
    }
    return result;
}
*/
