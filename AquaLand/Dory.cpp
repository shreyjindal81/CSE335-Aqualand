/**
 * \file Dory.cpp
 *
 * \author Shrey Jindal
 */
#include <memory>
#include <string>
#include "pch.h"
#include "Dory.h"
using namespace Gdiplus;

/// Fish filename 
const wstring CDoryImageName = L"images/dory.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CDory::CDory(CAquarium* aquarium) :
    CFish(aquarium, CDoryImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CDory::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CFish::XmlSave(node);
    itemNode->SetAttribute(L"type", L"dory");
    return itemNode;
}