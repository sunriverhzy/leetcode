# leetcode-
LeetCode刷题经历
2019-4-24， 第31题，下一个全排列：
    
    这一题主要考察全排列的性质，考察观察到位，可以发现，一个全排列的下一个全排列必然有着尽可能多的前缀，也就是说，一个全排列从后往前看，第一个出现不满足
    降序排列的那个数字x，应该和后面降序中最小的大于x的数字进行交换，交换完成后，再后面的数字进行升序排列，得到的结果就是下一个全排列。注意，全排列的产生，
    是尽可能先取小的数字放在高位，然后如果不满足，先从低位开始交换。
	

2019-4-25,  第21题，合并两个链表

    由于听说机试大多使用C，所以从今天开始均使用C完成题目
	21题是个easy题，相当于给自己熟悉一下C，因为好久没用了，这次出现的问题，是因为在使用结构体的时候，循环中申请需要动态申请，否则始终指向的是同一个结构体
	变量

2020-3-17，第36题，

    重启leetcode项目了hhhh,过去一年里算法碰的少了，写的代码也大多数是模型，所以打算重新做下leetcode锻炼一下自己的思路以及coding能力。也算是提前为面试做准备吧。
    这一题本来可以按照遍历的思路吧，但是为了减少对board的遍历次数，所以就想办法一遍遍历就能判断所有的列行小正方形是否有重合，办法就是相当于提前建立一个字典吧。巧妙利用索引，判断是否在第i行第j列中出现过，至于小正方形的话，对索引除以3取商就行了（//），如果出现过了，就代表重复，直接返回false.
    这里有个有趣的地方，就是发现python的list有个骚操作，竟然可以直接加（网上找了答案，思路和我一样，但代码比我简洁）
    另外，运行的时候至于判断是否出现过的容器我试了list和dict,结果dict用的内存更少，没想到的，因吹斯听。
    over

2020-3-18  #18
    这一题相当于3sum的升级版吧，利用递归的思想把4转换为3，首先进行排序，然后从小到大，依次考虑，可以理解为，先假设结果包含第一个数，那么就找剩余的3个数使得其满足和等于target-num[1],因此就把问题降维，另外，在剩下的问题考虑当中，就不用考虑这第一个数了，因为这里已经考虑了所有包含第一个数的情况了。
    换言之，k数之和也完全可以利用赌鬼的思想转换为k-1个数的和。
