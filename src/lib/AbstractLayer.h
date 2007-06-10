//
// This file is part of the Marble Desktop Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2004-2007 Torsten Rahn  <tackat@kde.org>"
// Copyright 2007      Inge Wallin   <ingwa@kde.org>"
// Copyright 2007      Thomas Zander <zander@kde.org>"
//

#ifndef ABSTRACTLAYER_H
#define ABSTRACTLAYER_H

#include "Quaternion.h"
/**
 * This Class is to represent the base class for each of the levels
 * in the rendering of the Marble display. It will be the base class
 * of PlacemarkPainter and FIXME: list the other two rendering layers
 * */
class AbstractLayer: public QObject
{
    public:
        ///an empty constructor, so far
        AbstractLayer(QObject * parent=0);
    
        /**
         * Method to simplify the retreval of the screen pixel position 
         * from a longditude and latitude
         * \param _long the longitude of the point we want to find
         * \param _lat the latitude of the point we want to find 
         * \param invRotAxis inversion of the Quaternion status of the
         * globe
         * \param screenSize size of the screen
         * \param xOut where the x value of the point will be stored
         * \param yOut where the y value of the point will be sotred
         * \param radius FIXME: add roll of the radius in this comment
         * */
        bool getPixelPosFromGeoPoint(float _long, float _lat, QSize screenSize,
                Quaternion invRotAxis, int radius, int &xOut,
                int &yOut);
    };
#endif //ABSTRACTLAYER_H
