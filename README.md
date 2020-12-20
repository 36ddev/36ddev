I guess this is 36dCALC 0.1 alpha

This is a dozenal software calculator. It demonstrates the potentiality for future hardware ALUs to implement a much more efficient, low cost, low power way of adding numbers together. Instead of the standard ever-increasing transistor count of modern ALUs, this uses a non-binary method, in which numbers ONE - TWELVE are put into 4 groups of threes. You add the thirds together, then you add the groups together, then you drop down your group and third answer into the corresponding positions. 

As as example.

Group[1]   Group[2]    Group[3]    Group[4]
 1   2   3     1   2   3      1   2   3      1   2   3
 1   2   3     4   5   6      7   8   9      x    e   d

Number1:  2 = Group 1, Third 2.
                 +
Numbers2: 2 = Group 1, Third 2.

Group 1 + 1 = 2. That's pretty self-explanatory. However, this group sum is only valid because the third sum is over 3. Anything that results in a third sum that is 3 or under, will be the group sum - 1.
2 + 2 = 1, as we only count in threes. So we overlap and go back to 1.

So, the group sum is 2, and the third sum is 1.
Our answer is 4.

This logic works with any combination of numbers.
Ex 2:
3 + 5 = 8

3 is group 1, third 3.
5 is group 2, third 2.

Group 1 + 2 = 3
Third 3 + 2 = 2 (overlap/overgroup)

The answer is Group 3, and drop down our 2 to find 8.
The answer is 8.

As you can see this is much cleaner and logical than the standard addition we have been taught. If computer ALUs applied this logic at the HARDWARE level, we would be MUCH happier buying cheaper CPUs and computers, and also have a MUCH easier time programming software.

A note, this new way of dozenal math gets rid of 0s (zeros). The end unit is a single digit. Instead of 12 becoming the new "10". It's just "d". Also, due to the absence of zeros, and the resulting elegance of the ordering of multiple digits, after "d" (which would have been '10'  for twelve in the normal sense) we enumerate the higher digits according to their row. Since 1,2,3,4,5,6,7,8,9,x,e,d is the FIRST row, while you COULD add a 1 in front of each number it's redundant, however we add a "2" as the leading digit to reflect the fact that it's the SECOND row. So "13" (thirteen) in DECIMAL is now written as "21" in the new-dozenal. 

Understand that this program is not a simple decimal to dozenal conversion. It does use your computer's hardware ALU but only to add 1,2,3 and 4 together. It does not count higher than that. Everything else in the program is computed with software logic.
