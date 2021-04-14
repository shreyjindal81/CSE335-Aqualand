/**
 * \file Aquarium.h
 *
 * \author Shrey Jindal
 *
 * Class contains our aquarium
 *
 * the aquarium is a self drawing body
 */
#pragma once
#include<memory>
#include <vector>
#include "Item.h"

/**
*this is the aquarium
*the aquarium contains all the items that are in the output portal
*/
class CAquarium
{
public:
	void OnDraw(Gdiplus::Graphics* graphics); ///< Draws the required drawing in the output
	CAquarium(); ///< contructor
	void Add(std::shared_ptr<CItem> item); ///< adds items to list of all items in aquarium
	std::shared_ptr<CItem> HitTest(int x, int y); 
	void ToTop(std::shared_ptr<CItem> item); ///< this function brings the last clicked item to top. (last in vector)
	void Save(const std::wstring& filename);
	void Load(const std::wstring& filename);
	void XmlItem(const std::shared_ptr<xmlnode::CXmlNode>& node);
	void Clear();

	void Update(double elapsed);
	/// Get the width of the aquarium
/// \returns Aquarium width
	int GetWidth() const { return mBackground->GetWidth(); }

	/// Get the height of the aquarium
	/// \returns Aquarium height
	int GetHeight() const { return mBackground->GetHeight(); }
private:
	std::unique_ptr<Gdiplus::Bitmap> mBackground; ///< Background image
		/// All of the items to populate our aquarium
	std::vector<std::shared_ptr<CItem> > mItems;
};

