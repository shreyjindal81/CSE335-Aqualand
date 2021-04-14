/**
*
*\file Dory.h
*
* \ by Shrey Jindal
* THis is one of the items floating in the aquarium.
*/

#pragma once
#include <string>
#include <memory>
#include "Fish.h"
using namespace std;

/**
 * Implements a Dory
 */
class CDory : public CFish
{
public:
    /// constructor for CFishBeta
    CDory(CAquarium* aquarium);

    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave
    (const std::shared_ptr<xmlnode::CXmlNode>& node)override;

    /// Default constructor (disabled)
    CDory() = delete;

    /// Copy constructor (disabled)
    CDory(const CDory&) = delete;

protected:
    /// Function to set speed for fish
    double virtual SetSpeed()override
    {
        auto mSpeedX = 80 + ((double)rand() / RAND_MAX) * 20;
        return mSpeedX;
    };
};
