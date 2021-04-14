/**
 * \file ClownFish.cpp
 *
 * \author Shrey Jindal
 */
#include <memory>
#include <string>
#include "pch.h"
#include "ClownFish.h"
using namespace Gdiplus;

/// Fish filename 
const wstring ClownFishImageName = L"images/clown-fish.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CClownFish::CClownFish(CAquarium* aquarium) :
    CFish(aquarium, ClownFishImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CClownFish::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CFish::XmlSave(node);
    itemNode->SetAttribute(L"type", L"clown");
    return itemNode;
}