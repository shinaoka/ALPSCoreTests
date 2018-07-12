import h5py
import numpy

with h5py.File('tmp.h5', 'w') as f:
    data = ['A', 'B']

    # Python2 & 3
    # Write ASCII variable-length strings
    f.create_dataset('/str_vec', dtype=h5py.special_dtype(vlen=bytes), data=[numpy.string_(i) for i in data])

    f['/str'] = 'A'
