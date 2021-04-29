/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKMediaFeeder.h>

@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder {

	NSArray* _mediaURLs;

}
+(id)supportedSettings;
+(BOOL)isRemote;
+(id)mediaFeederWithMediaObjects:(id)arg1 ;
+(id)mediaFeederWithMediaURLs:(id)arg1 ;
+(BOOL)supportLiveUpdates;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithMediaObjects:(id)arg1 ;
-(id)initWithMediaURLs:(id)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
@end
