/* -*- c++ -*- */

#define V2X_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "v2x_swig_doc.i"

%{
#include "v2x/hello_v2x.h"
%}


%include "v2x/hello_v2x.h"
GR_SWIG_BLOCK_MAGIC2(v2x, hello_v2x);
