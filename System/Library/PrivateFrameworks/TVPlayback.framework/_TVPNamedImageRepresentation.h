/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPImageRepresentation.h>

@class NSBundle, NSString, UITraitCollection;

@interface _TVPNamedImageRepresentation : TVPImageRepresentation {

	NSBundle* _bundle;
	NSString* _imageName;
	UITraitCollection* _traitCollection;

}
-(CGImageRef)_originalImage;
-(id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(id)_originalImageCacheKey;
@end

