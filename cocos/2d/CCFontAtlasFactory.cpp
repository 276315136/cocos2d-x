//
//  CCFontAtlasFactory.cpp
//  cocos2d_libs
//
//  Created by Carlo Morgantini on 7/23/13.
//
//

#include "CCFontAtlasFactory.h"
#include "CCFontFNT.h"

// carloX this NEEDS to be changed
#include "CCLabelBMFont.h"

NS_CC_BEGIN

FontAtlas * FontAtlasFactory::createAtlasFromTTF(const char* fntFilePath, int fontSize, GlyphCollection glyphs, const char *customGlyphs)
{
    
    Font *font = Font::createWithTTF(fntFilePath, fontSize, glyphs, customGlyphs);
    if (font)
        return font->createFontAtlas();
    else
        return nullptr;
}

FontAtlas * FontAtlasFactory::createAtlasFromFNT(const char* fntFilePath)
{
    Font *font = Font::createWithFNT(fntFilePath);
    
    if(font)
    {
        FontAtlas * atlas = font->createFontAtlas();
        font->release();
        return atlas;
    }
    else
        return nullptr;
}

NS_CC_END
