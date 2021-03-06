/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject {

	NSString* _identifier;
	NSString* _sessionType;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * sessionType;              //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3 ;
-(NSData *)data;
-(id)_init;
-(NSString *)identifier;
-(NSString *)sessionType;
@end

