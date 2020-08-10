p=int(input('Enter 1st prime no: '))
q=int(input('Enter 2nd prime no: '))
a=int(input('Enter shared key of user1: '))
b=int(input('Enter shared key of user2: '))
if p==q:
    print('Both prime numbers cannot be equal')

user1=q**a%p
user2=q**b%p

user1_key=user2**a%p
user2_key=user1**b%p

if(user1_key==user2_key):
    print('Connection established, enjoy secured communication')
    print('Shared key: '+str(user1_key))
else:
    print('Connection failed')
    
    
    
