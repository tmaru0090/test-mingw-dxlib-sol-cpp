local str = nil
local x = 0
local y = 0
function initialize_danmaku()
	str = "へろー!!"
	local file = io.open("GAMELOG.TXT","w")
	if file then 
		file:write("LUASCRIPT初期化しましたー\n")
		file:close()
	end
end
function finalize_danmaku()	
	local file = io.open("GAMELOG.TXT","a")
	if file then 
		file:write("LUASCRIPT終了しましたー\n")
		file:close()
	end
end
function draw_danmaku()
	dx:draw_box(x,y,x+300,y+300,dx:get_color(255,255,255),1)
end
function update_danmaku()
	x = x+1
end

