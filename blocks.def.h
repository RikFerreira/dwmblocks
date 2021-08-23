//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"Cpu: ", "sb-cpu", 1, 0},

    {"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1, 0},

    {"Upd: ", "sysupdate -c", 60, 0},

    {"Vol: ", "sb-volume", 0, 10},

    {"", "sb-weather", 600, 0},

    {"", "sb-date", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
