#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <stdio.h>

static int l_each (lua_State *L) {
	printf("each");
	return 1;
}

static const struct luaL_Reg util [] = {
	{"each", l_each},
	{NULL, NULL}
};

int luaopen_util (lua_State *L) {
	luaL_openlib(L, "luautil", util, 0);
	return 1;
}
