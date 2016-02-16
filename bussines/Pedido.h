#ifndef PEDIDO_H
#define PEDIDO_H

#include <QtCore/QDate>
#include "Produto.h"

// WARNING AINDA TEM QUE IMPLEMENTAR AS QUANTIDADES DE CADA RESPECTIVO PRODUTO DA LISTA!
// WARNING implementar O METODO QUE RECUPERA UM DETERMINADO ITEM/PRODUTO DO PEDIDO!
class Pedido {
  
  public:
    enum statusPedido {VAZIO=0, PRODUCAO=1, ENTREGUE};
    enum statusPagamento {INDEFINIDO=0, PAGO, NAOPAGO};
     
    void setDataRealizacao(const QDate &data = QDate() );
    void setDataEntrega(const QDate &data =  QDate() );
    void setClienteNome(const QString &cliente =QString() );
    void setPagamentoStatus(statusPagamento p);
    void setPedidoStatus(statusPedido s);
    void setValorPedido(double valor);
    void setArquivosArteFinal(const QStringList& paths = QStringList()); 
    void addProduto(const Produto &p = Produto());
    void addProdutos(const QList<Produto>& p = QList<Produto>());
    
    QDate getDataRealizacao() const;
    QDate getDataEntrega() const;
    QList<Produto> getProdutos() const;
    QString getClienteNome() const;
    QStringList getArquivosArteFinal() const;
    statusPagamento getStatusPagamento() const;
    statusPedido getStatusPedido() const;
    double getValorPedido() const;
     /*
    Pedido(const QDate& r=QDate(), const QDate& e = QDate(), const QString& cliente = QString(),
	  const QStringList& fPath = QStringList(), const QList<Produto>& pList = QList<Produto>(),
	  const double& valor=0);
    */
    Pedido(const QDate& r=QDate(), const QDate& e = QDate(), const QString& cliente = QString(),
	  const QStringList& fPath = QStringList());
    
    //Pedido();
    
    Pedido(const Pedido &p);
    ~Pedido();
    
  private:
    QDate m_dataRealizacao, m_dataEntrega;
    QStringList m_filesPath;
    double m_valorTotal;
    QList<Produto> m_produtoLista;
    QString m_clienteNome;
    unsigned int *m_quantidades;
    statusPagamento m_statusPagamento;
    statusPedido m_statusPedido;
    
};

#endif