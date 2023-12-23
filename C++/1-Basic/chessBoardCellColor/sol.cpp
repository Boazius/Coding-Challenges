bool solution(string cell1, string cell2)
{
    int row1{0}, col1{0}, row2{0}, col2{0};

    col1 = cell1[0] - 'A';
    col2 = cell2[0] - 'A';
    row1 = cell1[1] - '1';
    row2 = cell2[1] - '1';

    bool isBlack1{false};
    bool isBlack2{false};

    if (row1 % 2 != 0)
    {
        isBlack1 = col1 % 2 == 0;
    }
    else
    {
        isBlack1 = col1 % 2 != 0;
    }

    if (row2 % 2 != 0)
    {
        isBlack2 = col2 % 2 == 0;
    }
    else
    {
        isBlack2 = col2 % 2 != 0;
    }

    return isBlack1 == isBlack2;
}
