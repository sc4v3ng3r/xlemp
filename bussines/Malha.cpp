#include "Malha.h"

Malha::Malha()
{
  
}

Malha::Malha(const Malha& m)
{
  this->setCor(m.getCor());
  this->setMetrosPorKg(m.getMetrosPorKg());
  this->setNome(m.getTipoNome());
  this->setRendimentoPorKg(m.getRendimentoPorKg());
  this->setTipo(m.getTipo());
  this->setValorPorKg(m.getValorPorKg());
}

Malha::Malha(const QString& nome, const QColor& cor, const float& valorKg, 
	     const float& rendimentoKg, const float& metrosKg) :
	     m_tipoNome(nome),
	     m_cor(cor),
	     m_valorDoKg(valorKg),
	     m_rendimento_kg(rendimentoKg),
	     m_metros_kg(metrosKg)
{}

QColor Malha::getCor() const { return m_cor; }

float Malha::getMetrosPorKg() const { return m_metros_kg;}

Malha::malhaTipo Malha::getTipo() const { return m_tipo;}

float Malha::getValorPorKg() const { return m_valorDoKg; }

float Malha::getRendimentoPorKg() const { return m_rendimento_kg;}

QString Malha::getTipoNome() const { return m_tipoNome; }


void Malha::setCor(const QColor& cor) { m_cor = cor;}

void Malha::setMetrosPorKg(const float v) { m_metros_kg = v;}

void Malha::setNome(const QString& nome) { m_tipoNome = nome;}

void Malha::setRendimentoPorKg(const float r) { m_rendimento_kg = r;}

void Malha::setTipo(Malha::malhaTipo tipo) { m_tipo = tipo;}

void Malha::setValorPorKg(const float v) { m_valorDoKg = v; }

















