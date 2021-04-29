/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUI/CoreUI-Structs.h>
@class NSData, _CUIThemePixelRendition, _CSIRenditionBlockData, NSString;

@interface CSIHelper : NSObject {

	slice slice;
	NSData* csiData;
	csibitmap* bmp;
	os_unfair_lock_s renditionLock;
	_CUIThemePixelRendition* rendition;
	_CSIRenditionBlockData* sharedBlockDataBGRX;
	_CSIRenditionBlockData* sharedBlockDataRGBX;
	_CSIRenditionBlockData* sharedBlockDataGray;
	_CSIRenditionBlockData* retainedBlockData;
	NSString* blockDataCacheKeyBGRX;
	NSString* blockDataCacheKeyRGBX;
	NSString* blockDataCacheKeyGray;
	unsigned long long sourceRowbytes;
	unsigned shouldCache : 1;
	unsigned usedForDataProvider : 1;
	unsigned _reserved : 30;

}
-(void)dealloc;
@end
