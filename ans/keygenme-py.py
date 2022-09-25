import hashlib
from cryptography.fernet import Fernet
import base64

username_trial = "FRASER"
busername_trial = b"FRASER"
key = "picoCTF{1n_7h3_|<3y_of_"
arry = [4,5,3,6,2,7,1,8]
for i in arry:
	key += hashlib.sha256(busername_trial).hexdigest()[i]
key += '}'
print(key)