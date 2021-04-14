/**
*
*\file AnglerFish.h
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
class CAnglerFish : public CFish
{
public:
    /// constructor for CFishBeta
    CAnglerFish(CAquarium* aquarium);

    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
        override;

    /// Default constructor (disabled)
    CAnglerFish() = delete;

    /// Copy constructor (disabled)
    CAnglerFish(const CAnglerFish&) = delete;

protected:
    /// Function to set speed for fish
    double virtual SetSpeed()override
    {
        auto mSpeedX = 40 + ((double)rand() / RAND_MAX) * 20;
        return mSpeedX;
    };
};
