/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IMImageModifier.h>

@class NSString;

@interface IMImageBlur : NSObject <IMImageModifier> {

	long long _style;
	double _radius;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double radius;                       //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(double)radius;
-(id)_blurredImageFromSourceImage:(id)arg1 ;
-(BOOL)hasModifications;
-(id)_backdropBlurSettings;
-(id)_newBackdropSettings;
-(id)_lightBackdropBlurSettings;
-(id)modificationCacheKey;
-(id)imageFromSourceImage:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 radius:(double)arg2 ;
@end

