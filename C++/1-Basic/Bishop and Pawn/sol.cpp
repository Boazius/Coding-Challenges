bool solution(string bishop, string pawn) 
{
    int bCol = bishop[0]-'a';
    int bRow = bishop[1]-'1';
    int pCol = pawn[0] - 'a';
    int pRow = pawn[1] - '1';
    
    // bishop can capture if row+-1 => col+-1
    int diffRow = abs(bRow - pRow);
    return (diffRow == abs(pCol - bCol)); 

}
