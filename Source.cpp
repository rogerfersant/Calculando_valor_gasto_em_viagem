//Autor: Rogério Ferreira dos Santos
//Data: 08/12/2024
// pratica de programação
//Calculador de valor gasto em uma viagem de carro

#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	//Adicionando a linguagem português ao código
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declarando as variáveis
	float kilometro, litros, combustivel, resposta;
	int decisao;
	char dec;

	//Menu
	std::cout << "\tEscolha uma das opções abaixo \n";
	std::cout << "------------------------------------ \n";
	std::cout << "1 - Calcular quantidade de litros gasto de ida e volta \n2 - Calcular quantidade de litros gastos só ida/volta "<<std::endl;
	std::cin >> decisao;
	std::cout << "------------------------------------ \n";

	//apresentar mensagem de erro se o que foi escolhido pelo usuário for diferente do menu
	if (decisao != 1 && decisao != 2)
	{
		std::cout << "Erro: Nenhuma das opções acima foi escolhida! \n";
		std::cout << "Escolha usando os números inteiros 1 ou 2!" << std::endl;
			return 1;
	}

	//Se o usuário escolher o primeiro
	if (decisao == 1)
	{
		//Recebendo dados do usuário
		std::cout << "Informe o total do quilometro gasto: \n";
		std::cin >> kilometro;

		std::cout << "Informe a quantidade de litros que seu veiculo faz: \n";
		std::cin >> litros;

		std::cout << "Informe o valor unitario do combustivél: \n";
		std::cin >> combustivel;

		//Realizando o calculo
		resposta = ((kilometro / litros) * combustivel) * 2;

		//Imprimindo o resultado na tela
		std::printf("Quantidade gasto na viagem R$ %.2f \n", resposta);

		//perguntar se o usuário deseja vê a formula utilizada
		std::cout << "Deseja vê a formula realizada pela conta? \n";
		std::cin >> dec;
		system("cls");

		//Se o usuário quiser vê como o calculo foi utilizado
		if (dec == 'S' || dec == 's')
		{
			//Imprimindo a formula na tela
			std::cout << "Formula: \n\n((quilometro / litros) x combustivel) x 2 \n";
			std::cout << "((" << kilometro << " / " << litros << ") x " << combustivel <<") x 2" << "\n";
			std::cout << "((" << kilometro  /  litros << ") x " << combustivel <<") x 2" << "\n";
			std::cout << "(" << kilometro / litros * combustivel << ") x 2 \n";
			std::cout  << (kilometro / litros * combustivel) <<" x 2 \n";
			std::printf("%.2f \n", resposta);

			system("PAUSE");
			return 1;
		}
		//se não
		else {
			std::cout << "Fim do programa!!!" << std::endl;

			system("PAUSE");
			return 1;
		}
	}

	//Se o usuário escolher a segunda opção
	else if (decisao == 2)
	{
		//Recebendo dados do usuário
		std::cout << "Informe o total do quilometro gasto: \n";
		std::cin >> kilometro;

		std::cout << "Informe a quantidade de litros que seu veiculo faz: \n";
		std::cin >> litros;

		std::cout << "Informe o valor unitario do combustivél: \n";
		std::cin >> combustivel;

		//Realizando o calculo
		resposta = (kilometro / litros) * combustivel;

		//Imprimindo o valor de quanto o usuário gastou na viagem
		std::printf("Quantidade gasto na viagem R$ %.2f \n", resposta);

		//Perguntar se o usuário deseja vê a formula utilizada
		std::cout << "Deseja vê a formula realizada pela conta? \n";
		std::cin >> dec;
		system("cls");

		//se o usuário decidir utilizar a formula utilizada
		if (dec == 'S' || dec == 's')
		{
			std::cout << "Formula: \n\n(quilometro / litros) x combustivel \n";
			std::cout << "(" << kilometro << " / " << litros << ") x " << combustivel << "\n";
			std::cout << (kilometro / litros) <<" x " << combustivel << "\n";
			std::printf("%.2f \n", resposta);

			system("PAUSE");
			return 1;
		}
		//se não deseja vê
		else {
			std::cout << "Fim do programa!!!" << std::endl;

			system("PAUSE");
			return 1;
		}


	}

	system("PAUSE");
	return 0;
		
}