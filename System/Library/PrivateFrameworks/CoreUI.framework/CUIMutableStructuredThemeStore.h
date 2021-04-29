/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;
	NSMutableDictionary* _apperanceNameIdentifierStore;
	int _maxApperanceNameIdentifier;
	NSMutableDictionary* _renditionInfoStore;

}
-(void)dealloc;
-(id)path;
-(id)initWithIdentifier:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(id)defaultAppearanceName;
-(renditionkeytoken*)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2 ;
-(void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(renditionkeytoken*)arg2 ;
-(void)_removeRenditionInfoForImageWithName:(id)arg1 ;
-(void)clearRenditionCache;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)allImageNames;
-(id)themeStore;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(id)imagesWithName:(id)arg1 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(id)appearances;
@end

