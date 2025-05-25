#include <vector>
#include <stdlib.h>
using namespace std;
class IVectorSpace{
	public:
	virtual vector<float> multiplication(vector<float> v1, vector<float> v2) = 0; //Esse método não tem implementação na classe atual
	virtual vector<float> addition(vector<float> v1, vector<float> v2) = 0; // Quem herdar essa classe será obrigado a implementar esse método
};