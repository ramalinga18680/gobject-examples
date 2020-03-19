/*
 * Soccer.c
 *
 *  Created on: Mar 18, 2020
 *      Author: venkata
 */
#include <glib-object.h>
#include "Soccer.h"

G_DEFINE_TYPE(Soccer,soccer,TYPE_SPORT);

static void soccer_set_num_players(Sport *self,gint numPlayers)
{
	/* Get the base class pointer to invoke the base class virtual method */
	SportClass *klass = SPORT_CLASS(soccer_parent_class);
	klass->setNumPlayers(self,numPlayers);
}
static gboolean soccer_is_team_game (Sport *self)
{
	g_print(" I am here in soccer_is_team_game\n");
	return TRUE;
}

static void soccer_class_init (SoccerClass *klass)
{
	GObjectClass *g_object_class = G_OBJECT_CLASS(klass);
	SportClass *sport_class = SPORT_CLASS(klass);

	sport_class->isTeamGame = soccer_is_team_game;
	sport_class->setNumPlayers = soccer_set_num_players;
}

static void soccer_init(Soccer *self)
{
	g_print(" Iam here in soccer_init\n");
}

Soccer* soccer_new()
{
	g_print(" Iam here in soccer_new\n");
	return g_object_new(TYPE_SOCCER, NULL);
}

