require "luautil"

list = {1, 2, 3, 4, 5, 6}
luautil.each(list, function(keys, item)
	return item
end)
