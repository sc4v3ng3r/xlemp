#ifndef PRODUTO_H
#define PRODUTO_H

#include <qt/QtCore/QString>
#include <qt/QtCore/qchar.h>

class Produto {

public:
  enum Tamanho { NULO=0,P=1, M, G,EXG,GG,EXGG, Pb,Mb,Gb, IDADE_3, 
    IDADE_4, IDADE_6, IDADE_8, IDADE_10, IDADE_12, IDADE_14, PERSONALIZADO };
   
private:
  float m_largura, m_comprimento, m_valorUnitario;
  QString m_nome;
  QString m_descricao;
  Tamanho m_tamanho;
  
public:
   
  Produto();
  Produto(const Produto &p);
  ~Produto();
  
  virtual void setTamanho(const Tamanho& t);
  virtual void setLargura (const float &l = 0);
  virtual void setComprimento(const float &c=0);
  void setNome (const QString& s= QString());
  void setDescricao(const QString &s = QString());

  void setValorUnitario(const float &v = 0);
  
  float largura() const;
  float comprimento() const;
  float valorUnitario() const;
  Tamanho tamanho() const;
  QString nome() const;
  QString descricao() const;
  
};
#endif