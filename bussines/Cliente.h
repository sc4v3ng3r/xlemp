#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pedido.h"

class Cliente {
  
  private:
    QString m_nome, m_cpf, m_cnpj;
    QList<Pedido> m_pedidos;
    
  public:
     Cliente(const QString& nome = QString(), const QString& cpf = QString(), 
       const QString& cnpj = QString(), const QList<Pedido> &lista = QList<Pedido>());
     
     Cliente(const Cliente& cliente);
     
     void setNome(const QString& nome);
     void setCpf(const QString& cpf);
     void setCnpj(const QString& cnpj);
     void addPedido(const Pedido& p);
     void addPedidos(const QList<Pedido>& lista);
     
     QString getNome() const;
     QString getCpf() const;
     QString getCnpj() const;
     QList<Pedido> getPedidos() const;
     Pedido getPedido(const int& index) const;     
};
#endif