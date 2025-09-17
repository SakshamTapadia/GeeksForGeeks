def friends_in_trouble(j_angry, s_angry):
    if(j_angry & s_angry):
        return True
    elif(j_angry == False and s_angry == False):
        return True
    else:
        return False