int solution(int value1, int weight1, int value2, int weight2, int maxW) 
{
    int ret = 0;
    if(value1 < value2)
    {
        swap(value1,value2);
        swap(weight1,weight2);
    }
    // take the first value item if possible
    if( weight1<= maxW){
        ret += value1;
        maxW -= weight1;
    }
    // take the second value item if possible
    if( weight2<= maxW){
        ret += value2;
        maxW -= weight2;
    }
    return ret;
}
