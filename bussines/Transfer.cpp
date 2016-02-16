#include "Transfer.h"

Transfer::Transfer() : Produto()
  , m_plotterCodigo(NULO)
  , m_transferPath(QString())
  , m_arteFinalArquivo(QString())
{}

Transfer::Transfer(const Transfer& t) : Produto(t)
  , m_plotterCodigo(t.m_plotterCodigo)
  , m_transferPath(t.m_transferPath)
  , m_arteFinalArquivo(t.m_arteFinalArquivo)
{}

Transfer::~Transfer() {}

QString Transfer::getArteFinalPath() const { return m_arteFinalArquivo; }

Transfer::PlotterCode Transfer::getPlotter() const { return m_plotterCodigo; }

QString Transfer::getTransferPath() const { return m_transferPath; }

void Transfer::setArteFinalArquivo(const QString& path) { m_arteFinalArquivo = path;}

void Transfer::setPlotter(const Transfer::PlotterCode code) { m_plotterCodigo = code;}

void Transfer::setTransferArquivo(const QString& path) { m_transferPath = path; }

void Transfer::setDimesoes(const float& largura, const float& comprimento)
{
  this->setLargura(largura);
  this->setComprimento(comprimento);
}


void Transfer::setTamanho(const Produto::Tamanho& t)
{
  /*Se o tipo for PERSONAL, devemos configurar as dimensoes manualmente!*/
  this->setTamanho(t);
  
  switch(t){
    case IDADE_3:
      setLargura(36);
      setComprimento(46);
      break;
      
    case IDADE_4:
      setLargura(36);
      setComprimento(46);
      break;
      
    case IDADE_6:
      break;
      
    case IDADE_8:
      break;
      
    case IDADE_10:
      break;
      
    case IDADE_12:
      break;
      
    case IDADE_14:
      break;
      
    case P:
      setLargura(49);
      setComprimento(66);
      break;
      
    case M:
      setLargura(54);
      break;
      
    case G:
      break;
    case GG:
      break;
    case EXG:
      break;
    case EXGG:
      break;
    
    default:
      break;
      
  }   
   
}