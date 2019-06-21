/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#4b555e",     /* after initialization */
	[INPUT] =  "#006699",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time to cancel lock with mouse movement in seconds */
static const int timetocancel = 3;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
