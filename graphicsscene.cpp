#include "graphicsscene.h"
#include <QDebug>

GraphicsScene::GraphicsScene(QObject *parent) :
    QGraphicsScene(parent)
{
}


void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent * m)
{
//    qDebug() << //Q_FUNC_INFO <<
//                m->scenePos();
//    m->ignore();
    QGraphicsScene::mouseMoveEvent(m);
}
