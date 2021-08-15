#include "Cobertura.hpp"

double Cobertura::comissao(){
    return AreaDoImovel * ValorMetroQuadrado * porcentagem;
}

void Cobertura::print() override {
    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
    std::cout << "Taxa de Comiss�o: " << std::fixed << std::setprecision(0) << porcentagem * 100 << "%" << "\n"
              << "Valor Comiss�o: R$ " << std::fixed << std::setprecision(2) << comissao() << "\n"
              << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << ValorDoImovel() + comissao() << std::endl;
}