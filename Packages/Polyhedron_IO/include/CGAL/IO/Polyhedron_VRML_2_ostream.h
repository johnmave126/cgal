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
// file          : Polyhedron_VRML_2_ostream.h
// chapter       : $CGAL_Chapter: Support Library ... $
// package       : $CGAL_Package: Polyhedron_IO 2.11 (04 Feb 2000) $
// source        : polyhedron_io.fw
// revision      : $Revision$
// revision_date : $Date$
// author(s)     : Lutz Kettner  <kettner@inf.ethz.ch>
//
// coordinator   : Herve Bronnimann  <Herve.Bronnimann@sophia.inria.fr>
//
// Print a Polyhedron_3 in VRML 2.0 file format (.wrl)
// ============================================================================

#ifndef CGAL_IO_POLYHEDRON_VRML_2_OSTREAM_H
#define CGAL_IO_POLYHEDRON_VRML_2_OSTREAM_H 1
#ifndef CGAL_BASIC_H
#include <CGAL/basic.h>
#endif
#ifndef CGAL_PROTECT_IOSTREAM
#include <iostream>
#define CGAL_PROTECT_IOSTREAM
#endif
#ifndef CGAL_IO_VRML_2_OSTREAM_H
#include <CGAL/IO/VRML_2_ostream.h>
#endif // CGAL_IO_VRML_2_OSTREAM_H
#ifndef CGAL_IO_FILE_WRITER_VRML_2_H
#include <CGAL/IO/File_writer_VRML_2.h>
#endif // CGAL_IO_FILE_WRITER_VRML_2_H
#ifndef CGAL_IO_GENERIC_PRINT_POLYHEDRON_H
#include <CGAL/IO/generic_print_polyhedron.h>
#endif // CGAL_IO_GENERIC_PRINT_POLYHEDRON_H
#ifndef CGAL_POLYHEDRON_3_H
#include <CGAL/Polyhedron_3.h>
#endif

CGAL_BEGIN_NAMESPACE

template <class Traits, class HDS>
VRML_2_ostream&
operator<<( VRML_2_ostream& out, const Polyhedron_3<Traits,HDS>& P) {
    File_writer_VRML_2  writer;
    generic_print_polyhedron( out.os(), P, writer);
    return out;
}

CGAL_END_NAMESPACE
#endif // CGAL_IO_POLYHEDRON_VRML_2_OSTREAM_H //
// EOF //
