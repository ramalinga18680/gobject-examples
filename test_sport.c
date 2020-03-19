#include <stdio.h>
#include "Sport.h"
#include "Soccer.h"

int main () {

    Sport *sport = sport_new();
    gboolean ret = isTeamGame(sport);
    setNumPlayers(sport,2);
    gint numPlayers = getNumPlayers(sport);
    g_print("Is the sport a team game %d and numplayers is %d\n",ret,numPlayers);

    Soccer *football = soccer_new();
        ret = isTeamGame(football);
        setNumPlayers(football,11);
        numPlayers = getNumPlayers(football);
        g_print("Is the sport a team game %d and numplayers is %d\n",ret,numPlayers);

    return 0;
}
