#line 12 "cgal_header.fw"
// ============================================================================
//
// Copyright (c) 1997 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//
// release       : $CGAL_Revision: $
// release_date  : $CGAL_Date: $
//
// file          : polyhedron_iostream.h
// source        : polyhedron_io.fw
#line 26 "cgal_header.fw"
                                   
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Lutz Kettner  <kettner@inf.ethz.ch>
//
// coordinator   : MPI Saarbruecken (Stefan Schirra <stschirr@mpi-sb.mpg.de>)
//
// Stream operators for Polyhedron<Traits> IO in object file format (OFF)
// ============================================================================
#line 313 "polyhedron_io.fw"

#ifndef CGAL_POLYHEDRON_IOSTREAM_H
#define CGAL_POLYHEDRON_IOSTREAM_H 1
#line 1562 "polyhedron_io.fw"
#ifndef _IOSTREAM_H
#include <iostream.h>
#endif

#ifndef CGAL_PRINT_OFF_H
#include <CGAL/print_OFF.h>
#endif

#ifndef CGAL_SCAN_OFF_H
#include <CGAL/scan_OFF.h>
#endif

//  CGAL_Polyhedron
#ifndef CGAL_POLYHEDRON_H
#include <CGAL/Polyhedron.h>
#endif

template <class Traits> inline
ostream& operator<<( ostream& out, const CGAL_Polyhedron<Traits>& P) {
    // writes P to `out' in ASCII format.
    CGAL_print_OFF( out, P);
    return out;
}

template <class Traits> inline
istream& operator>>( istream& in, CGAL_Polyhedron<Traits>& P) {
    // reads a polyhedron from `in' and appends it to P.
    CGAL_scan_OFF( in, P);
    return in;
}
#line 316 "polyhedron_io.fw"
 
#endif // CGAL_POLYHEDRON_IOSTREAM_H //
// EOF //
