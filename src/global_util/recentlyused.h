/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
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

#ifndef RECENTLYUSED_H
#define RECENTLYUSED_H

#include <QObject>
#include <QXmlStreamReader>

#include <memory>

class RecentlyUsed : public QObject
{
    Q_OBJECT

public:
    explicit RecentlyUsed(QObject *parent = nullptr);

    const QList<QString> history() const { return m_history; }

public slots:
    void clear();

private slots:
    void reload();

private:
    std::unique_ptr<QXmlStreamReader> m_xmlRdr;

    QList<QString> m_history;
};

#endif // RECENTLYUSED_H
