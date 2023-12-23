bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourStrongest = max(yourLeft,yourRight);
    int yourWeakest = min(yourLeft,yourRight);
    int friendsStrongest = max(friendsLeft,friendsRight);
    int friendsWeakest = min(friendsLeft,friendsRight);
    
    return(yourStrongest == friendsStrongest && yourWeakest == friendsWeakest);

}
