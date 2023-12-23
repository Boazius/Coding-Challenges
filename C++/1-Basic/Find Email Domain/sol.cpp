string solution(string email) 
{
    int atIndex = email.find_last_of('@');
    return email.substr(atIndex+1);
}
