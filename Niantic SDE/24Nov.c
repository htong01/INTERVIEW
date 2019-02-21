
//l是最后要添加的(的个数，从左边遍历，遇到)那么cnt++，遇到(那么l+=cnt然后cnt=0。
//                                 比如)))()))   l=5.
//然后再从右边重复上面的步骤获取在尾部需要添加的)的个数。

https://leetcode.com/problems/remove-invalid-parentheses/description/
https://www.quora.com/How-can-I-balance-parentheses-in-a-string-using-minimum-number-of-edits


✔️判断string A是不是string B的subsequence

add parentheses to make the string valid，跟FB那道高频hard正好相反，这题是增加最少的括号

一道题，在给定的parentheses string前后补上（ 或 ），使其valid。求米谢谢！

Onsite就两轮，一个中国人面比较简单easy级别的，followup了最多也就medium难度，排序题。第二个印度人问比较杂，先问简历，然后根据简历问了些相关问题，再做了个简单的design，最后5分钟写了个蓄水池问题





因为面的是构架，所以问了很多OS和网络，LZ技术栈偏Full-Stack，也没准备这些问题，所以前半部分就妥妥跪了。。。
问题大概是：
1. 地址栏输入www.google.com 以后发生了一系列什么（经典的OS 网络面试题，提前准备一下应该不会有差）
Answer: https://www.jianshu.com/p/8069aaa5c549
General Answer: https://blog.csdn.net/kuangsonghan/article/details/80046492
2. 问了HTTP，TCP/IP， UDP相关的一些问题

之后code题目也很简单（不知道是不是看我前面答得太烂），两个链表加起来，followup各种复杂度，脑补Arraylist LinkedList各种操作的tradeoff
最后小哥跟我聊说感觉我技术栈不是很适合这个职位（os 网络完全不会。。。），应该去一些Full-Stack职位，因为代码写的快（他只留给我5分钟写代码。。我竟然写好了。。。）
然后会问问HR给我换个职位申请





面试官是Director of Engineer team，人很nice， 会引导你去解决问题，但是楼主投的是Fullstack岗位，没有预习System Design啊啊啊啊，大家要引以为戒～


✔️https://leetcode.com/problems/find-the-duplicate-number/description/
Find the duplicate number in a collection of numbers, there is only one pair of duplicate number, the rest are unique numbers, how do you find the duplicate number? What's the running time and memory used in your solution?

Follow up1: If we stored the numbers in array, could you find the duplicate number without adding extra memory?
Follow up2: If I have 1TB those data stored in 400 machine(6G RAM, 2.5G Memory), how could you find the duplicate number on which machine?

Niantic就是pokemon go的公司。网上面经较少。


面的职位是Software Engineer
第一轮电面上来就问了一个系统设计问题。 有一个机器集群，如何将一个很大的文件最快的储存到集群的每一个机器上。Followup问题包括传输文件使用UDP好还是TCP好。如果master的坏了怎么办。

✔️之后是一个比较简单的算法题。检测两个字符串，第二个字符串的每个字符是否依次序出现在第一个字符中。



✔️leetcode No.346 http://www.cnblogs.com/grandyang/p/5450001.html
Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

follow up
min/max of that sliding window




Areas that may be covered:
Your passion for engineering
General CS concepts, including data structures, algorithm design/analysis
System design and scalability
Coding in your most comfortable language (sessions may cover whiteboard coding, coding on a laptop computer, and pair programming)


Please be prepared to talk about:
Why you want to work at Niantic
Past and present projects and what you enjoy about your current position
What kind of impact you will make




https://ask.julyedu.com/question/775
https://www.1point3acres.com/bbs/thread-144709-1-1.html#rd?sukey=66d4519b2d3854cd7ba4533222e65405d1ecc91b36a790d137c67b8ce02b3f18893baa77acd601d4c9b9e7a72511eba2




Something similar to Range Minimum Query.

✔️ Find an element in a rotated sorted array. Leetcode #33

Given a 7-column keyboard sorted in alphabetic order. There is a cursor on the keyboard, and you can move it 1 unit to left/right/up/down. The input is a word, you need to design an algorithm to give movements of cursor to type this word.

Given a collection of numbers, it has two functions: insert() and getMedian(). Choose a data structure to construct this collection and design the insert() and getMedian() function. Explain the time complexity of each function.


✔️蓄水池问题
Leetcode #11
https://leetcode.com/problems/container-with-most-water/description/
❓Leetcode #43 similar question


Several easy-medium leetcode binary tree questions.
How would you build X piece of the Pokémon GO backend?
Describe BGP.
    边界网关协议，属于TCP
What's the difference between symmetric and asymmetric key encryption?

algorithms and data structures focusing on stack, LL, queues, arrays, strings, math

Calculate the probability of a player to successfully attain a certain in-game goal after N tries knowing the probability of one attempt. The statistic variable is independent so cumulative probabilities can be used
One question was pure math (Statistics / Probabilities) : it required calculating Cumulatitive Probabilities of a specific mechanic of one of Niantic's game. Begore I could say anything, the interviewer eagerly explained that probabilities are important at Niantic because they help keep the game balanced. This felt as if the interviewer anticipated pushback and tried to justify asking this question preemptively.
The other question was slightly closer to computer science and is an exercise in which one is given a set of integers (the interviewer starts with 3 and asks not to generalize at first) and must select one matching certain conditions. It is required to perform this operation without using any of the language standard library functions, causing the solution to become a laundry list of "if"s. I was offered to choose the language in which to write code.
