from setuptools import setup, Extension

setup(
    name='median',
    version='1.0',
    ext_modules=[Extension('median', ['median.cpp'])],
    zip_safe=False,
)
