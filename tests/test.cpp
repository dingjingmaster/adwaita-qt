/*
 * Copyright (C) 2020 Jan Grulich <jgrulich@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "test.h"

#include <QTest>

#include <AdwaitaQt/adwaita.h>
#include <AdwaitaQt/adwaitacolors.h>

#include <memory>

QTEST_MAIN(Test)

void Test::initTestCase()
{
    // Just simple test whether we can link against the Adwaita library
    // and find headers
    std::unique_ptr<Adwaita::StyleOptions> options(new Adwaita::StyleOptions(QPalette()));
    QVERIFY(options);
}
