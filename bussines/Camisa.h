#ifndef CAMISA_H
#define CAMISA_H

#include "Produto.h"
#include "Malha.h"
#include "Gola.h"

class SilkScreen;

class Camisa : public Produto {

  public:
    enum PinturaTipo {NULO=0, TRANSFER=1, SILK_SCREEN, SILK_AND_TRANSFER };
    Camisa(const Camisa& c);
    
    Camisa(const Malha& malha = Malha(), const Gola& gola = Gola(), const PinturaTipo& pintura = NULO
      , const bool& viez, const QStringList& arteFinal, const SilkScreen& silk = SilkScreen(), const bool regata );
    
  private:
    Malha m_malha;
    Gola m_gola;
    PinturaTipo m_pintura;
    bool m_viez;
    QStringList m_arteFinalPaths;
    SilkScreen *m_silkScreen;
    bool m_regata;
    bool m_silk;
    
      
  public:
    void setMalha(const Malha& malha);
    void setGola(const Gola& gola);
    void setTipoPintura(const PinturaTipo& pintura);
    void setViez(const bool& viez);
    void setArteFinalArquivos(const QStringList& paths);
    void setSilkScreen(const SilkScreen& silk);
    void setRegata(const bool& regata);
    void removeSilkScreen();
    
    Malha getMalha() const;
    Gola getGola() const;
    PinturaTipo getTipoPintura() const;
    QStringList getArteFinal() const;
    bool temViez() const;
    bool regata() const;
    bool temSilkScreen() const;
    SilkScreen getSilkScreen() const;
  
  
};
#endif