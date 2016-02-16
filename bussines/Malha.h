#ifndef MALHA_H
#define MALHA_H

#include <QtCore/QString>
#include <QtGui/QColor>

class Malha {
  
  public:
    enum malhaTipo {PP=1,PV=2, CACHARREL=3, ALGODAO, TACTEL, PERSONALIZADO};
  
  private:
    QString m_tipoNome;
    QColor m_cor;
    malhaTipo m_tipo;
    float m_valorDoKg;
    float m_rendimento_kg;
    float m_metros_kg;
    
  public:
    Malha();
    Malha(const QString& nome, const QColor& cor, const float& valorKg, 
	  const float& rendimentoKg, const float& metrosKg);
    Malha(const Malha& m);
    
    void setNome(const QString& nome);
    void setCor(const QColor& cor);
    void setRendimentoPorKg(const float r);
    void setValorPorKg(const float v);
    void setMetrosPorKg(const float v);
    void setTipo(malhaTipo tipo);
    
    QString getTipoNome() const;
    QColor getCor() const;
    float getValorPorKg() const;
    float getRendimentoPorKg() const;
    float getMetrosPorKg() const;
    malhaTipo getTipo() const;
};
#endif