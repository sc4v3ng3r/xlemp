#ifndef TRANSFER_H
#define TRANSFER_H

#include "./Produto.h"

class Transfer : public Produto
{
  
  public:
    enum PlotterCode {NULO=0, EP9880=1, XEROX_RJ700, OUTRO};
    Transfer();
    Transfer(const Transfer& t);
    ~Transfer();
    
    void setPlotter(const PlotterCode code);
    void setTransferArquivo(const QString& path);
    void setArteFinalArquivo(const QString& path);
    void setDimesoes(const float& largura, const float& comprimento);
    
    PlotterCode getPlotter() const;
    QString getTransferPath() const;
    QString getArteFinalPath() const;
    void setTamanho(const Produto::Tamanho& t);
    
  private:
    PlotterCode m_plotterCodigo;
    QString m_transferPath;
    QString m_arteFinalArquivo;   
};

#endif