#include "boardhexagon.h"
#include <QDebug>
#include <QBrush>

BoardHexagon::BoardHexagon(QGraphicsItem * parent): QGraphicsPolygonItem(parent)
{
    setAcceptDrops(true);
    setAcceptedMouseButtons(Qt::LeftButton);
    setAcceptHoverEvents(true);

    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsSelectable);
}

void BoardHexagon::focusInEvent(QFocusEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
}

void BoardHexagon::focusOutEvent(QFocusEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
}

void BoardHexagon::hoverEnterEvent(QGraphicsSceneHoverEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
    this->setBrush(QBrush(Qt::cyan));
}

void BoardHexagon::hoverLeaveEvent(QGraphicsSceneHoverEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
    this->setBrush(QBrush());
}

void BoardHexagon::hoverMoveEvent(QGraphicsSceneHoverEvent*)
{
//    qDebug() << this->toolTip() << Q_FUNC_INFO;
}

void BoardHexagon::dragEnterEvent(QGraphicsSceneDragDropEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;

    this->setBrush(QBrush(Qt::cyan));
}

void BoardHexagon::dragLeaveEvent(QGraphicsSceneDragDropEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
    this->setBrush(QBrush());
}

void BoardHexagon::dragMoveEvent(QGraphicsSceneDragDropEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
}

void BoardHexagon::dropEvent(QGraphicsSceneDragDropEvent*)
{
    qDebug() << this->toolTip() << Q_FUNC_INFO;
}

