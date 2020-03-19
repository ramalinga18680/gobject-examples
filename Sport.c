#include <glib-object.h>

#include "Sport.h"

G_DEFINE_TYPE (Sport, sport, G_TYPE_OBJECT);

static void sport_set_num_players(Sport *self,gint numPlayers){
	SportPrivate* priv = SPORT_GET_PRIVATE(self);
	priv->numPlayers = numPlayers;
}
static gboolean sport_is_team_game (Sport *self){
	g_print(" I am here in sport_is_team_game\n");
	return FALSE;
}
static gint sport_get_num_players(Sport *self){
	SportPrivate* priv = SPORT_GET_PRIVATE(self);
	return priv->numPlayers;
}
static void sport_class_init (SportClass *klass) {
    GObjectClass *g_object_class = G_OBJECT_CLASS(klass);


    klass->setNumPlayers = sport_set_num_players;
    klass->getNumPlayers = sport_get_num_players;
    klass->isTeamGame = sport_is_team_game;

    g_type_class_add_private (klass, sizeof (SportPrivate));
}

static void sport_init(Sport *cls)
{
g_print(" Iam here in sport_init\n");
}

gboolean isTeamGame(Sport *self){
	  SPORT_GET_CLASS(self)->isTeamGame(self);
}

void setNumPlayers(Sport *self,gint players){
	SPORT_GET_CLASS(self)->setNumPlayers(self,players);
}
gint getNumPlayers(Sport *self){
	SPORT_GET_CLASS(self)->getNumPlayers(self);
}
Sport* sport_new(){
	g_print(" Iam here in sport_new\n");
	return g_object_new(TYPE_SPORT, NULL);
}
