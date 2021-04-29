/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKContinuationMetadataBase.h>

@class NSURL, NSString;

@interface WLKDeltaContinuationMetadata : WLKContinuationMetadataBase {

	long long _deltaType;
	NSURL* _playbackURL;
	NSString* _adamID;

}

@property (nonatomic,readonly) long long deltaType;              //@synthesize deltaType=_deltaType - In the implementation block
@property (nonatomic,readonly) NSURL * playbackURL;              //@synthesize playbackURL=_playbackURL - In the implementation block
@property (nonatomic,readonly) NSString * adamID;                //@synthesize adamID=_adamID - In the implementation block
+(long long)_deltaTypeForString:(id)arg1 ;
-(NSString *)adamID;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)deltaType;
-(NSURL *)playbackURL;
@end

