def hello_i_am_pibble_wash_my_belly():
    set_a = set()
    set_b = set()
    res = set()

    size_a = int(input('Введите количество элементов для множетсва А: '))
    print('Введите элементы для множетсва А:')
    for i in range(size_a):
        set_a.add(int(input()))
    size_b = int(input('Введите количество элементов для множетсва B: '))
    print('Введите элементы для множетсва B:')
    for i in range(size_b):
        set_b.add(int(input()))

    for i in set_b:
        if i < 0 and i not in set_a:
            res.add(i)
    print('Результат:\n', *res)
hello_i_am_pibble_wash_my_belly()
