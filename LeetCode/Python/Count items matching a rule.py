class Solution:
    def countMatches(self, items: List[List[str]], rulekey: str, rulevalue: str) -> int:
        count = 0
        for i in range(len(items)):
            if rulekey == "type":
                if rulevalue == items[i][0]:
                    count += 1
            elif rulekey == "color":
                if rulevalue == items[i][1]:
                    count += 1
            elif rulekey == "name":
                if rulevalue == items[i][2]:
                    count += 1
            
            else:
                continue
        return count
