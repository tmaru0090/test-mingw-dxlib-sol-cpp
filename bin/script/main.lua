require("script/global_variables")
require("script/danmaku_viewer")

function initialize()
	dx = DxLib.new()
	initialize_danmaku()
end
function finalize()
	finalize_danmaku()
end
function draw()
	draw_danmaku()
end
function update()
	update_danmaku()
end

