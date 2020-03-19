/*
 * Soccer.c
 *
 *  Created on: Mar 18, 2020
 *      Author: venkata
 */
#include <glib-object.h>
#include "Soccer.h"

G_DEFINE_TYPE(Soccer,soccer,TYPE_SPORT);

static gboolean soccer_is_team_game (Sport *self){
	g_print(" I am here in soccer_is_team_game\n");
	return TRUE;
}

static void soccer_class_init (SoccerClass *klass) {
    GObjectClass *g_object_class = G_OBJECT_CLASS(klass);
    SportClass *sport_class = SPORT_CLASS(klass);

    sport_class->isTeamGame = soccer_is_team_game;

}

static void soccer_init(Soccer *self)
{
g_print(" Iam here in soccer_init\n");
}

Sport* soccer_new(){
	g_print(" Iam here in soccer_new\n");
	return g_object_new(TYPE_SOCCER, NULL);
}

