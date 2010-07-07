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

#ifndef GETSECRETCOMMAND_H
#define GETSECRETCOMMAND_H

#include "ProtocolCommand.h"

class GetSecretCommand : public ProtocolCommand
{
    Q_OBJECT
    Q_DISABLE_COPY(GetSecretCommand)

public:
    explicit GetSecretCommand(QObject *parent = 0);

    virtual quint8 command() const { return 0x01; }

    void send(ProtocolManager *to);

    static void process(CommandHandler &command);

protected:
    virtual void processReply(quint8 state, const uchar *data, unsigned dataSize);

private:
    ContactUser *user;
};

#endif // GETSECRETCOMMAND_H
