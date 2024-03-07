-- two_sum.lua

function twoSum(nums, target)
    local numIndices = {}

    for i, num in ipairs(nums) do
        local complement = target - num
        if numIndices[complement] then
            return {numIndices[complement], i}
        end

        numIndices[num] = i
    end

    return nil
end

-- Example usage:
local nums = {2, 7, 11, 15}
local target = 9
local result = twoSum(nums, target)

if result then
    print("Indices of the two numbers:", result[1], "and", result[2])
else
    print("No solution found.")
end
