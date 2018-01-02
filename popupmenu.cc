#include "popupmenu.h"

#include <QMouseEvent>
#include <QPainter>
#include <QTimer>

PopupMenu::PopupMenu(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("Popup Menu"));
    resize(120, 120);
}
