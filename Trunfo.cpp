#include <stdio.h>
#include <string.h>
#include <iostream>

class trunfo
{
private:
    char nome[30],cidade[30];
    int turistico;
    float area,PIB, populacao;
    float SuperPoderCartaA, SuperPoderCartaB;
public:
    void setNome(const std::string& nome){
        strcpy(this->nome, nome.c_str());
        this->nome[29] = '\0';
    }
    char* getNome(){
        return this->nome;
    }
    void setCidade(const std::string& cidade){
        strcpy(this->cidade, cidade.c_str());
    }
    char* getCidade(){
        return this->cidade;
    }
    void setTurismo(int t){
        this->turistico = t;
    }
    int getTurismo(){
        return this->turistico;
    }
    void setArea(float A){
        this->area = A;
    }
    float getArea(){
        return this->area;
    }
    void setPib( float P){
        this->PIB = P;
    }
    float getPib(){
        return this->PIB;
    }
    void setPopulacao(float Po){
        this->populacao = Po;
    }
    float getPopulacao(){
        return this->populacao;
    }
    float getSuperCartaA(){
        return this->SuperPoderCartaA;
    }
    float getSuperCartaB(){
        this->SuperPoderCartaB = getArea() + getPopulacao() + getPib() + getTurismo();
        return SuperPoderCartaB;
    }
};
void mostrar(trunfo trunfo);

int main(){
    trunfo trunfo;

    //declarando as variaveis 
    std::string nome;
    std::string cidade;
    int turismo;
    float area, pib, populacao;

    //fazendo a entrada e saida dos dados
    std::cout << "Digite seu nome\n";
    std::getline(std::cin, nome);
    std::cout << "Digite o nome da cidade\n";
    std::getline(std::cin, cidade);
    std::cout << "Digite quantos turismo\n";
    std::cin >> turismo;
    std::cout << "Digite a area da cidade\n";
    std::cin >> area;
    std::cout << "Digite o PIB da cidade\n";
    std::cin >> pib;
    std::cout << "Digite a população da cidade\n";
    std::cin >> populacao;
    std::cout << "atributos da primeira carta adicionada\n";


    //Passando os dados como argumentos
    trunfo.setNome(nome);
    trunfo.setCidade(cidade);
    trunfo.setTurismo(turismo);
    trunfo.setArea(area);
    trunfo.setPib(pib);
    trunfo.setPopulacao(populacao);
    mostrar(trunfo);
    return 0;
}
void mostrar(trunfo trunfo){
    std::cout <<"nome: " << trunfo.getNome() << std::endl;
    std::cout <<"cidade: " << trunfo.getCidade() << std::endl;
    std::cout <<"turismo: " << trunfo.getTurismo() << std::endl;
    std::cout <<"Area: " << trunfo.getArea() << std::endl;
    std::cout <<"Pib: " << trunfo.getPib() << std::endl;
    std::cout <<"Populacao: " << trunfo.getPopulacao() << std::endl;
    std::cout <<"Super Poder Carta A: " << trunfo.getSuperCartaA() << std::endl;
    std::cout <<"Super Poder Carta B: " << trunfo.getSuperCartaB() << std::endl;
}
