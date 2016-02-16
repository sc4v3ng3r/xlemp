#include "Cliente.h"

Cliente::Cliente(const Cliente& cliente)
{
  this->setCnpj(cliente.getCnpj());
  this->setCpf(cliente.getCpf());
  this->setNome(cliente.getNome());
  this->addPedidos( cliente.getPedidos() );
}

Cliente::Cliente(const QString& nome, const QString& cpf, const QString& cnpj, const QList< Pedido >& lista) :
  m_nome(nome),
  m_cpf(cpf),
  m_cnpj(cnpj),
  m_pedidos(lista)
{ }

void Cliente::setCnpj(const QString& cnpj) { m_cnpj = cnpj; }

void Cliente::setCpf(const QString& cpf) { m_cpf = cpf; }

void Cliente::setNome(const QString& nome) { m_nome = nome; }

void Cliente::addPedido(const Pedido& p) { m_pedidos.append(p);}

void Cliente::addPedidos(const QList<Pedido>& lista) { m_pedidos.append(lista); }

QString Cliente::getCnpj() const { return m_cnpj;}

QString Cliente::getCpf() const {return m_cpf;}

QString Cliente::getNome() const { return m_nome; }

Pedido Cliente::getPedido(const int& index) const
{
  if ( (index >=0) && (index < m_pedidos.size()) )
    return Pedido( m_pedidos.at(index) );
  
  return Pedido();
}

QList< Pedido > Cliente::getPedidos() const { return m_pedidos; }


