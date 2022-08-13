function increment(n)
	return n + 1
end

function my_objective(arr, f)
	for i = 1, 5 do
		arr[i] = f(arr[i])
	end
end

function main()
	local arr = {0, 1, 2 ,3 ,4}
	my_objective(arr, increment)
	for i = 1, 5 do
		io.write(arr[i] .. " ")
	end
end

main()
