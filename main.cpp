#include <qt/QtWidgets/qapplication.h>
#include <qt/QtWidgets/QWidget>
#include <QtCore/qdebug.h>
#include <QtGui/QColor>

#include "./bussines/Gola.h"
#include "./bussines/SilkScreen.h"
#include "./bussines/Transfer.h"
#include "./bussines/Produto.h"
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget window;
    Transfer transfer;
    
    transfer.setTamanho(Produto::P);
    transfer.setNome(QString("Transfer"));
    transfer.setDescricao(QString("Transfer de teste!"));
    
    qDebug() << transfer.descricao() << transfer.nome() << transfer.tamanho();
    window.show();
    return app.exec();
}
