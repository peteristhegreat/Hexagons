#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class GraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GraphicsScene(QObject *parent = 0);

signals:

public slots:
    void mouseMoveEvent(QGraphicsSceneMouseEvent * m);

};

#endif // GRAPHICSSCENE_H
