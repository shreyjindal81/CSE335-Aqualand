/**
*
*\file ClownFish.h
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
 * Implements a Clown fish
 */
class CClownFish : public CFish
{
public:
    /// constructor for CFishBeta
    CClownFish(CAquarium* aquarium);

    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave
    (const std::shared_ptr<xmlnode::CXmlNode>& node) override;

    /// Default constructor (disabled)
    CClownFish() = delete;

    /// Copy constructor (disabled)
    CClownFish(const CClownFish&) = delete;
protected:
    /// Function to set speed for fish
    double virtual SetSpeed()override
    {
        auto mSpeedX = 60 + ((double)rand() / RAND_MAX) * 20;
        return mSpeedX;
    };

};

