/**
 * \file FishBeta.cpp
 *
 * \author Shrey Jindal
 */
#include <memory>
#include <string>
#include "pch.h"
#include "FishBeta.h"
#include "Aquarium.h"
using namespace Gdiplus;

/// <summary>
/// fish filename
/// </summary>
const wstring FishBetaImageName = L"images/beta.png";

 /** Constructor
  * \param aquarium The aquarium this is a member of
 */
CFishBeta::CFishBeta(CAquarium* aquarium) : CFish(aquarium, FishBetaImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishBeta::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CFish::XmlSave(node);
    itemNode->SetAttribute(L"type", L"beta");
    return itemNode;
}

