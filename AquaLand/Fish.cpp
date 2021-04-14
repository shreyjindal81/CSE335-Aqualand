#include "pch.h"
#include "Fish.h"
#include "Aquarium.h"

/// Maximum speed in the X direction in
/// in pixels per second
const double MaxSpeedX = 150;
const double MaxSpeedY = 150;
const double MaxYRange = 100;
const double MaxYCenter = 800;
/**
 * Constructor
 * \param aquarium The aquarium we are in
 * \param filename Filename for the image we use
 */
CFish::CFish(CAquarium* aquarium, const std::wstring& filename) :
    CItem(aquarium, filename)
{
    mSpeedX = ((double)rand() / RAND_MAX) * MaxSpeedX;
    mSpeedY = ((double)rand() / RAND_MAX) * MaxSpeedY;
    mYRange = ((double)rand() / RAND_MAX) * MaxYRange;
    mYCenter = ((double)rand() / RAND_MAX) * MaxYCenter;
}

/**
 * Handle updates in time of our fish
 *
 * This is called before we draw and allows us to
 * move our fish. We add our speed times the amount
 * of time that has elapsed.
 * \param elapsed Time elapsed since the class call
 */
void CFish::Update(double elapsed)
{
    SetLocation(GetX() + mSpeedX * elapsed,
        GetY() + mSpeedY * elapsed);

    if (mSpeedX > 0 && GetX() + mItemImage->GetWidth()/2 >= GetAquarium()->GetWidth()-10)
    {
        mSpeedX = -mSpeedX;
        SetMirror(mSpeedX < 0);
    }

    else if (mSpeedX < 0 && GetX() - mItemImage->GetWidth() / 2 <= 10)
    {
        mSpeedX = -mSpeedX;
        SetMirror(mSpeedX < 0);
    }

    if ((mSpeedY > 0 && GetY() > mYCenter + mYRange) ||
        (mSpeedY > 0 && GetY() + mItemImage->GetHeight() / 2 
        >= GetAquarium()->GetHeight() - 10))
    {
        mSpeedY = -mSpeedY;
    }

    else if ((mSpeedY < 0 && GetY() < mYCenter - mYRange)||
        (mSpeedY < 0 && GetY() - mItemImage->GetHeight() / 2 <= 10))
    {
        mSpeedY = -mSpeedY;
    }
}

std::shared_ptr<xmlnode::CXmlNode>
CFish::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
    auto itemNode = CItem::XmlSave(node);
    itemNode->SetAttribute(L"speedX", mSpeedX);
    itemNode->SetAttribute(L"speedY", mSpeedY);
    return itemNode;
}