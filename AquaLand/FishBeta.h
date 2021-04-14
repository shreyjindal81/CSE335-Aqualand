/**
*
*\file FishBeta.h
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
 * Implements a Beta fish
 */
class CFishBeta : public CFish
{
public:
    /// constructor for CFishBeta
    CFishBeta(CAquarium* aquarium) ;

    /// Default constructor (disabled)
    CFishBeta() = delete;

    /// Copy constructor (disabled)
    CFishBeta(const CFishBeta&) = delete;

    virtual std::shared_ptr<xmlnode::CXmlNode>
        XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

protected:
    /// Function to set speed for fish
    double virtual SetSpeed()override
    {
        auto mSpeedX = 20 + ((double)rand()/ RAND_MAX) * 20;
        return mSpeedX;
    };
};

