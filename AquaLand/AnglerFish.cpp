/**
 * \file AnglerFish.cpp
 *
 * \author Shrey Jindal
 */
#include <memory>
#include <string>
#include "pch.h"
#include "AnglerFish.h"
using namespace Gdiplus;
/// <summary>
/// link to the image of angler fish
/// </summary>
const wstring CAnglerFishImageName = L"images/angler.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CAnglerFish::CAnglerFish(CAquarium* aquarium) :
    CFish(aquarium, CAnglerFishImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CAnglerFish::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CFish::XmlSave(node);
    itemNode->SetAttribute(L"type", L"angler");
    return itemNode;
}