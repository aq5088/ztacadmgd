// (C) Copyright 2005-2007 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.

//-----------------------------------------------------------------------------
//- Arc.h
#pragma once
#include "Curve.h"

//-----------------------------------------------------------------------------
using namespace System ;
using namespace Autodesk::AutoCAD::Geometry ;
using namespace Autodesk::AutoCAD::DatabaseServices ;

//-----------------------------------------------------------------------------
//- Wizard Generated Custom Object .NET Wrapper
//- See the mgPoly in the ObjectARX SDK for further information
//-----------------------------------------------------------------------------
namespace ztAcadMgd {
	namespace DatabaseServices {

		/// <summary>  
		/// Բ��
		/// </summary> 
		[Autodesk::AutoCAD::Runtime::Wrapper("AcDbArc")]
		public ref class Arc : public Curve {

		public:
			//- Constructor
			Arc () ;

		internal:
			Arc (System::IntPtr unmanagedPointer, bool bAutoDelete) ;

			//- Returns the unmanaged ARX Object
			inline AcDbArc *GetImpObj () {
				return (static_cast<AcDbArc *>(UnmanagedObject.ToPointer ())) ;
			}

		public:
			//- To define properties which get/set values of your object
			//- the format you must use is
			//-		__property void set_Center(Point2d point);
			//-		__property Point2d get_Center();
			Arc(Point3d center, double radius, double startAngle, double endAngle);
			Arc(Point3d center, Vector3d normal, double radius, double startAngle, double endAngle);
			property Point3d Center
			{
				[System::ComponentModel::Category("Geometry")]
				Point3d get();
				void set(Point3d value);
			}
			property double EndAngle
			{
				[System::ComponentModel::Category("Geometry")]
				double get();
				void set(double value);
			}
			property double Length
			{
				[System::ComponentModel::Category("Geometry")]
				double get();
			}
			property Vector3d Normal
			{
				[System::ComponentModel::Category("Geometry")]
				Vector3d get();
				void set(Vector3d value);
			}
			property double Radius
			{
				[System::ComponentModel::Category("Geometry")]
				double get();
				void set(double value);
			}
			property double StartAngle
			{
				[System::ComponentModel::Category("Geometry")]
				double get();
				void set(double value);
			}
			property double Thickness
			{
				[System::ComponentModel::Category("General")]
				double get();
				void set(double value);
			}	
			property double TotalAngle
			{
				[System::ComponentModel::Category("Geometry")]
				double get();
			}
		} ;

	}
}