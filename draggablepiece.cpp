#include "draggablepiece.h"
#include <QDrag>
#include <QMimeData>

DraggablePiece::DraggablePiece()
{
}

void DraggablePiece::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QMimeData *data = new QMimeData;
    data->setColor(Qt::green);

    QDrag *drag = new QDrag(event->widget());
    drag->setMimeData(data);
    drag->start();
}
