#ifndef POPUPMENU_H
#define POPUPMENU_H

#include <QTime>
#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT PopupMenu : public QWidget
{
    Q_OBJECT

public:
    explicit PopupMenu(QWidget *parent = nullptr);
};

#endif
