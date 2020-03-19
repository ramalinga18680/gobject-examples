/*
 * Soccer.h
 *
 *  Created on: Mar 18, 2020
 *      Author: venkata
 */

#ifndef SOCCER_H_
#define SOCCER_H_

#include <glib-object.h>
#include "Sport.h"

G_BEGIN_DECLS

typedef struct _SoccerClass
{
	SportClass parent;
}SoccerClass;

typedef struct _Soccer
{
	Sport parent_instance;
}Soccer;

#define TYPE_SOCCER (soccer_get_type())
#define SOCCER(obj)           (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SOCCER, Soccer))
#define SOCCER_CLASS(cls)     (G_TYPE_CHECK_CLASS_CAST    ((cls), TYPE_SOCCER, SoccerClass))
#define IS_SOCCER(obj)        (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SOCCER))
#define IS_SOCCER_CLASS(cls)  (G_TYPE_CHECK_CLASS_TYPE    ((cls), TYPE_SOCCER))
#define SOCCER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS  ((obj), TYPE_SOCCER, SoccerClass))

#define SOCCER_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_SOCCER, SoccerPrivate))

Soccer* soccer_new();
G_END_DECLS

#endif /* SOCCER_H_ */
