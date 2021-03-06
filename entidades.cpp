//
// Created by andre on 9/13/17.
//

#include "entidades.h"

USUARIO* USUARIO::instance = nullptr;

USUARIO * USUARIO::getInstance()
{
    if (instance == nullptr)
    {
        instance = new USUARIO();
    }

    return instance;
}

USUARIO::USUARIO() {
    Nome = new nome();
    Apelido = new apelido();
    Telefone = new telefone();
    Senha = new senha();
    estante = {};


}
void USUARIO::set_USUARIO(std::string nome_setado, std::string apelido_setado, std::string telefone_setado,
                          std::string senha_setado) {
    Nome->set_nome(nome_setado);
    Apelido->set_apelido(apelido_setado);
    Telefone->set_telefone(telefone_setado);
    Senha->set_senha(senha_setado);
}

void USUARIO::get_USUARIO(std::string *nome_setado, std::string *apelido_setado, std::string *telefone_setado,
                          std::string *senha_setado) {
    *nome_setado = Nome->get_nome();
    *apelido_setado = Apelido->get_apelido();
    *telefone_setado = Telefone->get_telefone();
    *senha_setado = Senha->get_senha();
}

void USUARIO::deleta_USUARIO() {
    delete Nome;
    delete Apelido;
    delete Telefone;
    delete Senha;
}

USUARIO *USUARIO::createAux() {
    if(instance == nullptr) return nullptr;
    else return new USUARIO;
}


LIVRO::LIVRO() {
        Titulo = new titulo();
        Nome = new nome();
        Data = new data();
        Codigo = new codigo();
        Genero = new genero();

}
void LIVRO::set_LIVRO(std::string titulo_setado, std::string nome_setado, std::string data_setado, std::string codigo_setado,
                      std::string genero_setado) {
    Titulo->set_titulo(titulo_setado);
    Nome->set_nome(nome_setado);
    Data->set_data(data_setado);
    Codigo->set_codigo(codigo_setado);
    Genero->set_genero(genero_setado);
}

void LIVRO::get_LIVRO(std::string *titulo_setado, std::string *nome_setado, std::string *data_setado, std::string *codigo_setado,
                      std::string *genero_setado) {
    *titulo_setado = Titulo->get_titulo();
    *nome_setado = Nome->get_nome();
    *data_setado = Data->get_data();
    *codigo_setado = Codigo->get_codigo();
    *genero_setado = Genero->get_genero();
}

void LIVRO::deleta_LIVRO() {
    delete Titulo;
    delete Data;
    delete Codigo;
    delete Genero;
}

RESENHA::RESENHA() {
        Titulo = new titulo();
        Codigo = new codigo();
        Texto = new texto();

}
void RESENHA::set_RESENHA(std::string Titulo_setado, std::string Codigo_setado,
                          std::string Texto_setado) {

    Titulo->set_titulo(Titulo_setado);
    Codigo->set_codigo(Codigo_setado);
    Texto->set_texto(Texto_setado);
}

void RESENHA::get_RESENHA(std::string *Titulo_setado, std::string *Codigo_setado,
                          std::string *Texto_setado) {
    *Titulo_setado = Titulo->get_titulo();
    *Codigo_setado = Codigo->get_codigo();
    *Texto_setado = Texto->get_texto();
}

void RESENHA::deleta_RESENHA() {
    delete Titulo;
    delete Codigo;
    delete Texto;
}
