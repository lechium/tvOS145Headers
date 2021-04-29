/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject {

	NSData* _data;
	NSUUID* _clientID;

}

@property (retain) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(id)initWithData:(id)arg1 clientID:(id)arg2 ;
@end

