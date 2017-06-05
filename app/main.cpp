/*!
 * Copyright (C) 2017 Stuart Howarth <showarth@marxoft.co.uk>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "qmaemo5multilistpickselector.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QMaemo5ValueButton>
#include <QStringListModel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    app.setApplicationName("QMaemo5MultiListPickSelector");
    QWidget window;
    window.setWindowTitle("QMaemo5MultiListPickSelector");
    QMaemo5ValueButton button(QObject::tr("Select values"), &window);
    QHBoxLayout layout(&window);
    QMaemo5MultiListPickSelector selector(&button);
    QStringListModel model(QStringList() << QObject::tr("One") << QObject::tr("Two") << QObject::tr("Three")
            << QObject::tr("Four") << QObject::tr("Five") << QObject::tr("Six") << QObject::tr("Seven")
            << QObject::tr("Eight") << QObject::tr("Nine") << QObject::tr("Ten"), &selector);
    selector.setModel(&model);
    selector.setCurrentIndexes(QList<int>() << 0 << 2 << 4);
    button.setPickSelector(&selector);
    layout.addWidget(&button, Qt::AlignCenter);
    window.show();
    return app.exec();
}

