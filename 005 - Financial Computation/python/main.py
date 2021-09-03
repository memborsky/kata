while True:
    cmd = input('> ')
    if cmd == 'exit':
        exit()
    cmd = int(cmd)
    if cmd < 12500:
        print('Income = {} pixel dust'.format(cmd))
        print('Tax = {} pixel dust'.format(str(cmd*0.32).split('.')[0]))
    else:
        print('Income = {} pixel dust'.format(cmd))
        print('Tax = {} pixel dust'.format(str(cmd*0.65).split('.')[0]))