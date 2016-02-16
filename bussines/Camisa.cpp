#include "Camisa.h"
#include "SilkScreen.h"

Camisa::Camisa(const Malha& malha, const Gola& gola, const Camisa::PinturaTipo& pintura, 
	       const bool& viez, const QStringList& arteFinal, const SilkScreen& silk, const bool regata) : Produto(Produto())
	       , m_malha(malha)
	       , m_gola(gola)
	       , m_pintura(pintura)
	       , m_viez(viez)
	       , m_arteFinalPaths(arteFinal)
	       , m_regata(regata)
{

  if (silk.getCores() > 0)
    m_silk = true;
  else m_silk = false;
}

Camisa::Camisa(const Camisa& c) : Produto(c)
  , m_malha(c.m_malha)
  , m_gola(c.m_gola)
  , m_pintura(c.m_pintura)
  , m_viez(c.m_viez)
  , m_arteFinalPaths(c.m_arteFinalPaths)
  , m_regata(c.m_regata)
  , m_silk(c.m_silk)
{
  if (m_silk){
    m_silkScreen = new SilkScreen(c.m_silkScreen);
  } else m_silkScreen = 0; 
}
