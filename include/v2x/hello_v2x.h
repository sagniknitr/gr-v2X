/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_V2X_HELLO_V2X_H
#define INCLUDED_V2X_HELLO_V2X_H

#include <v2x/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace v2x {

    /*!
     * \brief <+description of block+>
     * \ingroup v2x
     *
     */
    class V2X_API hello_v2x : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<hello_v2x> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of v2x::hello_v2x.
       *
       * To avoid accidental use of raw pointers, v2x::hello_v2x's
       * constructor is in a private implementation
       * class. v2x::hello_v2x::make is the public interface for
       * creating new instances.
       */
      static sptr make(testcase1);
    };

  } // namespace v2x
} // namespace gr

#endif /* INCLUDED_V2X_HELLO_V2X_H */

