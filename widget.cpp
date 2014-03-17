#include "widget.h"
#include <QGraphicsView>
#include "graphicsscene.h"
#include <QHBoxLayout>
#include <QGraphicsPolygonItem>
#include <QPolygonF>
#include <qmath.h>
#include "boardhexagon.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout * hbox = new QHBoxLayout;
    QGraphicsView * view = new QGraphicsView;
    GraphicsScene * scene = new GraphicsScene;

    QPolygonF polygon;
    qreal side = 20;
    qreal dx = qSqrt(3)/2 * side;
    polygon
            // standing on a point
            << QPointF(dx, -side/2)
            << QPointF(0, -side)
            << QPointF(-dx, -side/2)
            << QPointF(-dx, side/2)
            << QPointF(0, side)
            << QPointF(dx, side/2);
    // Sitting flat
    //            << QPointF(-side/2, dx)
    //            << QPointF(-side, 0)
    //            << QPointF(-side/2, -dx)
    //            << QPointF(side/2, -dx)
    //            << QPointF(side, 0)
    //            << QPointF(side/2, dx);

    int h = 9;
    int w = 17;
    int mid_h = h/2;
    int mid_w = w/2;

    for(int r = 0; r < h; r++)
    {
        for(int c = 0; c < w; c++)
        {
            if(qAbs(mid_h - r) + qAbs(mid_w - c) > 8
                    || (r % 2 != c % 2))
            {
                // don't add a hexagon, it isn't on the board!
            }
            else
            {
                BoardHexagon * hexagon = new BoardHexagon(0);
                hexagon->setPolygon(polygon);
                scene->addItem(hexagon);
                hexagon->setPos(dx * c, side * 1.5 * r);
                hexagon->setToolTip(QString::number(r) + "," + QString::number(c));
            }
        }
    }

    QGraphicsEllipseItem * ellipse = scene->addEllipse(-20, -20, 20, 20,QPen(), QBrush(QColor(Qt::green)));
    this->makeDraggable(ellipse);


    view->setRenderHint(QPainter::Antialiasing);
    view->setScene(scene);

    view->setMouseTracking(true);

    hbox->addWidget(view);
    this->setLayout(hbox);

    this->resize(600, 400);
}

void Widget::makeDraggable(QGraphicsItem *item)
{
    item->setFlag(QGraphicsItem::ItemIsSelectable);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    item->setFlag(QGraphicsItem::ItemSendsGeometryChanges);
    item->setFlag(QGraphicsItem::ItemSendsScenePositionChanges);
}

Widget::~Widget()
{

}
