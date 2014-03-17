#ifndef BOARDHEXAGON_H
#define BOARDHEXAGON_H

#include <QGraphicsPolygonItem>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
//#include <QGraphicsScene

class BoardHexagon : public QGraphicsPolygonItem
{
public:
    BoardHexagon(QGraphicsItem *parent = 0);
    ~BoardHexagon(){}
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent*);
    void hoverMoveEvent(QGraphicsSceneHoverEvent*);
    void dragEnterEvent(QGraphicsSceneDragDropEvent*);
    void dragLeaveEvent(QGraphicsSceneDragDropEvent*);
    void dragMoveEvent(QGraphicsSceneDragDropEvent*);
    void dropEvent(QGraphicsSceneDragDropEvent *);
};

#endif // BOARDHEXAGON_H
