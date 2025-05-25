#include <stdlib.h>
#include "vectorSpace.hpp"

class Rn : public IVectorSpace{
	public:
	vector<float> multiplication(vector<float> v1, vector<float> v2) override{
		vector<float> multiplication(v1.size());
		for (int i = 0; i < v1.size(); i++)
		{
			multiplication[i] = v1[i]*v2[i];
		}
		
	}

	vector<float> addition(vector<float> v1, vector<float> v2) override{
		vector<float> addition(v1.size());
		for (int i = 0; i < v1.size(); i++)
		{
			addition[i] = v1[i]+v2[i];
		}
		
	}
};