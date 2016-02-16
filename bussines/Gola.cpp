#include "Gola.h"

Gola::Gola(const Gola::golaTipo tipo, const QColor& cor) :
  m_tipo(tipo),
  m_cor(cor)
{}

Gola::Gola(const Gola& g) :
  m_tipo(g.m_tipo),
  m_cor(g.m_cor)
{}

Gola Gola::operator=(const Gola& g)
{
  if (this == &g)
    return *this;

//  Gola *copy = new Gola(g.m_tipo, g.m_cor); 
  return Gola(g);
}

QColor Gola::getCor() const { return m_cor;}

Gola::golaTipo Gola::getTipo() const { return m_tipo;}

void Gola::setCor(const QColor& cor)
{
  m_cor = cor;
}

void Gola::setTipo(const Gola::golaTipo tipo) { m_tipo = tipo; }

Gola::~Gola()
{

}
