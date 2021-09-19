/*
 * Copyright (C) 2019 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     niecheng <niejiashan@163.com>
 *
 * Maintainer: niecheng <niejiashan@163.com>
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
#include "maskqwidget.h"
#include "constants.h"

#include <QPainter>

MaskQWidget::MaskQWidget(QWidget *parent)
    : QWidget(parent)
    , m_color(Qt::transparent)
{
}

void MaskQWidget::setColor(QColor color)
{
    m_color = color;
}

void MaskQWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // 反锯齿;
    painter.setBrush(QBrush(m_color));
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width());
    rect.setHeight(rect.height() - 7);
    painter.drawRoundedRect(rect, DLauncher::APPHBOX_RADIUS, DLauncher::APPHBOX_RADIUS);
    QWidget::paintEvent(event);
}
