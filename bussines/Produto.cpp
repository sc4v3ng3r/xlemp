#include "Produto.h"
#include <qt/QtCore/QString>

Produto::Produto() :
  m_largura(0),
  m_comprimento(0),
  m_valorUnitario(0),
  m_nome(QString()),
  m_descricao(QString()),
  m_tamanho(NULO)
{}

Produto::Produto(const Produto& p) :
  m_largura(p.m_largura),
  m_comprimento(p.m_comprimento),
  m_valorUnitario(p.m_valorUnitario),
  m_nome(p.m_nome),
  m_descricao(p.m_descricao),
  m_tamanho(p.m_tamanho)
{}

float Produto::comprimento() const { return this->m_comprimento; }

float Produto::largura() const { return this->m_largura; }

QString Produto::nome() const { return this->m_nome;}

QString Produto::descricao() const{ return this-> m_descricao; }

void Produto::setComprimento(const float& c)
{
  if (c < 0)
    return;
  
  this->m_comprimento = c;
}

void Produto::setLargura(const float& l)
{
  if (l < 0)
    return;
  
  this->m_largura = l;
}

void Produto::setDescricao(const QString& s)
{
  this->m_descricao = s;
}

void Produto::setNome(const QString& s) { this->m_nome = s; }

void Produto::setTamanho(const Tamanho& t) { this->m_tamanho = t; }

void Produto::setValorUnitario(const float& v)
{
  if (v < 0)
    return;
  
  this->m_valorUnitario = v;
}

Produto::Tamanho Produto::tamanho() const { return this->m_tamanho;}

float Produto::valorUnitario() const { return m_valorUnitario; }

Produto::~Produto() { }