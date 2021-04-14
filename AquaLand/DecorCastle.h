/**
*
*\file DecorCastle.h
*
* \ by Shrey Jindal
* THis is one of the items floating in the aquarium.
*/

#pragma once
#include <string>
#include <memory>
#include "Item.h"
using namespace std;

/**
 * Implements a Castle
 */
class CDecorCastle : public CItem
{
public:
    /// constructor for CDecorCastle
    CDecorCastle(CAquarium* aquarium);

    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

    /// Default constructor (disabled)
    CDecorCastle() = delete;

    /// Copy constructor (disabled)
    CDecorCastle(const CDecorCastle&) = delete;
};

