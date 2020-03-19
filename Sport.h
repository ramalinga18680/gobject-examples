/*
 * Sport.h
 *
 *  Created on: Mar 18, 2020
 *      Author: venkata
 */

#ifndef SPORT_H_
#define SPORT_H_

#include <glib-object.h>

G_BEGIN_DECLS
/*Remember the Sport structure cannot be defined when using the G_DECLARE_DERIVABLE_TYPE macro */
G_DECLARE_DERIVABLE_TYPE(Sport, sport, , SPORT, GObject)

typedef struct _SportClass SportClass;

typedef struct _SportPrivate SportPrivate;

struct _SportClass
{
	GObjectClass parent;
	gint (*getNumPlayers)(Sport *self);
	void (*setNumPlayers)(Sport *self, gint numPlayers);
	gboolean (*isTeamGame)(Sport *self);
};
struct _SportPrivate
{
	gint numPlayers;
};
#define TYPE_SPORT (sport_get_type())
#define SPORT(obj)           (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SPORT, Sport))
#define SPORT_CLASS(cls)     (G_TYPE_CHECK_CLASS_CAST    ((cls), TYPE_SPORT, SportClass))
#define IS_SPORT(obj)        (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SPORT))
#define IS_SPORT_CLASS(cls)  (G_TYPE_CHECK_CLASS_TYPE    ((cls), TYPE_SPORT))
#define SPORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS  ((obj), TYPE_SPORT, SportClass))

#define SPORT_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_SPORT, SportPrivate))


GType  sport_get_type  (void);
gboolean isTeamGame(Sport *self);
Sport* sport_new();
void setNumPlayers(Sport *self,gint players);
gint getNumPlayers(Sport *self);

G_END_DECLS


#endif /* SPORT_H_ */
