#ifndef GOLA_H
#define GOLA_H

#include <qt/QtGui/QColor>

class Gola {
  
  public:
    enum golaTipo {REDONDA=1, V, POLO};
    
    Gola(const golaTipo tipo= REDONDA, const QColor& cor = QColor());
    Gola(const Gola& g);
    ~Gola();
    
    golaTipo getTipo() const;
    QColor getCor() const;
    void setTipo(const golaTipo tipo);
    void setCor(const QColor& cor);
    
    inline Gola operator=(const Gola& g );
    
  private:
    golaTipo m_tipo;
    QColor m_cor;
};
#endif