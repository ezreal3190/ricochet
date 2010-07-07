/* Torsion - http://github.com/special/torsion
 * Copyright (C) 2010, John Brooks <special@dereferenced.net>
 *
 * Torsion is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Torsion. If not, see http://www.gnu.org/licenses/
 */

#ifndef SECURERNG_H
#define SECURERNG_H

#include <QByteArray>

class SecureRNG
{
public:
    static bool seed();

    static bool random(char *buf, int size);
    static QByteArray random(int size);

    static unsigned randomInt(unsigned max);
    static quint64 randomInt64(quint64 max);
};

#endif // SECURERNG_H
