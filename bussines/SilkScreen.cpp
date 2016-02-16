#include "SilkScreen.h"

SilkScreen::SilkScreen(const int& cores, const bool& chapado, const QStringList& list)
{
  this->setCores(cores);
  m_chapado = chapado;
  setArquivos(list);
}

SilkScreen::SilkScreen(const SilkScreen& s):
  m_cores(s.m_cores),
  m_chapado(s.m_chapado)
{
  m_listaArquivos = s.m_listaArquivos;
}

SilkScreen::~SilkScreen() {}

void SilkScreen::setCores(const int cores)
{
  if (cores > 0)
    m_cores = cores;
}

void SilkScreen::setChapado(const bool chapado) { m_chapado = chapado; }

void SilkScreen::setArquivos(const QStringList& lista) { m_listaArquivos = lista; }

void SilkScreen::addArquivos(const QStringList& lista) { m_listaArquivos << lista; }

void SilkScreen::addArquivo(const QString& path) { m_listaArquivos << path; }


QStringList SilkScreen::arquivos() const { return m_listaArquivos;}

bool SilkScreen::chapado() const { return m_chapado; }

int SilkScreen::getCores() const { return m_cores; }
