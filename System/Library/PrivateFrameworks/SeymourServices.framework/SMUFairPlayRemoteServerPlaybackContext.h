/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface SMUFairPlayRemoteServerPlaybackContext : NSObject {

	unsigned _identifier;
	NSData* _blob;

}

@property (nonatomic,readonly) unsigned identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * blob;               //@synthesize blob=_blob - In the implementation block
-(unsigned)identifier;
-(NSData *)blob;
-(id)initWithBlob:(id)arg1 identifier:(unsigned)arg2 ;
@end

