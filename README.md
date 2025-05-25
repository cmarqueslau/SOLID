# SOLID
Aplicação dos seguintes princípios de projeto:
- S — Single Responsiblity Principle (Princípio da responsabilidade única)
- O — Open-Closed Principle (Princípio Aberto-Fechado)
- I — Interface Segregation Principle (Princípio da Segregação da Interface)
- D — Dependency Inversion Principle (Princípio da inversão da dependência)

## Objetivo do código
O código tem como objetivo criar uma interface obrigatória para a criação de classes que são **espaços vetoriais**.
De acordo com a Álgebra Linear, todo espaço vetorial é um conjunto de vetores munidos de duas operações: **multiplicação** e **adição**.
No entanto, essas operações não precisam necessariamente serem as convencionais para soma e multiplicação de vetores.
É possível que um espaço vetorial ressignifique essas operações.

### Single Responsiblity Principle
O código cumpre com esse pincípio por possuir classes que só executam métodos relacionados com a sua responsábilidade.
No código abaixo, por exemplo, os métodos da classe R^n são obrigatórios e específico para um espaço vetorial de R^n.
```
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
```
### Interface Segregation Principle e Dependency Inversion Principle
O código satisfaz esses princípios ao criar uma interface (ao invés de uma classe) que só possui métodos que um espaço vetorial precisa implementar obrigatoriamente.
Em outras palavras, espaços vetoriais não precisam depender de uma classe, mas sim de uma abstração (interface).
```
class IVectorSpace{
	public:
	virtual vector<float> multiplication(vector<float> v1, vector<float> v2) = 0; //Esse método não tem implementação na classe atual
	virtual vector<float> addition(vector<float> v1, vector<float> v2) = 0; // Quem herdar essa classe será obrigado a implementar esse método
};
```
### Open-Closed Principle
A interface para o espaço vetorial também satisfaz esse princípio por permitir que as classes adicionem novos comportamentos para os métodos com o formato obrigatório.
