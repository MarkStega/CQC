//
// FILE NAME: CQCDocComp_HelpNode.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 04/04/2015
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2020
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and 
//  the author (Dean Roddey.) It is licensed under the MIT Open Source 
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  Any place that we allow general HTML content, we use the THelpNode class. This is a
//  recursive containment class, that holds the XML nodes that we parse out of the file.
//  We use this stuff to generate HTML content.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
#pragma once


// ---------------------------------------------------------------------------
//   CLASS: THelpNode
//  PREFIX: hn
// ---------------------------------------------------------------------------
class THelpNode
{
    public :
        // -------------------------------------------------------------------
        //  Constructors and Destructor
        // -------------------------------------------------------------------
        THelpNode();

        THelpNode(const THelpNode&) = default;

        ~THelpNode();


        // -------------------------------------------------------------------
        //  Public operators
        // -------------------------------------------------------------------
        THelpNode& operator=(const THelpNode&) = delete;


        // -------------------------------------------------------------------
        //  Public, non-virtual methods
        // -------------------------------------------------------------------
        tCIDLib::TBoolean bIsEmpty() const;


        // -------------------------------------------------------------------
        //  Public class members
        //
        //  m_c4Extra
        //      Just an extra value for general use in a node type specific way.
        //
        //  m_colNodes
        //      The nodes that make up our help text. It's a recursive structure so
        //      we have a list of ourself.
        //
        //  m_eType
        //      The type of node we are.
        //
        //  m_strID
        //  m_strRef
        //      Optional bits used for things like divs, spans, links, etc...
        //
        //  m_strText
        //      Holds the actual text content of a given node, where applicable.
        //
        //  m_strType
        //      Option info that is used per-node, to indicate variations that that
        //      type of node can support.
        // -------------------------------------------------------------------
        tCIDLib::TCard4     m_c4Extra;
        TVector<THelpNode>  m_colNodes;
        tCQCDocComp::ETypes m_eType;
        TString             m_strRef;
        TString             m_strID;
        TString             m_strText;
        TString             m_strType;
};
