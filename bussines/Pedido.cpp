#include "Pedido.h"
// WARNING AINDA TEM QUE IMPLEMENTAR AS QUANTIDADES DE CADA RESPECTIVO PRODUTO DA LISTA!
// WARNING implementar O METODO QUE RECUPERA UM DETERMINADO ITEM/PRODUTO DO PEDIDO!
Pedido::Pedido(const QDate& r, const QDate& e, const QString& cliente, const QStringList& fPath) :
  m_dataRealizacao(r),
  m_dataEntrega(e),
  m_filesPath(fPath),
  m_valorTotal(0),
  m_clienteNome(cliente),
  m_quantidades(0)
  
{}
/*
Pedido::Pedido(const QDate& r, const QDate& e, const QString& cliente, const QStringList& fPath, 
	       const QList< Produto >& pList, const double& valor) :
	       m_dataRealizacao(r),
	       m_dataEntrega(e),
	       m_filesPath(fPath),
	       m_valorTotal(valor),
	        m_produtoLista(pList),
	       m_clienteNome(cliente),
	       m_quantidades(0)
{}

Pedido::Pedido() :
  m_dataRealizacao(QDate()),
  m_dataEntrega(QDate()),
  m_filesPath(QStringList()),
  m_valorTotal(0),
  m_produtoLista(QList<Produto>()),
  m_clienteNome(QString()),
  m_quantidades(0),
  m_statusPagamento(INDEFINIDO),
  m_statusPedido(VAZIO)
{}*/

Pedido::Pedido(const Pedido& p)
{
  /*WARNING FALTA FAZER A COPIA DA QUANTIDADE!*/
  this->addProdutos(p.getProdutos());
  this->setArquivosArteFinal(p.getArquivosArteFinal());
  this->setClienteNome(p.getClienteNome());
  this->setDataEntrega(p.getDataEntrega());
  this->setDataRealizacao(p.getDataRealizacao());
  this->setPagamentoStatus(p.getStatusPagamento());
  this->setPedidoStatus(p.getStatusPedido());
  this->setValorPedido(p.getValorPedido());
}


QStringList Pedido::getArquivosArteFinal() const { return m_filesPath; }

QString Pedido::getClienteNome() const { return m_clienteNome; }

QDate Pedido::getDataEntrega() const { return m_dataEntrega; }

QDate Pedido::getDataRealizacao() const { return m_dataRealizacao; }

double Pedido::getValorPedido() const { return m_valorTotal; }

Pedido::statusPagamento Pedido::getStatusPagamento() const { return m_statusPagamento;}

Pedido::statusPedido Pedido::getStatusPedido() const { return m_statusPedido;}

QList< Produto > Pedido::getProdutos() const { return m_produtoLista; }

void Pedido::addProduto(const Produto& p) { m_produtoLista.append(p); }

void Pedido::addProdutos(const QList< Produto >& p) { m_produtoLista.append(p); }

void Pedido::setArquivosArteFinal(const QStringList& paths) { m_filesPath.append(paths);}

void Pedido::setClienteNome(const QString& cliente) { m_clienteNome = cliente; }

void Pedido::setDataEntrega(const QDate& data) { m_dataEntrega = data;}

void Pedido::setDataRealizacao(const QDate& data) { m_dataRealizacao = data;}

void Pedido::setPagamentoStatus(Pedido::statusPagamento p) { m_statusPagamento = p;}

void Pedido::setPedidoStatus(Pedido::statusPedido s) { m_statusPedido = s;}

void Pedido::setValorPedido(double valor) { m_valorTotal = valor;}


Pedido::~Pedido()
{
  if (m_quantidades)
    delete m_quantidades;
  
  m_quantidades = 0;
}
