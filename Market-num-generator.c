#include <stdio.h>
#include <stdlib.h>
/*Version 1.0.0 */
int main() {
    char sub;
    char sth;
    char anoword;

    printf("请输入主体: \n");
    scanf("%s",sub);
    printf("请输入事件: \n");
    scanf("%s",sth);
    printf("请输入另一种说法: \n");
    scanf("%s",anoword);
    
    printf("%s%s是怎么回事呢？%s相信大家都很熟悉，但是%s%s是怎么回事呢，下面就让小编带大家一起了解吧。 \n",sub,sth,sub,sub,sth);
    printf("%s%s，其实就是%s%s，大家可能会很惊讶%s怎么会%s呢？但事实就是这样，小编也感到非常惊讶。 \n",sub,sth,anoword,sub,sth);
    printf("这就是关于%s%s的事情了，大家有什么想法呢，欢迎在评论区告诉小编一起讨论哦！ \n",sub,sth);
    system("pasue");
    return 0;

}
