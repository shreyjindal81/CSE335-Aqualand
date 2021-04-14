/**
 * \file ClownFish.cpp
 *
 * \author Shrey Jindal
 */
#include <memory>
#include <string>
#include "pch.h"
#include "DecorCastle.h"
using namespace Gdiplus;

/// Fish filename 
const wstring DecorCastleImageName = L"images/castle.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CDecorCastle::CDecorCastle(CAquarium* aquarium) :
    CItem(aquarium, DecorCastleImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CDecorCastle::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CItem::XmlSave(node);
    itemNode->SetAttribute(L"type", L"castle");
    return itemNode;
}