import h5py

with h5py.File('tmp.h5', 'w') as f:
    f['/str_vec'] = ['A', 'AB']
    f['/str'] = 'A'
