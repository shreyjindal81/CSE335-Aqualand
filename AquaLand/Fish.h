#pragma once
#include "Item.h"

/**
 * Base class for a fish
 * This applies to all of the fish, but not the decor
 * items in the aquarium.
 */
class CFish : public CItem
{
public:
    /// Default constructor (disabled)
    CFish() = delete;

    /// Copy constructor (disabled)
    CFish(const CFish&) = delete;
    virtual void Update(double elapsed) ;
    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
protected:

    CFish(CAquarium* aquarium, const std::wstring& filename);
    double virtual SetSpeed() = 0;
    auto getSpeedX() { return mSpeedX; };
    auto getSpeedY() { return mSpeedY; };
    auto getYC() { return mYCenter; };
    auto getYR() { return mYRange; };
    auto setSpeedX(double x) { mSpeedX = x; };
    auto setSpeedY(double y) { mSpeedY = y; };

private:
    /// Fish speed in the X direction
    double mSpeedX;

    /// Fish speed in the Y direction
    double mSpeedY;

    ///A variable we create for the Fish's vertical range
    double mYRange;

    ///A variable for centre of fish's Y movement
    double mYCenter;
};

