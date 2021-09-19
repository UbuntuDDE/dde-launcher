/*
 * Copyright (C) 2019 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     shaojun <wangshaojun_cm@deepin.com>
 *
 * Maintainer: shaojun <wangshaojun_cm@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PAGECONTROL_H
#define PAGECONTROL_H

#include <DFloatingButton>

#include <QWidget>

DWIDGET_USE_NAMESPACE

#define     PAGE_ICON_SPACE  0
#define     PAGE_ICON_SIZE   10
#define     PAGE_BUTTON_SIZE 20

class PageControl : public QWidget
{
    Q_OBJECT

public:
    explicit PageControl(QWidget *parent = nullptr);

    void setPageCount(int count);
    void setCurrent(int pageIndex);
    void updateIconSize(double scaleX, double scaleY);
signals:
    void onPageChanged(int pageIndex);

public slots:
    void pageBtnClicked(bool checked = false);

private:
    void addButton();

private:
    int m_pageCount = 0;
    QIcon m_iconActive;
    QIcon m_iconNormal;
};

#endif // PAGECONTROL_H
