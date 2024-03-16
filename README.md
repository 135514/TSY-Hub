# -
说明：不同型号注射器药液注射，输出可能组合和该组合下的单次注射量

设计思路：1、使用两个数组，分别存放注射器规格、药剂容量   
          2、将数组内的数据进行排序方便后续寻找最佳的注射器（不用5ml注射器装0.8ml药液，防止造成吕布骑狗的现象）   
          3、两个for循环，让药剂去找注射器，找到注射器后执行10~180的注射次数。完毕后立马退出循环。    
          4、打印剂量选择、注射次数选择、单次注射剂量


运行截图：180次多了，这里只是为了显示验证结果，注射次数最大设置为20次,后续只需要修改宏定义——injection_maxnum为180即可。经过测试能够达到要求

![image](https://github.com/135514/-/blob/main/readme/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-03-16%20130153.png)
