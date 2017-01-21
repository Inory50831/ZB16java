public int getResult(int n)
{
    if (n < 1)
        return -1;
    LinkedList<Integer> list = new LinkedList<Integer>();
    int round = 2, i, curr = 0;
    for (i = 1; i <= n; i++)
    {
        list.add(i);
    }
    while (list.size() > 1)
    {
        i = 0;
        while (list.size() > 1 && i < list.size())
        {
            curr = (curr + 1) % round;
            if (curr != 1)
            {
                list.remove(i);
            } else
            {
                i++;
            }
        }
        round++;
        curr = 0;
        if (list.size() > 1)
        {
            int last = list.removeLast();
            list.addFirst(last);
        }
    }
    return list.pop();
}
