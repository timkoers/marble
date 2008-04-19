/**
 * This file is part of the Marble Desktop Globe.
 *
 * Copyright 2005-2007 Torsten Rahn <tackat@kde.org>"
 * Copyright 2007      Inge Wallin  <ingwa@kde.org>"
 * Copyright 2008       Patrick Spendrin <ps_ml@gmx.de>"
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "TileLoaderHelper.h"

#include <cmath>

#include <QtCore/QDebug>

int TileLoader::levelToRow( int level )
{
    if ( level < 0 ) {
        qDebug() << QString( "TileLoader::levelToRow(): Invalid level: %1" )
            .arg( level );
        return 0;
    }
    return (int)std::pow( 2.0, (double)( level ) );
}

int TileLoader::levelToColumn( int level )
{
    if ( level < 0 ) {
        qDebug() << QString( "TileLoader::levelToColumn(): Invalid level: %1" )
            .arg( level );
        return 0;
    }
    return (int)std::pow( 2.0, (double)( level + 1 ) );
}

int TileLoader::rowToLevel( int row )
{
    if ( row < 1 )    {
        qDebug() << QString( "TileLoader::rowToLevel(): Invalid number of rows: %1" )
            .arg( row );
        return 0;
    }
    return (int)( std::log( (double)row ) / std::log( (double)2.0 ) );
}

int TileLoader::columnToLevel( int column )
{
    if ( column < 2 ) {
        qDebug() << QString( "TileLoader::columnToLevel(): Invalid number of columns: %1" )
        .arg( column );
        return 0;
    }
    return (int)( std::log( (double)(column / 2) ) / std::log( (double)2.0 ) );
}
