/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-17 15:27:55
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-20 10:24:18
 */
//!稳定的排序算法，不改变相同数值元素的初始位置
//!不稳定的排序算法可能会改变相同数值元素的初始位置

//!快排和归并排序是递归的
/* 
（1）冒泡排序：原理是通过相邻的两个元素作比较，把小的向前移或者把大的向后移，移动就是交换这两个元素。如果说碰到相等的两个元素是不会做处理的。所以是稳定的排序。

（2）选择排序：原理是从第一个元素开始，在之后的所有元素中选择一个最小的交换过来。如果说原序列中第一个元素和第二个元素相等，第三个元素是个最小值，经过选择会把第一个元素和第三个元素交换，这时第二个元素就跑到前面去了。如：3,3,1序列，经过选择排序会变成1,3,3。所以是不稳定的排序。

（3）插入排序：原理是从第二个元素开始，和前面的所有元素作比较，如果比前面元素最大的（也就是前面元素的最后一个）大，直接插入在前面元素的最后面（也就是保持自身位置不变，再取它的下一个元素开始）；如果比前面元素最大的小，就和第二大的作比较，以此找到自己的位置；如果在前面找到了和自己大小相等的值，就乖乖的插入后面，如：1,2,3,2，最后一个元素2先和3作比较，嗯比3小，再和2作比较，嗯相等，插入后就变成1,2,2,3，所以是稳定的排序。

（4）快速排序：原理是（最简便的操作）以第一个元素为基准，在后面的所有元素中进行前后夹击，从开头可末尾一个一个取元素和基准作比较，前面进攻的遇到比基准大的停下来，后面进攻的遇到比基准小的停下来，这时候，如果前面的还在前面，后面的还在后面，基准原地不动，交换这两个被攻击到的元素；如果前面进攻的和后面进攻的攻击的是同一个元素或前面进攻的攻到了后方友军的身后，就把后方友军进攻的元素和基准作交换，并以基准当前的位置断开，基准休息，前面的序列和后面的序列再打一遍，打到只剩一个敌人。（跑题了么？）如：2,2,3，2为基准，这时索引会在2的位置停下来，很无奈，只能交换2和2变成：2,2,3了。所以是不稳定的排序。

（5）归并排序：原理是通过递归法，把序列A切半分成A1和A2，再把A1和A2的每个元素互相比较取较小的依次放回A中。递归就是把序列无限切半，切到只有一个元素为止，再一点一点的拼回去。由于比较是发生在拼回去的时候，在比较时，前面的序列还是在前如 if(A1[0]<=A2[0])，遇到相等的值也是取A1中的元素先放入A中，所以是稳定的排序。（如果你非要比较时写成 if(A1[0]<A2[0])那就是不稳定的了，相等的时候会取A2中的元素，不过这就是你故意的了）

（6）基数排序：原理是（1-低位优先）新建10个序列组成数组，先通过个位数字将序列元素依次放到对应索引的新序列中，如：个位是0，就放到数组索引为0的新序列中，再从数组的序列中以索引从小到大的顺序依次取出元素放回原序列，再通过十位数字的大小整理一遍，以此类推，最终得到有序序列。（2-高位优先）新建10个序列组成数组，以最高位的数字为基准依次放入对应数组索引的序列中，如果序列中元素个数大于1或不相等，再建10个序列组成数组，以当前位的次一位数字为基准放入数组序列中，最后从低位数组开始取出放回原序列，最终得到有序序列。由于相等的元素各个位上的数字也相等，所以在经过依次放入和依次取出的过程顺序是不发生改变的。所以是稳定的排序。

（7）希尔排序：原理是在插入排序的基础上，取序列长度的一半为一个增量进行间隔式的插入排序，这个增量会在进行完插入排序后再次减半，直到减至1。插入排序是稳定的，但是当增量不同时，相当于将序列间隔的分成不同的序列进行插入排序，两个序列中的相等的元素就可能会被打乱位置。如：3,4,5,2,2，该序列长度为5，取一半是2，以2为增量进行插入排序会把序列分成4,2以及3,5,2，当然索引位置不变，进行插入排序会得到2,4以及2,3,5，还原会序列就是2,2,3,4,5。所以是不稳定的排序。

（8）堆排序：原理是把序列看成是完全二叉树，通过重复构造大顶堆或小顶堆来实现，每次构造完成会将最上面的节点取出，其余的节点再次构造成堆。如：



所以是不稳定的排序。

总结：不稳定的排序：堆排序，快速排序，希尔排序，选择排序。

           稳定的排序：冒泡排序，插入排序，归并排序，基数排序。
*/