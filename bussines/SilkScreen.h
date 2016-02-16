#ifndef SILKSCREEN_H
#define SILKSCREEN_H

#include <qt/QtCore/QStringList>

class SilkScreen {
  
  private:
    int m_cores;
    bool m_chapado;
    QStringList m_listaArquivos;
    
  public:
    SilkScreen(const int& cores = 0, const bool& chapado=false, const QStringList& list = QStringList());
    SilkScreen(const SilkScreen& s);
    ~SilkScreen();
    
    void setCores(const int cores);
    void setChapado(const bool chapado);
    
    void setArquivos(const QStringList& lista);
    void addArquivo(const QString& path);
    void addArquivos(const QStringList& lista);
    
    int getCores() const;
    bool chapado() const;
    QStringList arquivos() const;
    
};
#endif